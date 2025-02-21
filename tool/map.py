import cv2
import numpy as np

def find_black_pixels(image_path):
    # 画像を読み込む
    image = cv2.imread(image_path)
    if image is None:
        raise FileNotFoundError("画像が見つかりません")
    
    # グレースケールに変換
    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

    # 黒色（閾値なし）
    lower_bound = np.array(0, dtype=np.uint8)
    upper_bound = np.array(50, dtype=np.uint8)  # 多少のノイズを考慮

    # 黒色部分をマスク
    mask = cv2.inRange(gray, lower_bound, upper_bound)

    # マスクをウィンドウに表示
    cv2.imshow("Mask", mask)
    cv2.waitKey(0)
    cv2.destroyAllWindows()

    # 非ゼロ（黒色のピクセル）の座標を取得
    yx_coords = np.column_stack(np.where(mask > 0))
    
    # [[x1, y1], [x2, y2], ...] の形式に変換
    coordinates = [[int(x), int(y)] for y, x in yx_coords]

    return coordinates

def format_for_arduino(coordinates):
    formatted = "int coordinates[][2] = {\n"
    for i, (x, y) in enumerate(coordinates):
        if i % 10 == 0 and i != 0:
            formatted += "\n"
        formatted += f"    {{{x}, {y}}}, "
    formatted = formatted.rstrip(', ') + "\n};\n"
    formatted += f"int numPoints = {len(coordinates)};\n"
    return formatted

# 使用例
image_path = "eye.png"  # 画像のパス
coordinates = find_black_pixels(image_path)

arduino_code = format_for_arduino(coordinates)

# 出力をテキストファイルに保存
output_file_path = "coordinates.txt"
with open(output_file_path, "w") as file:
    file.write(arduino_code)

print(f"Arduinoコードが {output_file_path} に保存されました。")
