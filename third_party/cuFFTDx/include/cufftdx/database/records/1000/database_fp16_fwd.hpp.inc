//Copyright (c) 2019-2023, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


template<> struct block_fft_record<33, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<33,   33,   33,    1,   768,     0,    0,   974>
    >;
};

template<> struct block_fft_record<34, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<34,   34,   34,    1,   384,     0,    0,   975>
    >;
};

template<> struct block_fft_record<35, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<35,   35,   35,    1,   768,     0,    0,   976>
    >;
};

template<> struct block_fft_record<37, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<37,   37,   37,    1,   384,     0,    0,   977>
    >;
};

template<> struct block_fft_record<38, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<38,   38,   38,    1,   768,     0,    0,   978>
    >;
};

template<> struct block_fft_record<39, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<39,   39,   39,    1,   512,     0,    0,   979>
    >;
};

template<> struct block_fft_record<40, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,    2,   20,    2,    32,    80,    4,   980>,
        block_fft_implementation<20,    2,   20,    2,    64,   160,    2,   981>,
        block_fft_implementation<10,    2,   10,    4,    32,   160,    4,   982>,
        block_fft_implementation<40,   40,   40,    1,  1024,     0,    0,   983>
    >;
};

template<> struct block_fft_record<41, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<41,   41,   41,    1,    64,     0,    0,   984>
    >;
};

template<> struct block_fft_record<42, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,   42,   42,    1,  1024,     0,    0,   985>
    >;
};

template<> struct block_fft_record<43, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<43,   43,   43,    1,   128,     0,    0,   986>
    >;
};

template<> struct block_fft_record<44, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<44,   44,   44,    1,   384,     0,    0,   987>
    >;
};

template<> struct block_fft_record<45, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<45,   45,   45,    1,   768,     0,    0,   988>
    >;
};

template<> struct block_fft_record<46, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<46,   46,   46,    1,    64,     0,    0,   989>
    >;
};

template<> struct block_fft_record<47, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<47,   47,   47,    1,   512,     0,    0,   990>
    >;
};

template<> struct block_fft_record<48, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<48,   48,   48,    1,  1024,     0,    0,   991>
    >;
};

template<> struct block_fft_record<50, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<50,   50,   50,    1,   384,     0,    0,   992>
    >;
};

template<> struct block_fft_record<51, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<51,   51,   51,    1,   256,     0,    0,   993>
    >;
};

template<> struct block_fft_record<52, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<52,   52,   52,    1,   384,     0,    0,   994>
    >;
};

template<> struct block_fft_record<53, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<53,   53,   53,    1,   768,     0,    0,   995>
    >;
};

template<> struct block_fft_record<54, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<54,   54,   54,    1,   512,     0,    0,   996>
    >;
};

template<> struct block_fft_record<55, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<55,   55,   55,    1,    64,     0,    0,   997>
    >;
};

template<> struct block_fft_record<56, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<56,   56,   56,    1,   128,     0,    0,   998>
    >;
};

template<> struct block_fft_record<57, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<57,   57,   57,    1,    64,     0,    0,   999>
    >;
};

template<> struct block_fft_record<58, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<58,   58,   58,    1,   512,     0,    0,  1000>
    >;
};

template<> struct block_fft_record<59, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<59,   59,   59,    1,   128,     0,    0,  1001>
    >;
};

template<> struct block_fft_record<60, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<60,   60,   60,    1,   768,     0,    0,  1002>
    >;
};

template<> struct block_fft_record<61, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<61,   61,   61,    1,    64,     0,    0,  1003>
    >;
};

template<> struct block_fft_record<62, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<62,   62,   62,    1,   512,     0,    0,  1004>
    >;
};

template<> struct block_fft_record<63, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<63,   63,   63,    1,    64,     0,    0,  1005>
    >;
};

template<> struct block_fft_record<2, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 2,    2,    2,    1,   448,     0,    0,  1006>
    >;
};

template<> struct block_fft_record<4, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 4,    4,    4,    1,   320,     0,    0,  1007>,
        block_fft_implementation< 2,    2,    2,    2,   480,     8,    4,  1008>,
        block_fft_implementation< 2,    2,    2,    2,   736,    16,    2,  1009>
    >;
};

template<> struct block_fft_record<8, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,    1,   512,     0,    0,  1010>,
        block_fft_implementation< 4,    2,    4,    2,   512,    16,    4,  1011>,
        block_fft_implementation< 4,    2,    4,    2,   512,    32,    2,  1012>,
        block_fft_implementation< 2,    2,    2,    4,   416,    16,    8,  1013>,
        block_fft_implementation< 2,    2,    2,    4,   512,    32,    4,  1014>
    >;
};

template<> struct block_fft_record<16, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   16,    1,   896,     0,    0,  1015>,
        block_fft_implementation< 4,    4,    4,    4,   128,    32,    4,  1016>,
        block_fft_implementation< 4,    4,    4,    4,   256,    64,    2,  1017>,
        block_fft_implementation< 8,    2,    8,    2,   192,    32,    4,  1018>,
        block_fft_implementation< 2,    2,    2,    8,   160,    32,   12,  1020>,
        block_fft_implementation< 8,    2,    8,    2,   384,    64,    2,  1019>,
        block_fft_implementation< 2,    2,    2,    8,   256,    64,    6,  1021>
    >;
};

template<> struct block_fft_record<32, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,   32,    1,  1024,     0,    0,  1022>,
        block_fft_implementation< 8,    4,    8,    4,   192,   128,    2,  1023>,
        block_fft_implementation< 8,    4,    8,    4,    64,    64,    4,  1024>,
        block_fft_implementation< 4,    2,    4,    8,    64,   128,    4,  1025>,
        block_fft_implementation< 4,    2,    4,    8,   128,    64,    8,  1026>,
        block_fft_implementation< 2,    2,    2,   16,   128,    64,   16,  1029>,
        block_fft_implementation< 2,    2,    2,   16,    64,   128,    8,  1027>,
        block_fft_implementation<16,    2,   16,    2,   128,   128,    2,  1028>,
        block_fft_implementation<16,    2,   16,    2,   128,    64,    4,  1030>
    >;
};

template<> struct block_fft_record<64, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,    8,    32,   256,    2,  1031>,
        block_fft_implementation< 8,    8,    8,    8,    30,   128,    4,  1032>,
        block_fft_implementation< 4,    4,    4,   16,    24,   256,    4,  1033>,
        block_fft_implementation< 4,    4,    4,   16,    32,   128,    8,  1034>,
        block_fft_implementation<16,    4,   16,    4,    62,   256,    2,  1035>,
        block_fft_implementation<16,    4,   16,    4,    64,   128,    4,  1036>,
        block_fft_implementation< 2,    2,    2,   32,    62,   128,   20,  1039>,
        block_fft_implementation<32,    2,   32,    2,    56,   256,    2,  1037>,
        block_fft_implementation< 2,    2,    2,   32,    64,   256,   10,  1038>,
        block_fft_implementation<32,    2,   32,    2,    62,   128,    4,  1040>,
        block_fft_implementation<64,   64,   64,    1,   512,     0,    0,  1041>
    >;
};

template<> struct block_fft_record<128, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    2,    8,   16,    16,   512,    4,  1043>,
        block_fft_implementation<16,    8,   16,    8,    16,   256,    4,  1042>,
        block_fft_implementation< 8,    2,    8,   16,    32,   256,    8,  1045>,
        block_fft_implementation<16,    8,   16,    8,    32,   512,    2,  1044>,
        block_fft_implementation< 4,    2,    4,   32,    14,   512,    6,  1046>,
        block_fft_implementation< 4,    2,    4,   32,    24,   256,   12,  1047>,
        block_fft_implementation<32,    4,   32,    4,    30,   512,    2,  1048>,
        block_fft_implementation<32,    4,   32,    4,    30,   256,    4,  1049>,
        block_fft_implementation< 2,    2,    2,   64,    24,   256,   24,  1051>,
        block_fft_implementation< 2,    2,    2,   64,    16,   512,   12,  1050>
    >;
};

template<> struct block_fft_record<256, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   16,   16,     8,   512,    4,  1052>,
        block_fft_implementation< 8,    4,    8,   32,     8,  1024,    4,  1053>,
        block_fft_implementation< 8,    4,    8,   32,     8,   512,    8,  1054>,
        block_fft_implementation<16,   16,   16,   16,    16,  1024,    2,  1055>,
        block_fft_implementation< 4,    4,    4,   64,     8,  1024,    6,  1057>,
        block_fft_implementation<32,    8,   32,    8,    16,  1024,    2,  1056>,
        block_fft_implementation< 4,    4,    4,   64,    12,   512,   12,  1058>,
        block_fft_implementation<32,    8,   32,    8,    16,   512,    4,  1059>,
        block_fft_implementation< 2,    2,    2,  128,    12,   512,   28,  1061>,
        block_fft_implementation< 2,    2,    2,  128,     8,  1024,   14,  1060>
    >;
};

template<> struct block_fft_record<512, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,   64,     2,  2048,    4,  1062>,
        block_fft_implementation< 8,    8,    8,   64,     2,  1024,    8,  1063>,
        block_fft_implementation<16,    2,   16,   32,     4,  1024,    8,  1064>,
        block_fft_implementation<32,   16,   32,   16,     8,  2048,    2,  1065>,
        block_fft_implementation<32,   16,   32,   16,     8,  1024,    4,  1066>,
        block_fft_implementation< 4,    2,    4,  128,     4,  2048,    8,  1068>,
        block_fft_implementation<16,    2,   16,   32,     4,  2048,    4,  1067>,
        block_fft_implementation< 4,    2,    4,  128,     4,  1024,   16,  1069>,
        block_fft_implementation< 2,    2,    2,  256,     6,  1024,   32,  1071>,
        block_fft_implementation< 2,    2,    2,  256,     4,  2048,   16,  1070>
    >;
};

template<> struct block_fft_record<1024, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,    4,   16,   64,     2,  2048,    8,  1072>,
        block_fft_implementation<32,   32,   32,   32,     2,  4096,    2,  1074>,
        block_fft_implementation< 8,    2,    8,  128,     2,  4096,    6,  1073>,
        block_fft_implementation<32,   32,   32,   32,     4,  2048,    4,  1076>,
        block_fft_implementation< 8,    2,    8,  128,     2,  2048,   12,  1075>,
        block_fft_implementation<16,    4,   16,   64,     2,  4096,    4,  1077>,
        block_fft_implementation< 4,    4,    4,  256,     2,  4096,    8,  1078>,
        block_fft_implementation< 4,    4,    4,  256,     2,  2048,   16,  1079>,
        block_fft_implementation< 2,    2,    2,  512,     2,  2048,   36,  1081>,
        block_fft_implementation< 2,    2,    2,  512,     2,  4096,   18,  1080>
    >;
};

template<> struct block_fft_record<2048, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,    8,   16,  128,     2,  4096,    8,  1082>,
        block_fft_implementation< 8,    4,    8,  256,     2,  8192,    6,  1083>,
        block_fft_implementation<16,    8,   16,  128,     2,  8192,    4,  1085>,
        block_fft_implementation<32,    2,   32,   64,     2,  8192,    4,  1086>,
        block_fft_implementation< 8,    4,    8,  256,     2,  4096,   12,  1084>,
        block_fft_implementation<32,    2,   32,   64,     2,  4096,    8,  1087>,
        block_fft_implementation< 4,    2,    4,  512,     2,  8192,   10,  1088>,
        block_fft_implementation< 4,    2,    4,  512,     2,  4096,   20,  1089>,
        block_fft_implementation< 2,    2,    2, 1024,     2,  4096,   40,  1091>,
        block_fft_implementation< 2,    2,    2, 1024,     2,  8192,   20,  1090>
    >;
};

template<> struct block_fft_record<4096, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   16,  256,     2,  8192,    8,  1092>,
        block_fft_implementation< 8,    8,    8,  512,     2, 16384,    6,  1093>,
        block_fft_implementation<32,    4,   32,  128,     2, 16384,    4,  1096>,
        block_fft_implementation<32,    4,   32,  128,     2,  8192,    8,  1097>,
        block_fft_implementation<16,   16,   16,  256,     2, 16384,    4,  1095>,
        block_fft_implementation< 8,    8,    8,  512,     2,  8192,   12,  1094>,
        block_fft_implementation< 4,    4,    4, 1024,     2, 16384,   10,  1098>,
        block_fft_implementation< 4,    4,    4, 1024,     2,  8192,   20,  1099>
    >;
};

template<> struct block_fft_record<8192, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,    8,   32,  256,     2, 32768,    4,  1101>,
        block_fft_implementation<16,    2,   16,  512,     2, 16384,   12,  1100>,
        block_fft_implementation<32,    8,   32,  256,     2, 16384,    8,  1102>,
        block_fft_implementation< 8,    2,    8, 1024,     2, 32768,    8,  1103>,
        block_fft_implementation<16,    2,   16,  512,     2, 32768,    6,  1104>,
        block_fft_implementation< 8,    2,    8, 1024,     2, 16384,   16,  1105>
    >;
};

template<> struct block_fft_record<16384, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   16,   32,  512,     2, 65536,    4,  1516>,
        block_fft_implementation<16,    4,   16, 1024,     2, 32768,   12,  1106>,
        block_fft_implementation<32,   16,   32,  512,     2, 32768,    8,  1107>,
        block_fft_implementation<16,    4,   16, 1024,     2, 65536,    6,  1517>
    >;
};

template<> struct block_fft_record<32768, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,   32, 1024,     2, 65536,    8,  1518>
    >;
};

template<> struct block_fft_record<3, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 3,    3,    3,    1,   320,     0,    0,  1108>
    >;
};

template<> struct block_fft_record<9, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    9,    1,   128,     0,    0,  1109>,
        block_fft_implementation< 3,    3,    3,    3,   160,    36,    2,  1110>,
        block_fft_implementation< 3,    3,    3,    3,   128,    18,    4,  1111>
    >;
};

template<> struct block_fft_record<27, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,    1,  1024,     0,    0,  1112>,
        block_fft_implementation< 9,    3,    9,    3,    42,   108,    2,  1114>,
        block_fft_implementation< 9,    3,    9,    3,    42,    54,    4,  1113>,
        block_fft_implementation< 3,    3,    3,    9,    56,   108,    4,  1115>,
        block_fft_implementation< 3,    3,    3,    9,   128,    54,    8,  1116>
    >;
};

template<> struct block_fft_record<81, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    9,    9,    14,   324,    2,  1117>,
        block_fft_implementation< 9,    9,    9,    9,    14,   162,    4,  1118>,
        block_fft_implementation<27,    3,   27,    3,    42,   162,    4,  1119>,
        block_fft_implementation<27,    3,   27,    3,    42,   324,    2,  1120>,
        block_fft_implementation< 3,    3,    3,   27,    14,   324,    6,  1121>,
        block_fft_implementation< 3,    3,    3,   27,    28,   162,   12,  1122>
    >;
};

template<> struct block_fft_record<243, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,    9,   27,    9,    14,   972,    2,  1123>,
        block_fft_implementation<27,    9,   27,    9,    14,   486,    4,  1124>,
        block_fft_implementation< 9,    3,    9,   27,    18,   972,    4,  1125>,
        block_fft_implementation< 9,    3,    9,   27,    18,   486,    8,  1126>,
        block_fft_implementation< 3,    3,    3,   81,     6,   972,    8,  1127>,
        block_fft_implementation< 3,    3,    3,   81,    12,   486,   16,  1128>
    >;
};

template<> struct block_fft_record<729, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,   27,    28,  2916,    2,  1129>,
        block_fft_implementation<27,   27,   27,   27,    18,  1458,    4,  1130>,
        block_fft_implementation< 9,    9,    9,   81,     6,  2916,    4,  1131>,
        block_fft_implementation< 9,    9,    9,   81,     6,  1458,    8,  1132>,
        block_fft_implementation< 3,    3,    3,  243,     2,  2916,   10,  1133>,
        block_fft_implementation< 3,    3,    3,  243,     2,  1458,   20,  1134>
    >;
};

template<> struct block_fft_record<2187, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,    3,   27,   81,     6,  8748,    4,  1136>,
        block_fft_implementation<27,    3,   27,   81,     6,  4374,    8,  1138>,
        block_fft_implementation< 9,    3,    9,  243,     4,  8748,    6,  1135>,
        block_fft_implementation< 9,    3,    9,  243,     2,  4374,   12,  1137>,
        block_fft_implementation< 3,    3,    3,  729,     2,  8748,   12,  1139>,
        block_fft_implementation< 3,    3,    3,  729,     2,  4374,   24,  1140>
    >;
};

template<> struct block_fft_record<6561, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,    9,   27,  243,     2, 26244,    4,  1142>,
        block_fft_implementation<27,    9,   27,  243,     2, 13122,    8,  1141>,
        block_fft_implementation< 9,    9,    9,  729,     2, 26244,    6,  1144>,
        block_fft_implementation< 9,    9,    9,  729,     2, 13122,   12,  1143>
    >;
};

template<> struct block_fft_record<19683, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,  729,     2, 78732,    4,  1519>,
        block_fft_implementation<27,   27,   27,  729,     2, 39366,    8,  1145>
    >;
};

template<> struct block_fft_record<5, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,    5,    1,  1024,     0,    0,  1146>
    >;
};

template<> struct block_fft_record<25, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,   25,    1,  1024,     0,    0,  1147>,
        block_fft_implementation< 5,    5,    5,    5,    50,   100,    2,  1148>,
        block_fft_implementation< 5,    5,    5,    5,    50,    50,    4,  1149>
    >;
};

template<> struct block_fft_record<125, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,    5,   25,    10,   500,    4,  1152>,
        block_fft_implementation<25,    5,   25,    5,    50,   500,    2,  1151>,
        block_fft_implementation<25,    5,   25,    5,    50,   250,    4,  1150>,
        block_fft_implementation< 5,    5,    5,   25,    10,   250,    8,  1153>
    >;
};

template<> struct block_fft_record<625, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,   25,   25,    10,  2500,    2,  1155>,
        block_fft_implementation<25,   25,   25,   25,    10,  1250,    4,  1154>,
        block_fft_implementation< 5,    5,    5,  125,     2,  2500,    6,  1156>,
        block_fft_implementation< 5,    5,    5,  125,     2,  1250,   12,  1157>
    >;
};

template<> struct block_fft_record<3125, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,    5,   25,  125,     2, 12500,    4,  1159>,
        block_fft_implementation<25,    5,   25,  125,     2,  6250,    8,  1158>,
        block_fft_implementation< 5,    5,    5,  625,     2, 12500,    8,  1160>,
        block_fft_implementation< 5,    5,    5,  625,     2,  6250,   16,  1161>
    >;
};

template<> struct block_fft_record<15625, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,   25,  625,     2, 62500,    4,  1520>,
        block_fft_implementation<25,   25,   25,  625,     2, 31250,    8,  1162>
    >;
};

template<> struct block_fft_record<7, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,    1,   512,     0,    0,  1163>
    >;
};

template<> struct block_fft_record<49, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,    7,    18,   196,    2,  1165>,
        block_fft_implementation< 7,    7,    7,    7,    18,    98,    4,  1166>,
        block_fft_implementation<49,   49,   49,    1,   384,     0,    0,  1164>
    >;
};

template<> struct block_fft_record<343, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,   49,    10,  1372,    4,  1167>,
        block_fft_implementation< 7,    7,    7,   49,    10,   686,    8,  1168>
    >;
};

template<> struct block_fft_record<2401, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,  343,     2,  9604,    6,  1169>,
        block_fft_implementation< 7,    7,    7,  343,     2,  4802,   12,  1170>
    >;
};

template<> struct block_fft_record<16807, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<49,    7,   49,  343,     2, 33614,    8,  1171>,
        block_fft_implementation<49,    7,   49,  343,     2, 67228,    4,  1521>
    >;
};

template<> struct block_fft_record<11, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,    1,  1024,     0,    0,  1172>
    >;
};

template<> struct block_fft_record<121, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,   11,    46,   484,    2,  1173>,
        block_fft_implementation<11,   11,   11,   11,    46,   242,    4,  1174>
    >;
};

template<> struct block_fft_record<1331, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,  121,     2,  2662,    8,  1175>,
        block_fft_implementation<11,   11,   11,  121,     2,  5324,    4,  1176>
    >;
};

template<> struct block_fft_record<6, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,    1,   896,     0,    0,  1177>
    >;
};

template<> struct block_fft_record<36, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,    6,    42,   144,    2,  1179>,
        block_fft_implementation< 6,    6,    6,    6,    42,    72,    4,  1178>,
        block_fft_implementation<36,   36,   36,    1,  1024,     0,    0,  1180>
    >;
};

template<> struct block_fft_record<216, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,   36,    14,   864,    4,  1181>,
        block_fft_implementation<36,    6,   36,    6,    42,   864,    2,  1523>,
        block_fft_implementation<36,    6,   36,    6,    10,   432,    4,  1522>,
        block_fft_implementation< 6,    6,    6,   36,    14,   432,    8,  1182>
    >;
};

template<> struct block_fft_record<1296, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<36,   36,   36,   36,    14,  5184,    2,  1184>,
        block_fft_implementation<36,   36,   36,   36,    14,  2592,    4,  1183>,
        block_fft_implementation< 6,    6,    6,  216,     8,  5184,    6,  1185>,
        block_fft_implementation< 6,    6,    6,  216,     8,  2592,   12,  1186>
    >;
};

template<> struct block_fft_record<7776, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<36,    6,   36,  216,     4, 31104,    4,  1187>,
        block_fft_implementation<36,    6,   36,  216,     2, 15552,    8,  1188>
    >;
};

template<> struct block_fft_record<10, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,    1,   512,     0,    0,  1189>
    >;
};

template<> struct block_fft_record<100, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,   10,     6,   400,    2,  1191>,
        block_fft_implementation<10,   10,   10,   10,     6,   200,    4,  1190>
    >;
};

template<> struct block_fft_record<1000, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,  100,    10,  4000,    4,  1192>,
        block_fft_implementation<10,   10,   10,  100,    10,  2000,    8,  1193>
    >;
};

template<> struct block_fft_record<10000, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10, 1000,     2, 40000,    6,  1194>,
        block_fft_implementation<10,   10,   10, 1000,     2, 20000,   12,  1195>
    >;
};

template<> struct block_fft_record<12, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,    1,   384,     0,    0,  1196>
    >;
};

template<> struct block_fft_record<144, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,   12,    42,   576,    2,  1197>,
        block_fft_implementation<12,   12,   12,   12,    42,   288,    4,  1198>
    >;
};

template<> struct block_fft_record<1728, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,  144,     8,  6912,    4,  1199>,
        block_fft_implementation<12,   12,   12,  144,     8,  3456,    8,  1200>
    >;
};

template<> struct block_fft_record<13, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,   13,    1,   896,     0,    0,  1201>
    >;
};

template<> struct block_fft_record<169, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,   13,   13,    58,   676,    2,  1202>,
        block_fft_implementation<13,   13,   13,   13,    38,   338,    4,  1203>
    >;
};

template<> struct block_fft_record<2197, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,   13,  169,     6,  4394,    8,  1204>,
        block_fft_implementation<13,   13,   13,  169,     6,  8788,    4,  1205>
    >;
};

template<> struct block_fft_record<14, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,   14,    1,   896,     0,    0,  1206>
    >;
};

template<> struct block_fft_record<196, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,   14,   14,    18,   784,    2,  1207>,
        block_fft_implementation<14,   14,   14,   14,    18,   392,    4,  1208>
    >;
};

template<> struct block_fft_record<2744, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,   14,  196,    10, 10976,    4,  1209>,
        block_fft_implementation<14,   14,   14,  196,    10,  5488,    8,  1210>
    >;
};

template<> struct block_fft_record<15, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,   15,    1,   768,     0,    0,  1211>
    >;
};

template<> struct block_fft_record<225, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,   15,   15,    34,   900,    2,  1212>,
        block_fft_implementation<15,   15,   15,   15,     4,   450,    4,  1213>
    >;
};

template<> struct block_fft_record<3375, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,   15,  225,     4, 13500,    4,  1214>,
        block_fft_implementation<15,   15,   15,  225,     2,  6750,    8,  1215>
    >;
};

template<> struct block_fft_record<17, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,   17,    1,  1024,     0,    0,  1216>
    >;
};

template<> struct block_fft_record<289, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,   17,   17,    30,  1156,    2,  1217>,
        block_fft_implementation<17,   17,   17,   17,    30,   578,    4,  1218>
    >;
};

template<> struct block_fft_record<4913, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,   17,  289,     6, 19652,    4,  1219>,
        block_fft_implementation<17,   17,   17,  289,     6,  9826,    8,  1220>
    >;
};

template<> struct block_fft_record<18, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,   18,    1,   768,     0,    0,  1221>
    >;
};

template<> struct block_fft_record<324, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,   18,   18,    14,  1296,    2,  1222>,
        block_fft_implementation<18,   18,   18,   18,    14,   648,    4,  1223>
    >;
};

template<> struct block_fft_record<5832, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,   18,  324,     6, 23328,    4,  1224>,
        block_fft_implementation<18,   18,   18,  324,     6, 11664,    8,  1225>
    >;
};

template<> struct block_fft_record<19, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,   19,    1,   448,     0,    0,  1226>
    >;
};

template<> struct block_fft_record<361, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,   19,   19,    40,  1444,    2,  1227>,
        block_fft_implementation<19,   19,   19,   19,    26,   722,    4,  1228>
    >;
};

template<> struct block_fft_record<6859, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,   19,  361,     2, 27436,    4,  1229>,
        block_fft_implementation<19,   19,   19,  361,     4, 13718,    8,  1230>
    >;
};

template<> struct block_fft_record<20, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,   20,    1,  1024,     0,    0,  1231>
    >;
};

template<> struct block_fft_record<400, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,   20,   20,     6,  1600,    2,  1232>,
        block_fft_implementation<20,   20,   20,   20,     6,   800,    4,  1233>
    >;
};

template<> struct block_fft_record<8000, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,   20,  400,     4, 32000,    4,  1235>,
        block_fft_implementation<20,   20,   20,  400,     4, 16000,    8,  1234>
    >;
};

template<> struct block_fft_record<21, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,   21,    1,  1024,     0,    0,  1236>
    >;
};

template<> struct block_fft_record<441, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,   21,   21,     6,  1764,    2,  1237>,
        block_fft_implementation<21,   21,   21,   21,     6,   882,    4,  1238>
    >;
};

template<> struct block_fft_record<9261, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,   21,  441,     4, 18522,    8,  1239>,
        block_fft_implementation<21,   21,   21,  441,     2, 37044,    4,  1240>
    >;
};

template<> struct block_fft_record<22, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,   22,    1,  1024,     0,    0,  1241>
    >;
};

template<> struct block_fft_record<484, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,   22,   22,    46,  1936,    2,  1242>,
        block_fft_implementation<22,   22,   22,   22,    46,   968,    4,  1243>
    >;
};

template<> struct block_fft_record<10648, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,   22,  484,     2, 21296,    8,  1245>,
        block_fft_implementation<22,   22,   22,  484,     2, 42592,    4,  1244>
    >;
};

template<> struct block_fft_record<23, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,   23,    1,   640,     0,    0,  1246>
    >;
};

template<> struct block_fft_record<529, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,   23,   23,    22,  2116,    2,  1247>,
        block_fft_implementation<23,   23,   23,   23,    22,  1058,    4,  1248>
    >;
};

template<> struct block_fft_record<12167, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,   23,  529,     2, 48668,    4,  1249>,
        block_fft_implementation<23,   23,   23,  529,     2, 24334,    8,  1250>
    >;
};

template<> struct block_fft_record<24, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,   24,    1,  1024,     0,    0,  1251>
    >;
};

template<> struct block_fft_record<576, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,   24,   24,    10,  2304,    2,  1253>,
        block_fft_implementation<24,   24,   24,   24,    10,  1152,    4,  1252>
    >;
};

template<> struct block_fft_record<13824, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,   24,  576,     2, 55296,    4,  1524>,
        block_fft_implementation<24,   24,   24,  576,     2, 27648,    8,  1254>
    >;
};

template<> struct block_fft_record<26, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,   26,    1,  1024,     0,    0,  1255>
    >;
};

template<> struct block_fft_record<676, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,   26,   26,    38,  2704,    2,  1256>,
        block_fft_implementation<26,   26,   26,   26,    38,  1352,    4,  1257>
    >;
};

template<> struct block_fft_record<17576, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,   26,  676,     2, 35152,    8,  1258>,
        block_fft_implementation<26,   26,   26,  676,     2, 70304,    4,  1525>
    >;
};

template<> struct block_fft_record<28, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,   28,    1,  1024,     0,    0,  1259>
    >;
};

template<> struct block_fft_record<784, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,   28,   28,    18,  3136,    2,  1261>,
        block_fft_implementation<28,   28,   28,   28,    18,  1568,    4,  1260>
    >;
};

template<> struct block_fft_record<21952, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,   28,  784,     2, 43904,    8,  1262>,
        block_fft_implementation<28,   28,   28,  784,     2, 87808,    4,  1530>
    >;
};

template<> struct block_fft_record<29, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,   29,    1,    64,     0,    0,  1263>
    >;
};

template<> struct block_fft_record<841, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,   29,   29,    26,  3364,    2,  1264>,
        block_fft_implementation<29,   29,   29,   29,    26,  1682,    4,  1265>
    >;
};

template<> struct block_fft_record<24389, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,   29,  841,     2, 48778,    8,  1266>
    >;
};

template<> struct block_fft_record<30, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,   30,    1,  1024,     0,    0,  1267>
    >;
};

template<> struct block_fft_record<900, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,   30,   30,    34,  3600,    2,  1268>,
        block_fft_implementation<30,   30,   30,   30,     2,  1800,    4,  1269>
    >;
};

template<> struct block_fft_record<27000, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,   30,  900,     2, 54000,    8,  1526>
    >;
};

template<> struct block_fft_record<31, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,   31,    1,   768,     0,    0,  1270>
    >;
};

template<> struct block_fft_record<961, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,   31,   31,    16,  3844,    2,  1271>,
        block_fft_implementation<31,   31,   31,   31,    16,  1922,    4,  1272>
    >;
};

template<> struct block_fft_record<29791, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,   31,  961,     2, 59582,    8,  1527>
    >;
};

template<> struct block_fft_record<68, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<34,    2,   34,    2,    32,   272,    2,  1274>,
        block_fft_implementation<34,    2,   34,    2,    32,   136,    4,  1273>
    >;
};

template<> struct block_fft_record<72, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,    6,   12,    6,    42,   288,    2,  1276>,
        block_fft_implementation<12,    6,   12,    6,    42,   144,    4,  1275>,
        block_fft_implementation<36,    2,   36,    2,    32,   288,    2,  1284>,
        block_fft_implementation<36,    2,   36,    2,    32,   144,    4,  1278>,
        block_fft_implementation<24,    3,   24,    3,    20,   144,    4,  1277>,
        block_fft_implementation<24,    3,   24,    3,    40,   288,    2,  1279>,
        block_fft_implementation< 6,    2,    6,   12,    42,   288,    4,  1280>,
        block_fft_implementation< 6,    2,    6,   12,    16,   144,    8,  1283>,
        block_fft_implementation<18,    2,   18,    4,    16,   144,    8,  1281>,
        block_fft_implementation<18,    2,   18,    4,    16,   288,    4,  1282>
    >;
};

template<> struct block_fft_record<76, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<38,    2,   38,    2,    32,   304,    2,  1286>,
        block_fft_implementation<38,    2,   38,    2,    32,   152,    4,  1285>
    >;
};

template<> struct block_fft_record<80, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,    4,   20,    4,    16,   160,    4,  1287>,
        block_fft_implementation<20,    4,   20,    4,    32,   320,    2,  1288>,
        block_fft_implementation<40,    2,   40,    2,    28,   160,    4,  1289>,
        block_fft_implementation<40,    2,   40,    2,    60,   320,    2,  1292>,
        block_fft_implementation<10,    2,   10,    8,    32,   320,    6,  1290>,
        block_fft_implementation<10,    2,   10,    8,    16,   160,   12,  1291>
    >;
};

template<> struct block_fft_record<84, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,    2,   42,    2,    32,   336,    2,  1294>,
        block_fft_implementation<42,    2,   42,    2,    32,   168,    4,  1293>
    >;
};

template<> struct block_fft_record<88, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<44,    2,   44,    2,    32,   352,    2,  1298>,
        block_fft_implementation<44,    2,   44,    2,    32,   176,    4,  1295>,
        block_fft_implementation<22,    2,   22,    4,    16,   352,    4,  1297>,
        block_fft_implementation<22,    2,   22,    4,    16,   176,    8,  1296>
    >;
};

template<> struct block_fft_record<92, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<46,    2,   46,    2,    32,   368,    2,  1300>,
        block_fft_implementation<46,    2,   46,    2,    32,   184,    4,  1299>
    >;
};

template<> struct block_fft_record<96, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,    4,   24,    4,    32,   384,    2,  1301>,
        block_fft_implementation<12,    2,   12,    8,    16,   384,    4,  1302>,
        block_fft_implementation<24,    4,   24,    4,    32,   192,    4,  1303>,
        block_fft_implementation< 6,    2,    6,   16,    16,   384,    8,  1304>,
        block_fft_implementation<12,    2,   12,    8,    32,   192,    8,  1305>,
        block_fft_implementation<48,    2,   48,    2,    58,   384,    2,  1307>,
        block_fft_implementation< 6,    2,    6,   16,    24,   192,   16,  1306>,
        block_fft_implementation<48,    2,   48,    2,    64,   192,    4,  1308>
    >;
};

template<> struct block_fft_record<104, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<52,    2,   52,    2,    32,   416,    2,  1312>,
        block_fft_implementation<52,    2,   52,    2,    32,   208,    4,  1309>,
        block_fft_implementation<26,    2,   26,    4,    16,   416,    4,  1311>,
        block_fft_implementation<26,    2,   26,    4,    16,   208,    8,  1310>
    >;
};

template<> struct block_fft_record<108, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,    6,   18,    6,    42,   432,    2,  1313>,
        block_fft_implementation<54,    2,   54,    2,    32,   432,    2,  1322>,
        block_fft_implementation< 6,    3,    6,   18,    14,   432,    4,  1317>,
        block_fft_implementation<36,    3,   36,    3,    42,   432,    2,  1319>,
        block_fft_implementation<18,    6,   18,    6,    42,   216,    4,  1314>,
        block_fft_implementation<36,    3,   36,    3,    42,   216,    4,  1315>,
        block_fft_implementation<54,    2,   54,    2,    32,   216,    4,  1316>,
        block_fft_implementation< 6,    3,    6,   18,    14,   216,    8,  1318>,
        block_fft_implementation<12,    3,   12,    9,    14,   432,    4,  1321>,
        block_fft_implementation<12,    3,   12,    9,    14,   216,    8,  1320>
    >;
};

template<> struct block_fft_record<112, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,    4,   28,    4,    16,   448,    2,  1324>,
        block_fft_implementation<28,    4,   28,    4,    16,   224,    4,  1323>,
        block_fft_implementation<56,    2,   56,    2,    32,   224,    4,  1325>,
        block_fft_implementation<56,    2,   56,    2,    64,   448,    2,  1328>,
        block_fft_implementation<14,    2,   14,    8,    16,   448,    6,  1326>,
        block_fft_implementation<14,    2,   14,    8,    16,   224,   12,  1327>
    >;
};

template<> struct block_fft_record<116, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<58,    2,   58,    2,   256,   464,    2,  1330>,
        block_fft_implementation<58,    2,   58,    2,   256,   232,    4,  1329>
    >;
};

template<> struct block_fft_record<120, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<60,    2,   60,    2,    32,   480,    2,  1334>,
        block_fft_implementation<60,    2,   60,    2,    32,   240,    4,  1331>,
        block_fft_implementation<30,    2,   30,    4,    32,   480,    4,  1333>,
        block_fft_implementation<30,    2,   30,    4,    16,   240,    8,  1332>
    >;
};

template<> struct block_fft_record<124, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<62,    2,   62,    2,   256,   496,    2,  1336>,
        block_fft_implementation<62,    2,   62,    2,   256,   248,    4,  1335>
    >;
};

template<> struct block_fft_record<136, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<34,    2,   34,    4,    16,   544,    4,  1338>,
        block_fft_implementation<34,    2,   34,    4,    16,   272,    8,  1337>
    >;
};

template<> struct block_fft_record<152, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<38,    2,   38,    4,    16,   608,    4,  1339>,
        block_fft_implementation<38,    2,   38,    4,    16,   304,    8,  1340>
    >;
};

template<> struct block_fft_record<160, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<40,    4,   40,    4,    32,   640,    2,  1343>,
        block_fft_implementation<20,    2,   20,    8,    16,   640,    4,  1341>,
        block_fft_implementation<40,    4,   40,    4,    16,   320,    4,  1342>,
        block_fft_implementation<10,    2,   10,   16,     8,   640,    8,  1344>,
        block_fft_implementation<20,    2,   20,    8,    16,   320,    8,  1345>,
        block_fft_implementation<10,    2,   10,   16,    16,   320,   16,  1346>
    >;
};

template<> struct block_fft_record<168, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,    2,   42,    4,    16,   672,    4,  1348>,
        block_fft_implementation<42,    2,   42,    4,    16,   336,    8,  1347>
    >;
};

template<> struct block_fft_record<176, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<44,    4,   44,    4,    16,   704,    2,  1350>,
        block_fft_implementation<44,    4,   44,    4,    16,   352,    4,  1349>,
        block_fft_implementation<22,    2,   22,    8,     8,   704,    6,  1351>,
        block_fft_implementation<22,    2,   22,    8,     8,   352,   12,  1352>
    >;
};

template<> struct block_fft_record<180, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,    6,   30,    6,    42,   720,    2,  1354>,
        block_fft_implementation<30,    6,   30,    6,    42,   360,    4,  1353>,
        block_fft_implementation<60,    3,   60,    3,    42,   720,    2,  1356>,
        block_fft_implementation<60,    3,   60,    3,    42,   360,    4,  1355>
    >;
};

template<> struct block_fft_record<184, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<46,    2,   46,    4,    16,   736,    4,  1357>,
        block_fft_implementation<46,    2,   46,    4,    64,   368,    8,  1358>
    >;
};

template<> struct block_fft_record<192, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,    8,   24,    8,     8,   768,    2,  1360>,
        block_fft_implementation<24,    8,   24,    8,     8,   384,    4,  1359>,
        block_fft_implementation<12,    4,   12,   16,     4,   768,    4,  1361>,
        block_fft_implementation<12,    4,   12,   16,     4,   384,    8,  1362>,
        block_fft_implementation<48,    4,   48,    4,    32,   768,    2,  1365>,
        block_fft_implementation<48,    4,   48,    4,    16,   384,    4,  1363>,
        block_fft_implementation< 6,    2,    6,   32,     8,   768,   10,  1364>,
        block_fft_implementation< 6,    2,    6,   32,     8,   384,   20,  1366>
    >;
};

template<> struct block_fft_record<200, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   10,   20,   10,     6,   400,    4,  1368>,
        block_fft_implementation<20,   10,   20,   10,     6,   800,    2,  1367>,
        block_fft_implementation<40,    5,   40,    5,    12,   400,    4,  1369>,
        block_fft_implementation<40,    5,   40,    5,    50,   800,    2,  1372>,
        block_fft_implementation<10,    2,   10,   20,     6,   800,    4,  1370>,
        block_fft_implementation<10,    2,   10,   20,     6,   400,    8,  1371>,
        block_fft_implementation<50,    2,   50,    4,    16,   800,    4,  1374>,
        block_fft_implementation<50,    2,   50,    4,    64,   400,    8,  1373>
    >;
};

template<> struct block_fft_record<208, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<52,    4,   52,    4,    16,   832,    2,  1376>,
        block_fft_implementation<52,    4,   52,    4,    16,   416,    4,  1375>,
        block_fft_implementation<26,    2,   26,    8,     8,   832,    6,  1377>,
        block_fft_implementation<26,    2,   26,    8,     8,   416,   12,  1378>
    >;
};

template<> struct block_fft_record<224, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<56,    4,   56,    4,    16,   896,    2,  1382>,
        block_fft_implementation<28,    2,   28,    8,     8,   896,    4,  1379>,
        block_fft_implementation<56,    4,   56,    4,    16,   448,    4,  1380>,
        block_fft_implementation<14,    2,   14,   16,     4,   896,    8,  1381>,
        block_fft_implementation<28,    2,   28,    8,     8,   448,    8,  1383>,
        block_fft_implementation<14,    2,   14,   16,     8,   448,   16,  1384>
    >;
};

template<> struct block_fft_record<232, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<58,    2,   58,    4,   128,   928,    4,  1386>,
        block_fft_implementation<58,    2,   58,    4,   128,   464,    8,  1385>
    >;
};

template<> struct block_fft_record<240, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<60,    4,   60,    4,    16,   960,    2,  1388>,
        block_fft_implementation<60,    4,   60,    4,    16,   480,    4,  1387>,
        block_fft_implementation<30,    2,   30,    8,     8,   960,    6,  1389>,
        block_fft_implementation<30,    2,   30,    8,     8,   480,   12,  1390>
    >;
};

template<> struct block_fft_record<248, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<62,    2,   62,    4,   128,   992,    4,  1392>,
        block_fft_implementation<62,    2,   62,    4,   128,   496,    8,  1391>
    >;
};

template<> struct block_fft_record<252, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,    6,   42,    6,    42,  1008,    2,  1394>,
        block_fft_implementation<42,    6,   42,    6,    42,   504,    4,  1393>
    >;
};

template<> struct block_fft_record<272, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<34,    2,   34,    8,     8,  1088,    6,  1395>,
        block_fft_implementation<34,    2,   34,    8,     8,   544,   12,  1396>
    >;
};

template<> struct block_fft_record<288, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   12,   24,   12,    10,  1152,    2,  1398>,
        block_fft_implementation<24,   12,   24,   12,    10,   576,    4,  1397>,
        block_fft_implementation<12,    2,   12,   24,    10,  1152,    4,  1399>,
        block_fft_implementation<36,    2,   36,    8,     8,  1152,    4,  1403>,
        block_fft_implementation<12,    2,   12,   24,    10,   576,    8,  1400>,
        block_fft_implementation< 6,    2,    6,   48,     4,  1152,    8,  1404>,
        block_fft_implementation<48,    6,   48,    6,    10,   576,    4,  1401>,
        block_fft_implementation<18,    2,   18,   16,     4,  1152,    8,  1402>,
        block_fft_implementation<48,    6,   48,    6,    10,  1152,    2,  1407>,
        block_fft_implementation< 6,    2,    6,   48,     8,   576,   16,  1405>,
        block_fft_implementation<36,    2,   36,    8,     8,   576,    8,  1406>,
        block_fft_implementation<18,    2,   18,   16,     8,   576,   16,  1408>
    >;
};

template<> struct block_fft_record<300, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   10,   30,   10,    50,  1200,    2,  1410>,
        block_fft_implementation<30,   10,   30,   10,     6,   600,    4,  1409>,
        block_fft_implementation<60,    5,   60,    5,    50,  1200,    2,  1412>,
        block_fft_implementation<60,    5,   60,    5,    50,   600,    4,  1411>
    >;
};

template<> struct block_fft_record<304, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<38,    2,   38,    8,     8,  1216,    6,  1413>,
        block_fft_implementation<38,    2,   38,    8,     8,   608,   12,  1414>
    >;
};

template<> struct block_fft_record<320, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<40,    8,   40,    8,     8,  1280,    2,  1418>,
        block_fft_implementation<20,    4,   20,   16,     4,  1280,    4,  1416>,
        block_fft_implementation<40,    8,   40,    8,     8,   640,    4,  1415>,
        block_fft_implementation<20,    4,   20,   16,     4,   640,    8,  1417>,
        block_fft_implementation<10,    2,   10,   32,     4,  1280,   10,  1419>,
        block_fft_implementation<10,    2,   10,   32,     8,   640,   20,  1420>
    >;
};

template<> struct block_fft_record<336, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,    2,   42,    8,     8,  1344,    6,  1421>,
        block_fft_implementation<42,    2,   42,    8,     8,   672,   12,  1422>
    >;
};

template<> struct block_fft_record<352, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<44,    2,   44,    8,     8,  1408,    4,  1423>,
        block_fft_implementation<22,    2,   22,   16,     4,  1408,    8,  1424>,
        block_fft_implementation<44,    2,   44,    8,     8,   704,    8,  1425>,
        block_fft_implementation<22,    2,   22,   16,     4,   704,   16,  1426>
    >;
};

template<> struct block_fft_record<360, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<60,    6,   60,    6,   128,  1440,    2,  1429>,
        block_fft_implementation<60,    6,   60,    6,   128,   720,    4,  1427>,
        block_fft_implementation<30,    2,   30,   12,    10,  1440,    4,  1430>,
        block_fft_implementation<30,    2,   30,   12,    10,   720,    8,  1428>
    >;
};

template<> struct block_fft_record<368, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<46,    2,   46,    8,     8,  1472,    6,  1432>,
        block_fft_implementation<46,    2,   46,    8,    64,   736,   12,  1431>
    >;
};

template<> struct block_fft_record<384, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,    2,   24,   16,     4,  1536,    4,  1437>,
        block_fft_implementation<12,    2,   12,   32,     2,  1536,    6,  1433>,
        block_fft_implementation<48,    8,   48,    8,     8,   768,    4,  1436>,
        block_fft_implementation<24,    2,   24,   16,     4,   768,    8,  1435>,
        block_fft_implementation<12,    2,   12,   32,     4,   768,   12,  1434>,
        block_fft_implementation<48,    8,   48,    8,    16,  1536,    2,  1438>,
        block_fft_implementation< 6,    2,    6,   64,     4,  1536,   12,  1439>,
        block_fft_implementation< 6,    2,    6,   64,     4,   768,   24,  1440>
    >;
};

template<> struct block_fft_record<392, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   14,   28,   14,    18,  1568,    2,  1442>,
        block_fft_implementation<28,   14,   28,   14,    18,   784,    4,  1441>,
        block_fft_implementation<56,    7,   56,    7,    18,   784,    4,  1444>,
        block_fft_implementation<56,    7,   56,    7,    36,  1568,    2,  1446>,
        block_fft_implementation<14,    2,   14,   28,    18,  1568,    4,  1443>,
        block_fft_implementation<14,    2,   14,   28,     2,   784,    8,  1445>
    >;
};

template<> struct block_fft_record<416, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,    2,   26,   16,     4,  1664,    8,  1448>,
        block_fft_implementation<52,    2,   52,    8,     8,  1664,    4,  1447>,
        block_fft_implementation<52,    2,   52,    8,     8,   832,    8,  1449>,
        block_fft_implementation<26,    2,   26,   16,     4,   832,   16,  1450>
    >;
};

template<> struct block_fft_record<432, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<36,   12,   36,   12,    42,  1728,    2,  1453>,
        block_fft_implementation<36,   12,   36,   12,    10,   864,    4,  1451>,
        block_fft_implementation<12,    3,   12,   36,    14,  1728,    4,  1452>,
        block_fft_implementation<12,    3,   12,   36,    14,   864,    8,  1454>,
        block_fft_implementation< 6,    2,    6,   72,    14,  1728,    6,  1457>,
        block_fft_implementation<24,    3,   24,   18,    14,  1728,    4,  1458>,
        block_fft_implementation<24,    3,   24,   18,    14,   864,    8,  1455>,
        block_fft_implementation<18,    2,   18,   24,    10,  1728,    6,  1456>,
        block_fft_implementation< 6,    2,    6,   72,    14,   864,   12,  1459>,
        block_fft_implementation<48,    3,   48,    9,    14,   864,    8,  1461>,
        block_fft_implementation<18,    2,   18,   24,     2,   864,   12,  1460>,
        block_fft_implementation<54,    2,   54,    8,    16,   864,   12,  1464>,
        block_fft_implementation<48,    3,   48,    9,    14,  1728,    4,  1463>,
        block_fft_implementation<54,    2,   54,    8,     8,  1728,    6,  1462>
    >;
};

template<> struct block_fft_record<448, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,    4,   28,   16,     4,  1792,    4,  1465>,
        block_fft_implementation<56,    8,   56,    8,     8,  1792,    2,  1468>,
        block_fft_implementation<28,    4,   28,   16,     4,   896,    8,  1466>,
        block_fft_implementation<56,    8,   56,    8,     8,   896,    4,  1467>,
        block_fft_implementation<14,    2,   14,   32,     2,  1792,   10,  1469>,
        block_fft_implementation<14,    2,   14,   32,     4,   896,   20,  1470>
    >;
};

template<> struct block_fft_record<464, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<58,    2,   58,    8,     8,  1856,    6,  1472>,
        block_fft_implementation<58,    2,   58,    8,    64,   928,   12,  1471>
    >;
};

template<> struct block_fft_record<480, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,    2,   30,   16,     4,  1920,    8,  1473>,
        block_fft_implementation<60,    2,   60,    8,    16,  1920,    4,  1474>,
        block_fft_implementation<60,    2,   60,    8,     8,   960,    8,  1475>,
        block_fft_implementation<30,    2,   30,   16,     4,   960,   16,  1476>
    >;
};

template<> struct block_fft_record<496, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<62,    2,   62,    8,     8,  1984,    6,  1478>,
        block_fft_implementation<62,    2,   62,    8,    64,   992,   12,  1477>
    >;
};

template<> struct block_fft_record<500, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<50,   10,   50,   10,    50,  2000,    2,  1484>,
        block_fft_implementation<50,   10,   50,   10,    50,  1000,    4,  1483>,
        block_fft_implementation<20,    5,   20,   25,    10,  2000,    4,  1481>,
        block_fft_implementation<10,    5,   10,   50,    10,  2000,    4,  1479>,
        block_fft_implementation<10,    5,   10,   50,    10,  1000,    8,  1480>,
        block_fft_implementation<20,    5,   20,   25,    10,  1000,    8,  1482>
    >;
};

template<> struct block_fft_record<504, half, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,    2,   42,   12,    10,  2016,    4,  1485>,
        block_fft_implementation<42,    2,   42,   12,    42,  1008,    8,  1486>
    >;
};
