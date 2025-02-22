// map
int eye_map[][2] = {
  {12, 23},     {13, 23},     {12, 24},     {13, 24},     {14, 24},     {15, 24},     {12, 25},     {13, 25},     {14, 25},     {15, 25}, 
  {16, 25},     {17, 25},     {12, 26},     {13, 26},     {14, 26},     {15, 26},     {16, 26},     {17, 26},     {18, 26},     {19, 26}, 
  {20, 26},     {12, 27},     {13, 27},     {14, 27},     {15, 27},     {16, 27},     {17, 27},     {18, 27},     {19, 27},     {20, 27}, 
  {21, 27},     {22, 27},     {11, 28},     {12, 28},     {13, 28},     {14, 28},     {15, 28},     {16, 28},     {17, 28},     {18, 28}, 
  {19, 28},     {20, 28},     {21, 28},     {22, 28},     {23, 28},     {24, 28},     {11, 29},     {12, 29},     {13, 29},     {14, 29}, 
  {15, 29},     {16, 29},     {17, 29},     {18, 29},     {19, 29},     {20, 29},     {21, 29},     {22, 29},     {23, 29},     {24, 29}, 
  {25, 29},     {26, 29},     {11, 30},     {12, 30},     {13, 30},     {14, 30},     {15, 30},     {16, 30},     {17, 30},     {18, 30}, 
  {19, 30},     {20, 30},     {21, 30},     {22, 30},     {23, 30},     {24, 30},     {25, 30},     {26, 30},     {27, 30},     {28, 30}, 
  {11, 31},     {12, 31},     {13, 31},     {14, 31},     {15, 31},     {16, 31},     {17, 31},     {18, 31},     {19, 31},     {20, 31}, 
  {21, 31},     {22, 31},     {23, 31},     {24, 31},     {25, 31},     {26, 31},     {27, 31},     {28, 31},     {29, 31},     {30, 31}, 
  {11, 32},     {12, 32},     {13, 32},     {14, 32},     {15, 32},     {16, 32},     {17, 32},     {18, 32},     {19, 32},     {20, 32}, 
  {21, 32},     {22, 32},     {23, 32},     {24, 32},     {25, 32},     {26, 32},     {27, 32},     {28, 32},     {29, 32},     {30, 32}, 
  {31, 32},     {32, 32},     {11, 33},     {12, 33},     {13, 33},     {14, 33},     {15, 33},     {16, 33},     {17, 33},     {18, 33}, 
  {19, 33},     {20, 33},     {21, 33},     {22, 33},     {23, 33},     {24, 33},     {25, 33},     {26, 33},     {27, 33},     {28, 33}, 
  {29, 33},     {30, 33},     {31, 33},     {32, 33},     {33, 33},     {34, 33},     {11, 34},     {12, 34},     {13, 34},     {14, 34}, 
  {15, 34},     {16, 34},     {17, 34},     {18, 34},     {19, 34},     {20, 34},     {21, 34},     {22, 34},     {23, 34},     {24, 34}, 
  {25, 34},     {26, 34},     {27, 34},     {28, 34},     {29, 34},     {30, 34},     {31, 34},     {32, 34},     {33, 34},     {34, 34}, 
  {35, 34},     {36, 34},     {11, 35},     {12, 35},     {13, 35},     {14, 35},     {15, 35},     {16, 35},     {17, 35},     {18, 35}, 
  {19, 35},     {20, 35},     {21, 35},     {22, 35},     {23, 35},     {24, 35},     {25, 35},     {26, 35},     {27, 35},     {28, 35}, 
  {29, 35},     {30, 35},     {31, 35},     {32, 35},     {33, 35},     {34, 35},     {35, 35},     {36, 35},     {37, 35},     {38, 35}, 
  {11, 36},     {12, 36},     {13, 36},     {14, 36},     {15, 36},     {16, 36},     {17, 36},     {18, 36},     {19, 36},     {20, 36}, 
  {21, 36},     {22, 36},     {23, 36},     {24, 36},     {25, 36},     {26, 36},     {27, 36},     {28, 36},     {29, 36},     {30, 36}, 
  {31, 36},     {32, 36},     {33, 36},     {34, 36},     {35, 36},     {36, 36},     {37, 36},     {38, 36},     {39, 36},     {40, 36}, 
  {11, 37},     {12, 37},     {13, 37},     {14, 37},     {15, 37},     {16, 37},     {17, 37},     {18, 37},     {19, 37},     {20, 37}, 
  {21, 37},     {22, 37},     {23, 37},     {24, 37},     {25, 37},     {26, 37},     {27, 37},     {28, 37},     {29, 37},     {30, 37}, 
  {31, 37},     {32, 37},     {33, 37},     {34, 37},     {35, 37},     {36, 37},     {37, 37},     {38, 37},     {39, 37},     {40, 37}, 
  {41, 37},     {42, 37},     {12, 38},     {13, 38},     {14, 38},     {15, 38},     {16, 38},     {17, 38},     {18, 38},     {19, 38}, 
  {20, 38},     {21, 38},     {22, 38},     {23, 38},     {24, 38},     {25, 38},     {26, 38},     {27, 38},     {28, 38},     {29, 38}, 
  {30, 38},     {31, 38},     {32, 38},     {33, 38},     {34, 38},     {35, 38},     {36, 38},     {37, 38},     {38, 38},     {39, 38}, 
  {40, 38},     {41, 38},     {42, 38},     {43, 38},     {44, 38},     {12, 39},     {13, 39},     {14, 39},     {15, 39},     {16, 39}, 
  {17, 39},     {18, 39},     {19, 39},     {20, 39},     {21, 39},     {22, 39},     {23, 39},     {24, 39},     {25, 39},     {26, 39}, 
  {27, 39},     {28, 39},     {29, 39},     {30, 39},     {31, 39},     {32, 39},     {33, 39},     {34, 39},     {35, 39},     {36, 39}, 
  {37, 39},     {38, 39},     {39, 39},     {40, 39},     {41, 39},     {42, 39},     {43, 39},     {44, 39},     {45, 39},     {46, 39}, 
  {12, 40},     {13, 40},     {14, 40},     {15, 40},     {16, 40},     {17, 40},     {18, 40},     {19, 40},     {20, 40},     {21, 40}, 
  {22, 40},     {23, 40},     {24, 40},     {25, 40},     {26, 40},     {27, 40},     {28, 40},     {29, 40},     {30, 40},     {31, 40}, 
  {32, 40},     {33, 40},     {34, 40},     {35, 40},     {36, 40},     {37, 40},     {38, 40},     {39, 40},     {40, 40},     {41, 40}, 
  {42, 40},     {43, 40},     {44, 40},     {45, 40},     {46, 40},     {47, 40},     {48, 40},     {12, 41},     {13, 41},     {14, 41}, 
  {15, 41},     {16, 41},     {17, 41},     {18, 41},     {19, 41},     {20, 41},     {21, 41},     {22, 41},     {23, 41},     {24, 41}, 
  {25, 41},     {26, 41},     {27, 41},     {28, 41},     {29, 41},     {30, 41},     {31, 41},     {32, 41},     {33, 41},     {34, 41}, 
  {35, 41},     {36, 41},     {37, 41},     {38, 41},     {39, 41},     {40, 41},     {41, 41},     {42, 41},     {43, 41},     {44, 41}, 
  {45, 41},     {46, 41},     {47, 41},     {48, 41},     {49, 41},     {50, 41},     {12, 42},     {13, 42},     {14, 42},     {15, 42}, 
  {16, 42},     {17, 42},     {18, 42},     {19, 42},     {20, 42},     {21, 42},     {22, 42},     {23, 42},     {24, 42},     {25, 42}, 
  {26, 42},     {27, 42},     {28, 42},     {29, 42},     {30, 42},     {31, 42},     {32, 42},     {33, 42},     {34, 42},     {35, 42}, 
  {36, 42},     {37, 42},     {38, 42},     {39, 42},     {40, 42},     {41, 42},     {42, 42},     {43, 42},     {44, 42},     {45, 42}, 
  {46, 42},     {47, 42},     {48, 42},     {49, 42},     {50, 42},     {51, 42},     {52, 42},     {12, 43},     {13, 43},     {14, 43}, 
  {15, 43},     {16, 43},     {17, 43},     {18, 43},     {19, 43},     {20, 43},     {21, 43},     {22, 43},     {23, 43},     {24, 43}, 
  {25, 43},     {26, 43},     {27, 43},     {28, 43},     {29, 43},     {30, 43},     {31, 43},     {32, 43},     {33, 43},     {34, 43}, 
  {35, 43},     {36, 43},     {37, 43},     {38, 43},     {39, 43},     {40, 43},     {41, 43},     {42, 43},     {43, 43},     {44, 43}, 
  {45, 43},     {46, 43},     {47, 43},     {48, 43},     {49, 43},     {50, 43},     {51, 43},     {52, 43},     {53, 43},     {54, 43}, 
  {13, 44},     {14, 44},     {15, 44},     {16, 44},     {17, 44},     {18, 44},     {19, 44},     {20, 44},     {21, 44},     {22, 44}, 
  {23, 44},     {24, 44},     {25, 44},     {26, 44},     {27, 44},     {28, 44},     {29, 44},     {30, 44},     {31, 44},     {32, 44}, 
  {33, 44},     {34, 44},     {35, 44},     {36, 44},     {37, 44},     {38, 44},     {39, 44},     {40, 44},     {41, 44},     {42, 44}, 
  {43, 44},     {44, 44},     {45, 44},     {46, 44},     {47, 44},     {48, 44},     {49, 44},     {50, 44},     {51, 44},     {52, 44}, 
  {53, 44},     {54, 44},     {55, 44},     {56, 44},     {13, 45},     {14, 45},     {15, 45},     {16, 45},     {17, 45},     {18, 45}, 
  {19, 45},     {20, 45},     {21, 45},     {22, 45},     {23, 45},     {24, 45},     {25, 45},     {26, 45},     {27, 45},     {28, 45}, 
  {29, 45},     {30, 45},     {31, 45},     {32, 45},     {33, 45},     {34, 45},     {35, 45},     {36, 45},     {37, 45},     {38, 45}, 
  {39, 45},     {40, 45},     {41, 45},     {42, 45},     {43, 45},     {44, 45},     {45, 45},     {46, 45},     {47, 45},     {48, 45}, 
  {49, 45},     {50, 45},     {51, 45},     {52, 45},     {53, 45},     {54, 45},     {55, 45},     {56, 45},     {57, 45},     {58, 45}, 
  {14, 46},     {15, 46},     {16, 46},     {17, 46},     {18, 46},     {19, 46},     {20, 46},     {21, 46},     {22, 46},     {23, 46}, 
  {24, 46},     {25, 46},     {26, 46},     {27, 46},     {28, 46},     {29, 46},     {30, 46},     {31, 46},     {32, 46},     {33, 46}, 
  {34, 46},     {35, 46},     {36, 46},     {37, 46},     {38, 46},     {39, 46},     {40, 46},     {41, 46},     {42, 46},     {43, 46}, 
  {44, 46},     {45, 46},     {46, 46},     {47, 46},     {48, 46},     {49, 46},     {50, 46},     {51, 46},     {52, 46},     {53, 46}, 
  {54, 46},     {55, 46},     {56, 46},     {57, 46},     {58, 46},     {59, 46},     {60, 46},     {14, 47},     {15, 47},     {16, 47}, 
  {17, 47},     {18, 47},     {19, 47},     {20, 47},     {21, 47},     {22, 47},     {23, 47},     {24, 47},     {25, 47},     {26, 47}, 
  {27, 47},     {28, 47},     {29, 47},     {30, 47},     {31, 47},     {32, 47},     {33, 47},     {34, 47},     {35, 47},     {36, 47}, 
  {37, 47},     {38, 47},     {39, 47},     {40, 47},     {41, 47},     {42, 47},     {43, 47},     {44, 47},     {45, 47},     {46, 47}, 
  {47, 47},     {48, 47},     {49, 47},     {50, 47},     {51, 47},     {52, 47},     {53, 47},     {54, 47},     {55, 47},     {56, 47}, 
  {57, 47},     {58, 47},     {59, 47},     {60, 47},     {61, 47},     {62, 47},     {15, 48},     {16, 48},     {17, 48},     {18, 48}, 
  {19, 48},     {20, 48},     {21, 48},     {22, 48},     {23, 48},     {24, 48},     {25, 48},     {26, 48},     {27, 48},     {28, 48}, 
  {29, 48},     {30, 48},     {31, 48},     {32, 48},     {33, 48},     {34, 48},     {35, 48},     {36, 48},     {37, 48},     {38, 48}, 
  {39, 48},     {40, 48},     {41, 48},     {42, 48},     {43, 48},     {44, 48},     {45, 48},     {46, 48},     {47, 48},     {48, 48}, 
  {49, 48},     {50, 48},     {51, 48},     {52, 48},     {53, 48},     {54, 48},     {55, 48},     {56, 48},     {57, 48},     {58, 48}, 
  {59, 48},     {60, 48},     {61, 48},     {62, 48},     {63, 48},     {64, 48},     {15, 49},     {16, 49},     {17, 49},     {18, 49}, 
  {19, 49},     {20, 49},     {21, 49},     {22, 49},     {23, 49},     {24, 49},     {25, 49},     {26, 49},     {27, 49},     {28, 49}, 
  {29, 49},     {30, 49},     {31, 49},     {32, 49},     {33, 49},     {34, 49},     {35, 49},     {36, 49},     {37, 49},     {38, 49}, 
  {39, 49},     {40, 49},     {41, 49},     {42, 49},     {43, 49},     {44, 49},     {45, 49},     {46, 49},     {47, 49},     {48, 49}, 
  {49, 49},     {50, 49},     {51, 49},     {52, 49},     {53, 49},     {54, 49},     {55, 49},     {56, 49},     {57, 49},     {58, 49}, 
  {59, 49},     {60, 49},     {61, 49},     {62, 49},     {63, 49},     {64, 49},     {65, 49},     {66, 49},     {16, 50},     {17, 50}, 
  {18, 50},     {19, 50},     {20, 50},     {21, 50},     {22, 50},     {23, 50},     {24, 50},     {25, 50},     {26, 50},     {27, 50}, 
  {28, 50},     {29, 50},     {30, 50},     {31, 50},     {32, 50},     {33, 50},     {34, 50},     {35, 50},     {36, 50},     {37, 50}, 
  {38, 50},     {39, 50},     {40, 50},     {41, 50},     {42, 50},     {43, 50},     {44, 50},     {45, 50},     {46, 50},     {47, 50}, 
  {48, 50},     {49, 50},     {50, 50},     {51, 50},     {52, 50},     {53, 50},     {54, 50},     {55, 50},     {56, 50},     {57, 50}, 
  {58, 50},     {59, 50},     {60, 50},     {61, 50},     {62, 50},     {63, 50},     {64, 50},     {65, 50},     {66, 50},     {67, 50}, 
  {68, 50},     {16, 51},     {17, 51},     {18, 51},     {19, 51},     {20, 51},     {21, 51},     {22, 51},     {23, 51},     {24, 51}, 
  {25, 51},     {26, 51},     {27, 51},     {28, 51},     {29, 51},     {30, 51},     {31, 51},     {32, 51},     {33, 51},     {34, 51}, 
  {35, 51},     {36, 51},     {37, 51},     {38, 51},     {39, 51},     {40, 51},     {41, 51},     {42, 51},     {43, 51},     {44, 51}, 
  {45, 51},     {46, 51},     {47, 51},     {48, 51},     {49, 51},     {50, 51},     {51, 51},     {52, 51},     {53, 51},     {54, 51}, 
  {55, 51},     {56, 51},     {57, 51},     {58, 51},     {59, 51},     {60, 51},     {61, 51},     {62, 51},     {63, 51},     {64, 51}, 
  {65, 51},     {66, 51},     {67, 51},     {68, 51},     {69, 51},     {70, 51},     {17, 52},     {18, 52},     {19, 52},     {20, 52}, 
  {21, 52},     {22, 52},     {23, 52},     {24, 52},     {25, 52},     {26, 52},     {27, 52},     {28, 52},     {29, 52},     {30, 52}, 
  {31, 52},     {32, 52},     {33, 52},     {34, 52},     {35, 52},     {36, 52},     {37, 52},     {38, 52},     {39, 52},     {40, 52}, 
  {41, 52},     {42, 52},     {43, 52},     {44, 52},     {45, 52},     {46, 52},     {47, 52},     {48, 52},     {49, 52},     {50, 52}, 
  {51, 52},     {52, 52},     {53, 52},     {54, 52},     {55, 52},     {56, 52},     {57, 52},     {58, 52},     {59, 52},     {60, 52}, 
  {61, 52},     {62, 52},     {63, 52},     {64, 52},     {65, 52},     {66, 52},     {67, 52},     {68, 52},     {69, 52},     {70, 52}, 
  {71, 52},     {72, 52},     {18, 53},     {19, 53},     {20, 53},     {21, 53},     {22, 53},     {23, 53},     {24, 53},     {25, 53}, 
  {26, 53},     {27, 53},     {28, 53},     {29, 53},     {30, 53},     {31, 53},     {32, 53},     {33, 53},     {34, 53},     {35, 53}, 
  {36, 53},     {37, 53},     {38, 53},     {39, 53},     {40, 53},     {41, 53},     {42, 53},     {43, 53},     {44, 53},     {45, 53}, 
  {46, 53},     {47, 53},     {48, 53},     {49, 53},     {50, 53},     {51, 53},     {52, 53},     {53, 53},     {54, 53},     {55, 53}, 
  {56, 53},     {57, 53},     {58, 53},     {59, 53},     {60, 53},     {61, 53},     {62, 53},     {63, 53},     {64, 53},     {65, 53}, 
  {66, 53},     {67, 53},     {68, 53},     {69, 53},     {70, 53},     {71, 53},     {72, 53},     {73, 53},     {74, 53},     {19, 54}, 
  {20, 54},     {21, 54},     {22, 54},     {23, 54},     {24, 54},     {25, 54},     {26, 54},     {27, 54},     {28, 54},     {29, 54}, 
  {30, 54},     {31, 54},     {32, 54},     {33, 54},     {34, 54},     {35, 54},     {36, 54},     {37, 54},     {38, 54},     {39, 54}, 
  {40, 54},     {41, 54},     {42, 54},     {43, 54},     {44, 54},     {45, 54},     {46, 54},     {47, 54},     {48, 54},     {49, 54}, 
  {50, 54},     {51, 54},     {52, 54},     {53, 54},     {54, 54},     {55, 54},     {56, 54},     {57, 54},     {58, 54},     {59, 54}, 
  {60, 54},     {61, 54},     {62, 54},     {63, 54},     {64, 54},     {65, 54},     {66, 54},     {67, 54},     {68, 54},     {69, 54}, 
  {70, 54},     {71, 54},     {72, 54},     {73, 54},     {74, 54},     {75, 54},     {76, 54},     {20, 55},     {21, 55},     {22, 55}, 
  {23, 55},     {24, 55},     {25, 55},     {26, 55},     {27, 55},     {28, 55},     {29, 55},     {30, 55},     {31, 55},     {32, 55}, 
  {33, 55},     {34, 55},     {35, 55},     {36, 55},     {37, 55},     {38, 55},     {39, 55},     {40, 55},     {41, 55},     {42, 55}, 
  {43, 55},     {44, 55},     {45, 55},     {46, 55},     {47, 55},     {48, 55},     {49, 55},     {50, 55},     {51, 55},     {52, 55}, 
  {53, 55},     {54, 55},     {55, 55},     {56, 55},     {57, 55},     {58, 55},     {59, 55},     {60, 55},     {61, 55},     {62, 55}, 
  {63, 55},     {64, 55},     {65, 55},     {66, 55},     {67, 55},     {68, 55},     {69, 55},     {70, 55},     {71, 55},     {72, 55}, 
  {73, 55},     {74, 55},     {75, 55},     {76, 55},     {77, 55},     {78, 55},     {21, 56},     {22, 56},     {23, 56},     {24, 56}, 
  {25, 56},     {26, 56},     {27, 56},     {28, 56},     {29, 56},     {30, 56},     {31, 56},     {32, 56},     {33, 56},     {34, 56}, 
  {35, 56},     {36, 56},     {37, 56},     {38, 56},     {39, 56},     {40, 56},     {41, 56},     {42, 56},     {43, 56},     {44, 56}, 
  {45, 56},     {46, 56},     {47, 56},     {48, 56},     {49, 56},     {50, 56},     {51, 56},     {52, 56},     {53, 56},     {54, 56}, 
  {55, 56},     {56, 56},     {57, 56},     {58, 56},     {59, 56},     {60, 56},     {61, 56},     {62, 56},     {63, 56},     {64, 56}, 
  {65, 56},     {66, 56},     {67, 56},     {68, 56},     {69, 56},     {70, 56},     {71, 56},     {72, 56},     {73, 56},     {74, 56}, 
  {75, 56},     {76, 56},     {77, 56},     {78, 56},     {79, 56},     {80, 56},     {22, 57},     {23, 57},     {24, 57},     {25, 57}, 
  {26, 57},     {27, 57},     {28, 57},     {29, 57},     {30, 57},     {31, 57},     {32, 57},     {33, 57},     {34, 57},     {35, 57}, 
  {36, 57},     {37, 57},     {38, 57},     {39, 57},     {40, 57},     {41, 57},     {42, 57},     {43, 57},     {44, 57},     {45, 57}, 
  {46, 57},     {47, 57},     {48, 57},     {49, 57},     {50, 57},     {51, 57},     {52, 57},     {53, 57},     {54, 57},     {55, 57}, 
  {56, 57},     {57, 57},     {58, 57},     {59, 57},     {60, 57},     {61, 57},     {62, 57},     {63, 57},     {64, 57},     {65, 57}, 
  {66, 57},     {67, 57},     {68, 57},     {69, 57},     {70, 57},     {71, 57},     {72, 57},     {73, 57},     {74, 57},     {75, 57}, 
  {76, 57},     {77, 57},     {78, 57},     {79, 57},     {80, 57},     {81, 57},     {82, 57},     {23, 58},     {24, 58},     {25, 58}, 
  {26, 58},     {27, 58},     {28, 58},     {29, 58},     {30, 58},     {31, 58},     {32, 58},     {33, 58},     {34, 58},     {35, 58}, 
  {36, 58},     {37, 58},     {38, 58},     {39, 58},     {40, 58},     {41, 58},     {42, 58},     {43, 58},     {44, 58},     {45, 58}, 
  {46, 58},     {47, 58},     {48, 58},     {49, 58},     {50, 58},     {51, 58},     {52, 58},     {53, 58},     {54, 58},     {55, 58}, 
  {56, 58},     {57, 58},     {58, 58},     {59, 58},     {60, 58},     {61, 58},     {62, 58},     {63, 58},     {64, 58},     {65, 58}, 
  {66, 58},     {67, 58},     {68, 58},     {69, 58},     {70, 58},     {71, 58},     {72, 58},     {73, 58},     {74, 58},     {75, 58}, 
  {76, 58},     {77, 58},     {78, 58},     {79, 58},     {80, 58},     {81, 58},     {82, 58},     {83, 58},     {84, 58},     {24, 59}, 
  {25, 59},     {26, 59},     {27, 59},     {28, 59},     {29, 59},     {30, 59},     {31, 59},     {32, 59},     {33, 59},     {34, 59}, 
  {35, 59},     {36, 59},     {37, 59},     {38, 59},     {39, 59},     {40, 59},     {41, 59},     {42, 59},     {43, 59},     {44, 59}, 
  {45, 59},     {46, 59},     {47, 59},     {48, 59},     {49, 59},     {50, 59},     {51, 59},     {52, 59},     {53, 59},     {54, 59}, 
  {55, 59},     {56, 59},     {57, 59},     {58, 59},     {59, 59},     {60, 59},     {61, 59},     {62, 59},     {63, 59},     {64, 59}, 
  {65, 59},     {66, 59},     {67, 59},     {68, 59},     {69, 59},     {70, 59},     {71, 59},     {72, 59},     {73, 59},     {74, 59}, 
  {75, 59},     {76, 59},     {77, 59},     {78, 59},     {79, 59},     {80, 59},     {81, 59},     {82, 59},     {83, 59},     {84, 59}, 
  {85, 59},     {86, 59},     {26, 60},     {27, 60},     {28, 60},     {29, 60},     {30, 60},     {31, 60},     {32, 60},     {33, 60}, 
  {34, 60},     {35, 60},     {36, 60},     {37, 60},     {38, 60},     {39, 60},     {40, 60},     {41, 60},     {42, 60},     {43, 60}, 
  {44, 60},     {45, 60},     {46, 60},     {47, 60},     {48, 60},     {49, 60},     {50, 60},     {51, 60},     {52, 60},     {53, 60}, 
  {54, 60},     {55, 60},     {56, 60},     {57, 60},     {58, 60},     {59, 60},     {60, 60},     {61, 60},     {62, 60},     {63, 60}, 
  {64, 60},     {65, 60},     {66, 60},     {67, 60},     {68, 60},     {69, 60},     {70, 60},     {71, 60},     {72, 60},     {73, 60}, 
  {74, 60},     {75, 60},     {76, 60},     {77, 60},     {78, 60},     {79, 60},     {80, 60},     {81, 60},     {82, 60},     {83, 60}, 
  {84, 60},     {85, 60},     {86, 60},     {87, 60},     {88, 60},     {27, 61},     {28, 61},     {29, 61},     {30, 61},     {31, 61}, 
  {32, 61},     {33, 61},     {34, 61},     {35, 61},     {36, 61},     {37, 61},     {38, 61},     {39, 61},     {40, 61},     {41, 61}, 
  {42, 61},     {43, 61},     {44, 61},     {45, 61},     {46, 61},     {47, 61},     {48, 61},     {49, 61},     {50, 61},     {51, 61}, 
  {52, 61},     {53, 61},     {54, 61},     {55, 61},     {56, 61},     {57, 61},     {58, 61},     {59, 61},     {60, 61},     {61, 61}, 
  {62, 61},     {63, 61},     {64, 61},     {65, 61},     {66, 61},     {67, 61},     {68, 61},     {69, 61},     {70, 61},     {71, 61}, 
  {72, 61},     {73, 61},     {74, 61},     {75, 61},     {76, 61},     {77, 61},     {78, 61},     {79, 61},     {80, 61},     {81, 61}, 
  {82, 61},     {83, 61},     {84, 61},     {85, 61},     {86, 61},     {87, 61},     {88, 61},     {89, 61},     {90, 61},     {91, 61}, 
  {29, 62},     {30, 62},     {31, 62},     {32, 62},     {33, 62},     {34, 62},     {35, 62},     {36, 62},     {37, 62},     {38, 62}, 
  {39, 62},     {40, 62},     {41, 62},     {42, 62},     {43, 62},     {44, 62},     {45, 62},     {46, 62},     {47, 62},     {48, 62}, 
  {49, 62},     {50, 62},     {51, 62},     {52, 62},     {53, 62},     {54, 62},     {55, 62},     {56, 62},     {57, 62},     {58, 62}, 
  {59, 62},     {60, 62},     {61, 62},     {62, 62},     {63, 62},     {64, 62},     {65, 62},     {66, 62},     {67, 62},     {68, 62}, 
  {69, 62},     {70, 62},     {71, 62},     {72, 62},     {73, 62},     {74, 62},     {75, 62},     {76, 62},     {77, 62},     {78, 62}, 
  {79, 62},     {80, 62},     {81, 62},     {82, 62},     {83, 62},     {84, 62},     {85, 62},     {86, 62},     {87, 62},     {88, 62}, 
  {89, 62},     {90, 62},     {31, 63},     {32, 63},     {33, 63},     {34, 63},     {35, 63},     {36, 63},     {37, 63},     {38, 63}, 
  {39, 63},     {40, 63},     {41, 63},     {42, 63},     {43, 63},     {44, 63},     {45, 63},     {46, 63},     {47, 63},     {48, 63}, 
  {49, 63},     {50, 63},     {51, 63},     {52, 63},     {53, 63},     {54, 63},     {55, 63},     {56, 63},     {57, 63},     {58, 63}, 
  {59, 63},     {60, 63},     {61, 63},     {62, 63},     {63, 63},     {64, 63},     {65, 63},     {66, 63},     {67, 63},     {68, 63}, 
  {69, 63},     {70, 63},     {71, 63},     {72, 63},     {73, 63},     {74, 63},     {75, 63},     {76, 63},     {77, 63},     {78, 63}, 
  {79, 63},     {80, 63},     {81, 63},     {82, 63},     {83, 63},     {84, 63},     {85, 63},     {86, 63},     {87, 63},     {88, 63}, 
  {89, 63},     {90, 63},     {33, 64},     {34, 64},     {35, 64},     {36, 64},     {37, 64},     {38, 64},     {39, 64},     {40, 64}, 
  {41, 64},     {42, 64},     {43, 64},     {44, 64},     {45, 64},     {46, 64},     {47, 64},     {48, 64},     {49, 64},     {50, 64}, 
  {51, 64},     {52, 64},     {53, 64},     {54, 64},     {55, 64},     {56, 64},     {57, 64},     {58, 64},     {59, 64},     {60, 64}, 
  {61, 64},     {62, 64},     {63, 64},     {64, 64},     {65, 64},     {66, 64},     {67, 64},     {68, 64},     {69, 64},     {70, 64}, 
  {71, 64},     {72, 64},     {73, 64},     {74, 64},     {75, 64},     {76, 64},     {77, 64},     {78, 64},     {79, 64},     {80, 64}, 
  {81, 64},     {82, 64},     {83, 64},     {84, 64},     {85, 64},     {86, 64},     {87, 64},     {88, 64},     {89, 64},     {34, 65}, 
  {35, 65},     {36, 65},     {37, 65},     {38, 65},     {39, 65},     {40, 65},     {41, 65},     {42, 65},     {43, 65},     {44, 65}, 
  {45, 65},     {46, 65},     {47, 65},     {48, 65},     {49, 65},     {50, 65},     {51, 65},     {52, 65},     {53, 65},     {54, 65}, 
  {55, 65},     {56, 65},     {57, 65},     {58, 65},     {59, 65},     {60, 65},     {61, 65},     {62, 65},     {63, 65},     {64, 65}, 
  {65, 65},     {66, 65},     {67, 65},     {68, 65},     {69, 65},     {70, 65},     {71, 65},     {72, 65},     {73, 65},     {74, 65}, 
  {75, 65},     {76, 65},     {77, 65},     {78, 65},     {79, 65},     {80, 65},     {81, 65},     {82, 65},     {83, 65},     {84, 65}, 
  {85, 65},     {86, 65},     {87, 65},     {88, 65},     {36, 66},     {37, 66},     {38, 66},     {39, 66},     {40, 66},     {41, 66}, 
  {42, 66},     {43, 66},     {44, 66},     {45, 66},     {46, 66},     {47, 66},     {48, 66},     {49, 66},     {50, 66},     {51, 66}, 
  {52, 66},     {53, 66},     {54, 66},     {55, 66},     {56, 66},     {57, 66},     {58, 66},     {59, 66},     {60, 66},     {61, 66}, 
  {62, 66},     {63, 66},     {64, 66},     {65, 66},     {66, 66},     {67, 66},     {68, 66},     {69, 66},     {70, 66},     {71, 66}, 
  {72, 66},     {73, 66},     {74, 66},     {75, 66},     {76, 66},     {77, 66},     {78, 66},     {79, 66},     {80, 66},     {81, 66}, 
  {82, 66},     {83, 66},     {84, 66},     {85, 66},     {86, 66},     {87, 66},     {38, 67},     {39, 67},     {40, 67},     {41, 67}, 
  {42, 67},     {43, 67},     {44, 67},     {45, 67},     {46, 67},     {47, 67},     {48, 67},     {49, 67},     {50, 67},     {51, 67}, 
  {52, 67},     {53, 67},     {54, 67},     {55, 67},     {56, 67},     {57, 67},     {58, 67},     {59, 67},     {60, 67},     {61, 67}, 
  {62, 67},     {63, 67},     {64, 67},     {65, 67},     {66, 67},     {67, 67},     {68, 67},     {69, 67},     {70, 67},     {71, 67}, 
  {72, 67},     {73, 67},     {74, 67},     {75, 67},     {76, 67},     {77, 67},     {78, 67},     {79, 67},     {80, 67},     {81, 67}, 
  {82, 67},     {83, 67},     {84, 67},     {85, 67},     {86, 67},     {40, 68},     {41, 68},     {42, 68},     {43, 68},     {44, 68}, 
  {45, 68},     {46, 68},     {47, 68},     {48, 68},     {49, 68},     {50, 68},     {51, 68},     {52, 68},     {53, 68},     {54, 68}, 
  {55, 68},     {56, 68},     {57, 68},     {58, 68},     {59, 68},     {60, 68},     {61, 68},     {62, 68},     {63, 68},     {64, 68}, 
  {65, 68},     {66, 68},     {67, 68},     {68, 68},     {69, 68},     {70, 68},     {71, 68},     {72, 68},     {73, 68},     {74, 68}, 
  {75, 68},     {76, 68},     {77, 68},     {78, 68},     {79, 68},     {80, 68},     {81, 68},     {82, 68},     {83, 68},     {84, 68}, 
  {85, 68},     {43, 69},     {44, 69},     {45, 69},     {46, 69},     {47, 69},     {48, 69},     {49, 69},     {50, 69},     {51, 69}, 
  {52, 69},     {53, 69},     {54, 69},     {55, 69},     {56, 69},     {57, 69},     {58, 69},     {59, 69},     {60, 69},     {61, 69}, 
  {62, 69},     {63, 69},     {64, 69},     {65, 69},     {66, 69},     {67, 69},     {68, 69},     {69, 69},     {70, 69},     {71, 69}, 
  {72, 69},     {73, 69},     {74, 69},     {75, 69},     {76, 69},     {77, 69},     {78, 69},     {79, 69},     {80, 69},     {81, 69}, 
  {82, 69},     {83, 69},     {45, 70},     {46, 70},     {47, 70},     {48, 70},     {49, 70},     {50, 70},     {51, 70},     {52, 70}, 
  {53, 70},     {54, 70},     {55, 70},     {56, 70},     {57, 70},     {58, 70},     {59, 70},     {60, 70},     {61, 70},     {62, 70}, 
  {63, 70},     {64, 70},     {65, 70},     {66, 70},     {67, 70},     {68, 70},     {69, 70},     {70, 70},     {71, 70},     {72, 70}, 
  {73, 70},     {74, 70},     {75, 70},     {76, 70},     {77, 70},     {78, 70},     {79, 70},     {80, 70},     {81, 70},     {47, 71}, 
  {48, 71},     {49, 71},     {50, 71},     {51, 71},     {52, 71},     {53, 71},     {54, 71},     {55, 71},     {56, 71},     {57, 71}, 
  {58, 71},     {59, 71},     {60, 71},     {61, 71},     {62, 71},     {63, 71},     {64, 71},     {65, 71},     {66, 71},     {67, 71}, 
  {68, 71},     {69, 71},     {70, 71},     {71, 71},     {72, 71},     {73, 71},     {74, 71},     {75, 71},     {76, 71},     {77, 71}, 
  {78, 71},     {79, 71},     {50, 72},     {51, 72},     {52, 72},     {53, 72},     {54, 72},     {55, 72},     {56, 72},     {57, 72}, 
  {58, 72},     {59, 72},     {60, 72},     {61, 72},     {62, 72},     {63, 72},     {64, 72},     {65, 72},     {66, 72},     {67, 72}, 
  {68, 72},     {69, 72},     {70, 72},     {71, 72},     {72, 72},     {73, 72},     {74, 72},     {75, 72},     {76, 72},     {77, 72}, 
  {78, 72},     {54, 73},     {55, 73},     {56, 73},     {57, 73},     {58, 73},     {59, 73},     {60, 73},     {61, 73},     {62, 73}, 
  {63, 73},     {64, 73},     {65, 73},     {66, 73},     {67, 73},     {68, 73},     {69, 73},     {70, 73},     {71, 73},     {72, 73}, 
  {73, 73},     {74, 73},     {60, 74},     {61, 74},     {62, 74},     {63, 74},     {64, 74},     {65, 74},     {66, 74}
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <LovyanGFX.hpp>

class LGFX_ST7789 : public lgfx::LGFX_Device
{
  lgfx::Panel_ST7789 _panel_instance;
  lgfx::Bus_SPI _bus_instance;

public:
  LGFX_ST7789()
  {
    {
      // SPIバス設定
      auto cfg = _bus_instance.config();
      cfg.spi_host = 0;  // RP2040のSPI0を使用
      cfg.spi_mode = 0;
      cfg.freq_write = 40000000;  // 書き込み速度 (ボードによって調整)
      cfg.freq_read  = 16000000;  // 読み込み速度

      // RP2040のSPI0ピン配置 (必要に応じて変更)
      cfg.pin_sclk = 18;  // SCK
      cfg.pin_mosi = 19;  // MOSI
      cfg.pin_miso = -1;  // MISO (使用しない)
      cfg.pin_dc   = 22;  // DC (データコマンド制御)

      _bus_instance.config(cfg);
      _panel_instance.setBus(&_bus_instance);
    }

    {
    // パネル設定
    auto panel_cfg = _panel_instance.config();
    panel_cfg.pin_cs   = 17;  // CS
    panel_cfg.pin_rst  = 23;  // RESET
    panel_cfg.pin_busy = -1;  // BUSY (未使用)

    panel_cfg.memory_width  = 170;
    panel_cfg.memory_height = 320;
    panel_cfg.panel_width   = 170;
    panel_cfg.panel_height  = 320;
    panel_cfg.offset_x      = 35;
    panel_cfg.offset_y      = 0;  // 必要に応じて調整
    panel_cfg.offset_rotation = 3;
    panel_cfg.rgb_order     = false;
    panel_cfg.invert        = true;

    _panel_instance.config(panel_cfg);
    }
    setPanel(&_panel_instance);
  }
};

LGFX_ST7789 lcd;

void drawBackground(){
  uint32_t BG_COLOR_1 = lcd.color888(50, 59, 100);
  uint32_t BG_COLOR_2 = lcd.color888(66, 80, 100);
  int pitch = 7;
  for(int i = 0; i < 170; i+=pitch){
    for(int j = 0; j < 320; j++){
      if(i/pitch%2 == 0)
        lcd.drawGradientLine(j, i, j, i+pitch-1, BG_COLOR_1, BG_COLOR_2);
      else
        lcd.drawGradientLine(j, i, j, i+pitch-1, BG_COLOR_2, BG_COLOR_1);
    }
  }
}

void normal(){
  uint32_t FACE_COLOR = lcd.color888(83,100,100);
  drawBackground();
  // eyes
  int start_x = 50;
  int start_y = 55;
  lcd.fillRect(start_x, start_y, 80, 10, FACE_COLOR);
  lcd.fillRoundRect(start_x+5, start_y+10, 50, 40, 20, FACE_COLOR);
  lcd.fillRect(start_x+5, start_y+10, 50, 20, FACE_COLOR);
  start_x = 200;
  lcd.fillRect(start_x, start_y, 80, 10, FACE_COLOR);
  lcd.fillRoundRect(start_x+5, start_y+10, 50, 40, 20, FACE_COLOR);
  lcd.fillRect(start_x+5, start_y+10, 50, 20, FACE_COLOR);
  // mouth
  int width = 80;
  int height = 15;
  start_x = 320/2 - width/2;
  start_y = 130;
  lcd.fillRoundRect(start_x, start_y, width, height, 3, FACE_COLOR);
}

void angry(){
  uint32_t FACE_COLOR = lcd.color888(83,100,100);
  drawBackground();
  // eyes
  int start_x = 30;
  int start_y = 20;
  int numRows = sizeof(eye_map) / sizeof(eye_map[0]);
  for(int i = 0; i < numRows; i++){
    lcd.drawPixel(eye_map[i][0] + start_x, eye_map[i][1] + start_y, FACE_COLOR);
  }
  start_x = 190;
  for(int i = 0; i < numRows; i++){
    lcd.drawPixel((100-eye_map[i][0]) + start_x, eye_map[i][1] + start_y, FACE_COLOR);
  }
  // mouth
  int width = 60;
  int height = 40;
  start_x = 320/2 - width/2;
  start_y = 110;
  lcd.fillRoundRect(start_x, start_y, width, height, 3, FACE_COLOR);
}

void setup()
{
  lcd.init();
  lcd.setRotation(0);
  lcd.fillScreen(TFT_SKYBLUE);
  lcd.setTextColor(TFT_WHITE, TFT_SKYBLUE);
  lcd.drawString("Hello, ST7789!", 0, 0, &fonts::Font2);
  normal();
  delay(1000);
  angry();
}

void loop()
{
}

//倒立振子用
// void setup1()


