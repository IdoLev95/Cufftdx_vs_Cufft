//Copyright (c) 2019-2023, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


template<> struct block_fft_record<33, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<33,   33,   33,    1,    32,     0,    0,     0>
    >;
};

template<> struct block_fft_record<34, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<34,   34,   34,    1,    32,     0,    0,     1>
    >;
};

template<> struct block_fft_record<35, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<35,   35,   35,    1,    32,     0,    0,     2>
    >;
};

template<> struct block_fft_record<37, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<37,   37,   37,    1,    32,     0,    0,     3>
    >;
};

template<> struct block_fft_record<38, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<38,   38,   38,    1,    32,     0,    0,     4>
    >;
};

template<> struct block_fft_record<39, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<39,   39,   39,    1,    32,     0,    0,     5>
    >;
};

template<> struct block_fft_record<40, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,    2,   20,    2,    16,   160,    4,     6>,
        block_fft_implementation<10,    2,   10,    4,    16,   320,    4,     7>,
        block_fft_implementation<10,    2,   10,    4,    16,   160,    8,     8>,
        block_fft_implementation<40,   40,   40,    1,    32,     0,    0,     9>
    >;
};

template<> struct block_fft_record<41, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<41,   41,   41,    1,    32,     0,    0,    10>
    >;
};

template<> struct block_fft_record<42, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,   42,   42,    1,    32,     0,    0,    11>
    >;
};

template<> struct block_fft_record<43, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<43,   43,   43,    1,    32,     0,    0,    12>
    >;
};

template<> struct block_fft_record<44, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<44,   44,   44,    1,    32,     0,    0,    13>
    >;
};

template<> struct block_fft_record<45, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<45,   45,   45,    1,    32,     0,    0,    14>
    >;
};

template<> struct block_fft_record<46, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<46,   46,   46,    1,    32,     0,    0,    15>
    >;
};

template<> struct block_fft_record<47, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<47,   47,   47,    1,    32,     0,    0,    16>
    >;
};

template<> struct block_fft_record<48, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<48,   48,   48,    1,    32,     0,    0,    17>
    >;
};

template<> struct block_fft_record<50, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<50,   50,   50,    1,    32,     0,    0,    18>
    >;
};

template<> struct block_fft_record<51, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<51,   51,   51,    1,    32,     0,    0,    19>
    >;
};

template<> struct block_fft_record<52, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<52,   52,   52,    1,    32,     0,    0,    20>
    >;
};

template<> struct block_fft_record<53, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<53,   53,   53,    1,    32,     0,    0,    21>
    >;
};

template<> struct block_fft_record<54, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<54,   54,   54,    1,    32,     0,    0,    22>
    >;
};

template<> struct block_fft_record<55, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<55,   55,   55,    1,    32,     0,    0,    23>
    >;
};

template<> struct block_fft_record<56, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<56,   56,   56,    1,    32,     0,    0,    24>
    >;
};

template<> struct block_fft_record<57, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<57,   57,   57,    1,    32,     0,    0,    25>
    >;
};

template<> struct block_fft_record<58, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<58,   58,   58,    1,    32,     0,    0,    26>
    >;
};

template<> struct block_fft_record<59, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<59,   59,   59,    1,    32,     0,    0,    27>
    >;
};

template<> struct block_fft_record<60, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<60,   60,   60,    1,    32,     0,    0,    28>
    >;
};

template<> struct block_fft_record<61, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<61,   61,   61,    1,    32,     0,    0,    29>
    >;
};

template<> struct block_fft_record<62, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<62,   62,   62,    1,    32,     0,    0,    30>
    >;
};

template<> struct block_fft_record<63, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<63,   63,   63,    1,    32,     0,    0,    31>
    >;
};

template<> struct block_fft_record<2, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 2,    2,    2,    1,   128,     0,    0,    32>
    >;
};

template<> struct block_fft_record<4, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 4,    4,    4,    1,    64,     0,    0,    33>,
        block_fft_implementation< 2,    2,    2,    2,   128,    16,    4,    34>,
        block_fft_implementation< 2,    2,    2,    2,   128,    32,    2,    35>
    >;
};

template<> struct block_fft_record<8, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,    1,    32,     0,    0,    36>,
        block_fft_implementation< 4,    2,    4,    2,   112,    32,    4,    37>,
        block_fft_implementation< 4,    2,    4,    2,   128,    64,    2,    38>,
        block_fft_implementation< 2,    2,    2,    4,    96,    32,    8,    39>,
        block_fft_implementation< 2,    2,    2,    4,   128,    64,    4,    40>
    >;
};

template<> struct block_fft_record<16, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   16,    1,    32,     0,    0,    41>,
        block_fft_implementation< 4,    4,    4,    4,    64,    64,    4,    42>,
        block_fft_implementation< 4,    4,    4,    4,    80,   128,    2,    43>,
        block_fft_implementation< 8,    2,    8,    2,    96,    64,    4,    44>,
        block_fft_implementation< 8,    2,    8,    2,    96,   128,    2,    45>,
        block_fft_implementation< 2,    2,    2,    8,    64,    64,   12,    46>,
        block_fft_implementation< 2,    2,    2,    8,    80,   128,    6,    47>
    >;
};

template<> struct block_fft_record<32, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,   32,    1,    32,     0,    0,    48>,
        block_fft_implementation< 8,    4,    8,    4,    30,   256,    2,    49>,
        block_fft_implementation< 8,    4,    8,    4,    48,   128,    4,    50>,
        block_fft_implementation< 4,    2,    4,    8,    32,   256,    4,    51>,
        block_fft_implementation< 4,    2,    4,    8,    64,   128,    8,    52>,
        block_fft_implementation< 2,    2,    2,   16,    30,   256,    8,    53>,
        block_fft_implementation<16,    2,   16,    2,    96,   256,    2,    54>,
        block_fft_implementation< 2,    2,    2,   16,    24,   128,   16,    55>,
        block_fft_implementation<16,    2,   16,    2,    27,   128,    4,    56>
    >;
};

template<> struct block_fft_record<64, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,    8,    16,   512,    2,    57>,
        block_fft_implementation< 8,    8,    8,    8,    16,   256,    4,    58>,
        block_fft_implementation< 4,    4,    4,   16,    12,   512,    4,    59>,
        block_fft_implementation< 4,    4,    4,   16,    16,   256,    8,    60>,
        block_fft_implementation<16,    4,   16,    4,    31,   512,    2,    61>,
        block_fft_implementation<16,    4,   16,    4,    14,   256,    4,    62>,
        block_fft_implementation<32,    2,   32,    2,    28,   512,    2,    63>,
        block_fft_implementation< 2,    2,    2,   32,    12,   512,   10,    64>,
        block_fft_implementation< 2,    2,    2,   32,    12,   256,   20,    65>,
        block_fft_implementation<32,    2,   32,    2,    30,   256,    4,    66>,
        block_fft_implementation<64,   64,   64,    1,    32,     0,    0,    67>
    >;
};

template<> struct block_fft_record<128, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,    8,   16,    8,     8,   512,    4,    68>,
        block_fft_implementation< 8,    2,    8,   16,     8,  1024,    4,    69>,
        block_fft_implementation<16,    8,   16,    8,    16,  1024,    2,    70>,
        block_fft_implementation< 8,    2,    8,   16,     8,   512,    8,    71>,
        block_fft_implementation< 4,    2,    4,   32,     4,  1024,    6,    72>,
        block_fft_implementation< 4,    2,    4,   32,     8,   512,   12,    73>,
        block_fft_implementation<32,    4,   32,    4,    15,  1024,    2,    74>,
        block_fft_implementation<32,    4,   32,    4,    16,   512,    4,    75>,
        block_fft_implementation< 2,    2,    2,   64,     5,  1024,   12,    76>,
        block_fft_implementation< 2,    2,    2,   64,     5,   512,   24,    77>
    >;
};

template<> struct block_fft_record<256, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   16,   16,     4,  1024,    4,    78>,
        block_fft_implementation< 8,    4,    8,   32,     2,  2048,    4,    79>,
        block_fft_implementation< 8,    4,    8,   32,     4,  1024,    8,    80>,
        block_fft_implementation<16,   16,   16,   16,     4,  2048,    2,    81>,
        block_fft_implementation<32,    8,   32,    8,     8,  2048,    2,    82>,
        block_fft_implementation< 4,    4,    4,   64,     2,  2048,    6,    83>,
        block_fft_implementation< 4,    4,    4,   64,     4,  1024,   12,    84>,
        block_fft_implementation<32,    8,   32,    8,     8,  1024,    4,    85>,
        block_fft_implementation< 2,    2,    2,  128,     3,  2048,   14,    86>,
        block_fft_implementation< 2,    2,    2,  128,     3,  1024,   28,    87>
    >;
};

template<> struct block_fft_record<512, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,   64,     1,  4096,    4,    88>,
        block_fft_implementation< 8,    8,    8,   64,     1,  2048,    8,    89>,
        block_fft_implementation<32,   16,   32,   16,     2,  4096,    2,    91>,
        block_fft_implementation<16,    2,   16,   32,     2,  2048,    8,    90>,
        block_fft_implementation<16,    2,   16,   32,     2,  4096,    4,    93>,
        block_fft_implementation<32,   16,   32,   16,     4,  2048,    4,    92>,
        block_fft_implementation< 4,    2,    4,  128,     1,  4096,    8,    94>,
        block_fft_implementation< 4,    2,    4,  128,     2,  2048,   16,    95>,
        block_fft_implementation< 2,    2,    2,  256,     2,  4096,   16,    96>,
        block_fft_implementation< 2,    2,    2,  256,     1,  2048,   32,    97>
    >;
};

template<> struct block_fft_record<1024, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,   32,   32,     1,  8192,    2,   100>,
        block_fft_implementation<16,    4,   16,   64,     1,  4096,    8,    98>,
        block_fft_implementation< 8,    2,    8,  128,     1,  4096,   12,   101>,
        block_fft_implementation<32,   32,   32,   32,     2,  4096,    4,   102>,
        block_fft_implementation< 8,    2,    8,  128,     1,  8192,    6,    99>,
        block_fft_implementation<16,    4,   16,   64,     1,  8192,    4,   103>,
        block_fft_implementation< 4,    4,    4,  256,     1,  8192,    8,   104>,
        block_fft_implementation< 4,    4,    4,  256,     1,  4096,   16,   105>,
        block_fft_implementation< 2,    2,    2,  512,     1,  8192,   18,   106>,
        block_fft_implementation< 2,    2,    2,  512,     1,  4096,   36,   107>
    >;
};

template<> struct block_fft_record<2048, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,    8,   16,  128,     1,  8192,    8,   108>,
        block_fft_implementation< 8,    4,    8,  256,     1,  8192,   12,   110>,
        block_fft_implementation< 8,    4,    8,  256,     1, 16384,    6,   109>,
        block_fft_implementation<16,    8,   16,  128,     1, 16384,    4,   111>,
        block_fft_implementation<32,    2,   32,   64,     1, 16384,    4,   112>,
        block_fft_implementation<32,    2,   32,   64,     1,  8192,    8,   113>,
        block_fft_implementation< 4,    2,    4,  512,     1, 16384,   10,   114>,
        block_fft_implementation< 4,    2,    4,  512,     1,  8192,   20,   115>,
        block_fft_implementation< 2,    2,    2, 1024,     1, 16384,   20,   116>,
        block_fft_implementation< 2,    2,    2, 1024,     1,  8192,   40,   117>
    >;
};

template<> struct block_fft_record<4096, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   16,  256,     1, 16384,    8,   118>,
        block_fft_implementation< 8,    8,    8,  512,     1, 16384,   12,   120>,
        block_fft_implementation<16,   16,   16,  256,     1, 32768,    4,   121>,
        block_fft_implementation<32,    4,   32,  128,     1, 32768,    4,   122>,
        block_fft_implementation< 8,    8,    8,  512,     1, 32768,    6,   119>,
        block_fft_implementation<32,    4,   32,  128,     1, 16384,    8,   123>,
        block_fft_implementation< 4,    4,    4, 1024,     1, 32768,   10,   124>,
        block_fft_implementation< 4,    4,    4, 1024,     1, 16384,   20,   125>
    >;
};

template<> struct block_fft_record<8192, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,    8,   32,  256,     1, 65536,    4,   127>,
        block_fft_implementation<32,    8,   32,  256,     1, 32768,    8,   128>,
        block_fft_implementation<16,    2,   16,  512,     1, 32768,   12,   126>,
        block_fft_implementation<16,    2,   16,  512,     1, 65536,    6,   130>,
        block_fft_implementation< 8,    2,    8, 1024,     1, 32768,   16,   131>,
        block_fft_implementation< 8,    2,    8, 1024,     1, 65536,    8,   129>
    >;
};

template<> struct block_fft_record<16384, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   16,   32,  512,     1, 131072,    4,  1487>,
        block_fft_implementation<16,    4,   16, 1024,     1, 65536,   12,   132>,
        block_fft_implementation<16,    4,   16, 1024,     1, 131072,    6,  1488>,
        block_fft_implementation<32,   16,   32,  512,     1, 65536,    8,   133>
    >;
};

template<> struct block_fft_record<32768, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,   32, 1024,     1, 131072,    8,  1489>
    >;
};

template<> struct block_fft_record<3, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 3,    3,    3,    1,    32,     0,    0,   134>
    >;
};

template<> struct block_fft_record<9, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    9,    1,    32,     0,    0,   135>,
        block_fft_implementation< 3,    3,    3,    3,    21,    72,    2,   136>,
        block_fft_implementation< 3,    3,    3,    3,    64,    36,    4,   137>
    >;
};

template<> struct block_fft_record<27, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,    1,    32,     0,    0,   138>,
        block_fft_implementation< 9,    3,    9,    3,    21,   216,    2,   140>,
        block_fft_implementation< 9,    3,    9,    3,    21,   108,    4,   139>,
        block_fft_implementation< 3,    3,    3,    9,    28,   216,    4,   141>,
        block_fft_implementation< 3,    3,    3,    9,    28,   108,    8,   142>
    >;
};

template<> struct block_fft_record<81, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    9,    9,     7,   648,    2,   143>,
        block_fft_implementation< 9,    9,    9,    9,     7,   324,    4,   144>,
        block_fft_implementation<27,    3,   27,    3,    21,   648,    2,   146>,
        block_fft_implementation<27,    3,   27,    3,    21,   324,    4,   145>,
        block_fft_implementation< 3,    3,    3,   27,     7,   648,    6,   147>,
        block_fft_implementation< 3,    3,    3,   27,    14,   324,   12,   148>
    >;
};

template<> struct block_fft_record<243, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,    9,   27,    9,     7,  1944,    2,   149>,
        block_fft_implementation<27,    9,   27,    9,     7,   972,    4,   150>,
        block_fft_implementation< 9,    3,    9,   27,    14,  1944,    4,   151>,
        block_fft_implementation< 9,    3,    9,   27,     9,   972,    8,   152>,
        block_fft_implementation< 3,    3,    3,   81,     3,  1944,    8,   153>,
        block_fft_implementation< 3,    3,    3,   81,     3,   972,   16,   154>
    >;
};

template<> struct block_fft_record<729, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,   27,    14,  5832,    2,   155>,
        block_fft_implementation<27,   27,   27,   27,     9,  2916,    4,   156>,
        block_fft_implementation< 9,    9,    9,   81,     3,  5832,    4,   157>,
        block_fft_implementation< 9,    9,    9,   81,     3,  2916,    8,   158>,
        block_fft_implementation< 3,    3,    3,  243,     1,  5832,   10,   159>,
        block_fft_implementation< 3,    3,    3,  243,     1,  2916,   20,   160>
    >;
};

template<> struct block_fft_record<2187, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,    3,   27,   81,     3, 17496,    4,   162>,
        block_fft_implementation< 9,    3,    9,  243,     1, 17496,    6,   161>,
        block_fft_implementation< 9,    3,    9,  243,     1,  8748,   12,   163>,
        block_fft_implementation<27,    3,   27,   81,     3,  8748,    8,   164>,
        block_fft_implementation< 3,    3,    3,  729,     1, 17496,   12,   165>,
        block_fft_implementation< 3,    3,    3,  729,     1,  8748,   24,   166>
    >;
};

template<> struct block_fft_record<6561, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,    9,   27,  243,     1, 52488,    4,   168>,
        block_fft_implementation<27,    9,   27,  243,     1, 26244,    8,   167>,
        block_fft_implementation< 9,    9,    9,  729,     1, 52488,    6,   170>,
        block_fft_implementation< 9,    9,    9,  729,     1, 26244,   12,   169>
    >;
};

template<> struct block_fft_record<19683, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,  729,     1, 157464,    4,  1490>,
        block_fft_implementation<27,   27,   27,  729,     1, 78732,    8,   171>
    >;
};

template<> struct block_fft_record<5, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,    5,    1,    64,     0,    0,   172>
    >;
};

template<> struct block_fft_record<25, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,   25,    1,    32,     0,    0,   173>,
        block_fft_implementation< 5,    5,    5,    5,    25,   200,    2,   174>,
        block_fft_implementation< 5,    5,    5,    5,    25,   100,    4,   175>
    >;
};

template<> struct block_fft_record<125, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,    5,   25,    5,     6,  1000,    2,   177>,
        block_fft_implementation<25,    5,   25,    5,    25,   500,    4,   176>,
        block_fft_implementation< 5,    5,    5,   25,     5,  1000,    4,   178>,
        block_fft_implementation< 5,    5,    5,   25,     5,   500,    8,   179>
    >;
};

template<> struct block_fft_record<625, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,   25,   25,     5,  5000,    2,   181>,
        block_fft_implementation<25,   25,   25,   25,     5,  2500,    4,   180>,
        block_fft_implementation< 5,    5,    5,  125,     1,  5000,    6,   182>,
        block_fft_implementation< 5,    5,    5,  125,     1,  2500,   12,   183>
    >;
};

template<> struct block_fft_record<3125, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,    5,   25,  125,     1, 25000,    4,   185>,
        block_fft_implementation<25,    5,   25,  125,     1, 12500,    8,   184>,
        block_fft_implementation< 5,    5,    5,  625,     1, 25000,    8,   186>,
        block_fft_implementation< 5,    5,    5,  625,     1, 12500,   16,   187>
    >;
};

template<> struct block_fft_record<15625, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,   25,  625,     1, 125000,    4,  1491>,
        block_fft_implementation<25,   25,   25,  625,     1, 62500,    8,   188>
    >;
};

template<> struct block_fft_record<7, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,    1,    32,     0,    0,   189>
    >;
};

template<> struct block_fft_record<49, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<49,   49,   49,    1,    32,     0,    0,   190>,
        block_fft_implementation< 7,    7,    7,    7,     9,   392,    2,   191>,
        block_fft_implementation< 7,    7,    7,    7,     9,   196,    4,   192>
    >;
};

template<> struct block_fft_record<343, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,   49,     5,  2744,    4,   193>,
        block_fft_implementation< 7,    7,    7,   49,     5,  1372,    8,   194>
    >;
};

template<> struct block_fft_record<2401, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,  343,     1, 19208,    6,   195>,
        block_fft_implementation< 7,    7,    7,  343,     1,  9604,   12,   196>
    >;
};

template<> struct block_fft_record<16807, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<49,    7,   49,  343,     1, 134456,    4,  1492>,
        block_fft_implementation<49,    7,   49,  343,     1, 67228,    8,   197>
    >;
};

template<> struct block_fft_record<11, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,    1,    32,     0,    0,   198>
    >;
};

template<> struct block_fft_record<121, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,   11,    23,   968,    2,   199>,
        block_fft_implementation<11,   11,   11,   11,    23,   484,    4,   200>
    >;
};

template<> struct block_fft_record<1331, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,  121,     1, 10648,    4,   202>,
        block_fft_implementation<11,   11,   11,  121,     1,  5324,    8,   201>
    >;
};

template<> struct block_fft_record<6, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,    1,    64,     0,    0,   203>
    >;
};

template<> struct block_fft_record<36, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,    6,    21,   288,    2,   205>,
        block_fft_implementation< 6,    6,    6,    6,    21,   144,    4,   204>,
        block_fft_implementation<36,   36,   36,    1,    36,     0,    0,   206>
    >;
};

template<> struct block_fft_record<216, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,   36,     7,  1728,    4,   207>,
        block_fft_implementation< 6,    6,    6,   36,     7,   864,    8,   208>
    >;
};

template<> struct block_fft_record<1296, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,  216,     4, 10368,    6,   209>,
        block_fft_implementation< 6,    6,    6,  216,     1,  5184,   12,   210>
    >;
};

template<> struct block_fft_record<7776, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<36,    6,   36,  216,     1, 62208,    4,   211>,
        block_fft_implementation<36,    6,   36,  216,     1, 31104,    8,   212>
    >;
};

template<> struct block_fft_record<10, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,    1,    32,     0,    0,   213>
    >;
};

template<> struct block_fft_record<100, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,   10,     3,   800,    2,   215>,
        block_fft_implementation<10,   10,   10,   10,     3,   400,    4,   214>
    >;
};

template<> struct block_fft_record<1000, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,  100,     5,  8000,    4,   216>,
        block_fft_implementation<10,   10,   10,  100,     5,  4000,    8,   217>
    >;
};

template<> struct block_fft_record<10000, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10, 1000,     1, 80000,    6,   218>,
        block_fft_implementation<10,   10,   10, 1000,     1, 40000,   12,   219>
    >;
};

template<> struct block_fft_record<12, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,    1,    32,     0,    0,   220>
    >;
};

template<> struct block_fft_record<144, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,   12,    21,  1152,    2,   221>,
        block_fft_implementation<12,   12,   12,   12,     5,   576,    4,   222>
    >;
};

template<> struct block_fft_record<1728, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,  144,     7, 13824,    4,   223>,
        block_fft_implementation<12,   12,   12,  144,     4,  6912,    8,   224>
    >;
};

template<> struct block_fft_record<13, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,   13,    1,    32,     0,    0,   225>
    >;
};

template<> struct block_fft_record<169, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,   13,   13,    19,  1352,    2,   226>,
        block_fft_implementation<13,   13,   13,   13,    19,   676,    4,   227>
    >;
};

template<> struct block_fft_record<2197, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,   13,  169,     3, 17576,    4,   229>,
        block_fft_implementation<13,   13,   13,  169,     3,  8788,    8,   228>
    >;
};

template<> struct block_fft_record<14, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,   14,    1,    32,     0,    0,   230>
    >;
};

template<> struct block_fft_record<196, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,   14,   14,     9,  1568,    2,   231>,
        block_fft_implementation<14,   14,   14,   14,     9,   784,    4,   232>
    >;
};

template<> struct block_fft_record<2744, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,   14,  196,     5, 21952,    4,   233>,
        block_fft_implementation<14,   14,   14,  196,     5, 10976,    8,   234>
    >;
};

template<> struct block_fft_record<15, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,   15,    1,    32,     0,    0,   235>
    >;
};

template<> struct block_fft_record<225, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,   15,   15,    17,  1800,    2,   236>,
        block_fft_implementation<15,   15,   15,   15,     4,   900,    4,   237>
    >;
};

template<> struct block_fft_record<3375, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,   15,  225,     1, 27000,    4,   238>,
        block_fft_implementation<15,   15,   15,  225,     1, 13500,    8,   239>
    >;
};

template<> struct block_fft_record<17, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,   17,    1,    32,     0,    0,   240>
    >;
};

template<> struct block_fft_record<289, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,   17,   17,    15,  2312,    2,   241>,
        block_fft_implementation<17,   17,   17,   17,    15,  1156,    4,   242>
    >;
};

template<> struct block_fft_record<4913, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,   17,  289,     2, 39304,    4,   243>,
        block_fft_implementation<17,   17,   17,  289,     2, 19652,    8,   244>
    >;
};

template<> struct block_fft_record<18, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,   18,    1,    32,     0,    0,   245>
    >;
};

template<> struct block_fft_record<324, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,   18,   18,     7,  2592,    2,   246>,
        block_fft_implementation<18,   18,   18,   18,     7,  1296,    4,   247>
    >;
};

template<> struct block_fft_record<5832, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,   18,  324,     1, 46656,    4,   248>,
        block_fft_implementation<18,   18,   18,  324,     1, 23328,    8,   249>
    >;
};

template<> struct block_fft_record<19, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,   19,    1,    32,     0,    0,   250>
    >;
};

template<> struct block_fft_record<361, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,   19,   19,    20,  2888,    2,   251>,
        block_fft_implementation<19,   19,   19,   19,    13,  1444,    4,   252>
    >;
};

template<> struct block_fft_record<6859, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,   19,  361,     1, 54872,    4,   253>,
        block_fft_implementation<19,   19,   19,  361,     1, 27436,    8,   254>
    >;
};

template<> struct block_fft_record<20, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,   20,    1,    32,     0,    0,   255>
    >;
};

template<> struct block_fft_record<400, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,   20,   20,    19,  3200,    2,   256>,
        block_fft_implementation<20,   20,   20,   20,     6,  1600,    4,   257>
    >;
};

template<> struct block_fft_record<8000, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,   20,  400,     1, 64000,    4,   259>,
        block_fft_implementation<20,   20,   20,  400,     1, 32000,    8,   258>
    >;
};

template<> struct block_fft_record<21, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,   21,    1,    32,     0,    0,   260>
    >;
};

template<> struct block_fft_record<441, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,   21,   21,     3,  3528,    2,   261>,
        block_fft_implementation<21,   21,   21,   21,     3,  1764,    4,   262>
    >;
};

template<> struct block_fft_record<9261, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,   21,  441,     1, 74088,    4,   264>,
        block_fft_implementation<21,   21,   21,  441,     1, 37044,    8,   263>
    >;
};

template<> struct block_fft_record<22, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,   22,    1,    32,     0,    0,   265>
    >;
};

template<> struct block_fft_record<484, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,   22,   22,    29,  3872,    2,   266>,
        block_fft_implementation<22,   22,   22,   22,    11,  1936,    4,   267>
    >;
};

template<> struct block_fft_record<10648, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,   22,  484,     1, 85184,    4,   268>,
        block_fft_implementation<22,   22,   22,  484,     1, 42592,    8,   269>
    >;
};

template<> struct block_fft_record<23, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,   23,    1,    32,     0,    0,   270>
    >;
};

template<> struct block_fft_record<529, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,   23,   23,    11,  4232,    2,   271>,
        block_fft_implementation<23,   23,   23,   23,    11,  2116,    4,   272>
    >;
};

template<> struct block_fft_record<12167, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,   23,  529,     1, 97336,    4,   273>,
        block_fft_implementation<23,   23,   23,  529,     1, 48668,    8,   274>
    >;
};

template<> struct block_fft_record<24, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,   24,    1,    32,     0,    0,   275>
    >;
};

template<> struct block_fft_record<576, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,   24,   24,     5,  2304,    4,   276>,
        block_fft_implementation<24,   24,   24,   24,     5,  4608,    2,   277>
    >;
};

template<> struct block_fft_record<13824, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,   24,  576,     1, 110592,    4,  1493>,
        block_fft_implementation<24,   24,   24,  576,     1, 55296,    8,   278>
    >;
};

template<> struct block_fft_record<26, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,   26,    1,    32,     0,    0,   279>
    >;
};

template<> struct block_fft_record<676, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,   26,   26,    19,  5408,    2,   280>,
        block_fft_implementation<26,   26,   26,   26,    19,  2704,    4,   281>
    >;
};

template<> struct block_fft_record<17576, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,   26,  676,     1, 140608,    4,  1494>,
        block_fft_implementation<26,   26,   26,  676,     1, 70304,    8,   282>
    >;
};

template<> struct block_fft_record<28, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,   28,    1,    32,     0,    0,   283>
    >;
};

template<> struct block_fft_record<784, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,   28,   28,     9,  3136,    4,   284>,
        block_fft_implementation<28,   28,   28,   28,     1,  6272,    2,   285>
    >;
};

template<> struct block_fft_record<21952, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,   28,  784,     1, 87808,    8,   286>
    >;
};

template<> struct block_fft_record<29, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,   29,    1,    32,     0,    0,   287>
    >;
};

template<> struct block_fft_record<841, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,   29,   29,    13,  6728,    2,   288>,
        block_fft_implementation<29,   29,   29,   29,    13,  3364,    4,   289>
    >;
};

template<> struct block_fft_record<24389, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,   29,  841,     1, 97556,    8,   290>
    >;
};

template<> struct block_fft_record<30, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,   30,    1,    32,     0,    0,   291>
    >;
};

template<> struct block_fft_record<900, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,   30,   30,    17,  7200,    2,   292>,
        block_fft_implementation<30,   30,   30,   30,     1,  3600,    4,   293>
    >;
};

template<> struct block_fft_record<27000, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,   30,  900,     1, 108000,    8,  1495>
    >;
};

template<> struct block_fft_record<31, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,   31,    1,    32,     0,    0,   294>
    >;
};

template<> struct block_fft_record<961, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,   31,   31,    12,  7688,    2,   295>,
        block_fft_implementation<31,   31,   31,   31,     8,  3844,    4,   296>
    >;
};

template<> struct block_fft_record<29791, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,   31,  961,     1, 119164,    8,  1496>
    >;
};

template<> struct block_fft_record<68, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<34,    2,   34,    2,    16,   544,    2,   298>,
        block_fft_implementation<34,    2,   34,    2,    16,   272,    4,   297>
    >;
};

template<> struct block_fft_record<72, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,    6,   12,    6,    21,   288,    4,   299>,
        block_fft_implementation<36,    2,   36,    2,    16,   288,    4,   302>,
        block_fft_implementation<24,    3,   24,    3,    21,   288,    4,   300>,
        block_fft_implementation<12,    6,   12,    6,     5,   576,    2,   301>,
        block_fft_implementation<36,    2,   36,    2,    32,   576,    2,   306>,
        block_fft_implementation<24,    3,   24,    3,    20,   576,    2,   304>,
        block_fft_implementation<18,    2,   18,    4,     8,   576,    4,   305>,
        block_fft_implementation<18,    2,   18,    4,     8,   288,    8,   303>,
        block_fft_implementation< 6,    2,    6,   12,     5,   576,    4,   308>,
        block_fft_implementation< 6,    2,    6,   12,     8,   288,    8,   307>
    >;
};

template<> struct block_fft_record<76, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<38,    2,   38,    2,    16,   304,    4,   309>,
        block_fft_implementation<38,    2,   38,    2,    16,   608,    2,   310>
    >;
};

template<> struct block_fft_record<80, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,    4,   20,    4,    16,   320,    4,   311>,
        block_fft_implementation<20,    4,   20,    4,    16,   640,    2,   312>,
        block_fft_implementation<40,    2,   40,    2,    32,   320,    4,   313>,
        block_fft_implementation<40,    2,   40,    2,    31,   640,    2,   314>,
        block_fft_implementation<10,    2,   10,    8,     8,   640,    6,   316>,
        block_fft_implementation<10,    2,   10,    8,     8,   320,   12,   315>
    >;
};

template<> struct block_fft_record<84, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,    2,   42,    2,    16,   672,    2,   318>,
        block_fft_implementation<42,    2,   42,    2,    16,   336,    4,   317>
    >;
};

template<> struct block_fft_record<88, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<44,    2,   44,    2,    16,   352,    4,   319>,
        block_fft_implementation<44,    2,   44,    2,    16,   704,    2,   322>,
        block_fft_implementation<22,    2,   22,    4,     8,   352,    8,   320>,
        block_fft_implementation<22,    2,   22,    4,     8,   704,    4,   321>
    >;
};

template<> struct block_fft_record<92, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<46,    2,   46,    2,    32,   736,    2,   324>,
        block_fft_implementation<46,    2,   46,    2,    16,   368,    4,   323>
    >;
};

template<> struct block_fft_record<96, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,    4,   24,    4,    16,   768,    2,   325>,
        block_fft_implementation<12,    2,   12,    8,     4,   768,    4,   326>,
        block_fft_implementation<24,    4,   24,    4,    14,   384,    4,   327>,
        block_fft_implementation< 6,    2,    6,   16,     8,   768,    8,   328>,
        block_fft_implementation<12,    2,   12,    8,     8,   384,    8,   329>,
        block_fft_implementation<48,    2,   48,    2,    32,   768,    2,   330>,
        block_fft_implementation< 6,    2,    6,   16,     8,   384,   16,   331>,
        block_fft_implementation<48,    2,   48,    2,    31,   384,    4,   332>
    >;
};

template<> struct block_fft_record<104, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<52,    2,   52,    2,    16,   416,    4,   333>,
        block_fft_implementation<52,    2,   52,    2,    16,   832,    2,   336>,
        block_fft_implementation<26,    2,   26,    4,     8,   832,    4,   335>,
        block_fft_implementation<26,    2,   26,    4,     8,   416,    8,   334>
    >;
};

template<> struct block_fft_record<108, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,    6,   18,    6,    21,   432,    4,   337>,
        block_fft_implementation<36,    3,   36,    3,    21,   432,    4,   339>,
        block_fft_implementation<54,    2,   54,    2,    16,   432,    4,   340>,
        block_fft_implementation<18,    6,   18,    6,     5,   864,    2,   338>,
        block_fft_implementation<36,    3,   36,    3,    21,   864,    2,   342>,
        block_fft_implementation<54,    2,   54,    2,    16,   864,    2,   346>,
        block_fft_implementation< 6,    3,    6,   18,     7,   432,    8,   341>,
        block_fft_implementation<12,    3,   12,    9,     7,   432,    8,   344>,
        block_fft_implementation< 6,    3,    6,   18,     7,   864,    4,   343>,
        block_fft_implementation<12,    3,   12,    9,     7,   864,    4,   345>
    >;
};

template<> struct block_fft_record<112, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,    4,   28,    4,     8,   448,    4,   347>,
        block_fft_implementation<28,    4,   28,    4,     8,   896,    2,   348>,
        block_fft_implementation<56,    2,   56,    2,    32,   448,    4,   349>,
        block_fft_implementation<56,    2,   56,    2,    32,   896,    2,   352>,
        block_fft_implementation<14,    2,   14,    8,     8,   896,    6,   351>,
        block_fft_implementation<14,    2,   14,    8,     8,   448,   12,   350>
    >;
};

template<> struct block_fft_record<116, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<58,    2,   58,    2,   128,   464,    4,   353>,
        block_fft_implementation<58,    2,   58,    2,   128,   928,    2,   354>
    >;
};

template<> struct block_fft_record<120, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<60,    2,   60,    2,    16,   480,    4,   355>,
        block_fft_implementation<30,    2,   30,    4,     8,   480,    8,   356>,
        block_fft_implementation<30,    2,   30,    4,     8,   960,    4,   357>,
        block_fft_implementation<60,    2,   60,    2,    16,   960,    2,   358>
    >;
};

template<> struct block_fft_record<124, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<62,    2,   62,    2,   128,   496,    4,   359>,
        block_fft_implementation<62,    2,   62,    2,    16,   992,    2,   360>
    >;
};

template<> struct block_fft_record<136, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<34,    2,   34,    4,     8,  1088,    4,   362>,
        block_fft_implementation<34,    2,   34,    4,     8,   544,    8,   361>
    >;
};

template<> struct block_fft_record<152, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<38,    2,   38,    4,     8,  1216,    4,   364>,
        block_fft_implementation<38,    2,   38,    4,    16,   608,    8,   363>
    >;
};

template<> struct block_fft_record<160, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<40,    4,   40,    4,    16,  1280,    2,   366>,
        block_fft_implementation<40,    4,   40,    4,    16,   640,    4,   367>,
        block_fft_implementation<20,    2,   20,    8,     4,  1280,    4,   365>,
        block_fft_implementation<10,    2,   10,   16,     4,  1280,    8,   368>,
        block_fft_implementation<20,    2,   20,    8,     8,   640,    8,   369>,
        block_fft_implementation<10,    2,   10,   16,     8,   640,   16,   370>
    >;
};

template<> struct block_fft_record<168, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,    2,   42,    4,     8,  1344,    4,   372>,
        block_fft_implementation<42,    2,   42,    4,     8,   672,    8,   371>
    >;
};

template<> struct block_fft_record<176, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<44,    4,   44,    4,     8,   704,    4,   373>,
        block_fft_implementation<44,    4,   44,    4,     8,  1408,    2,   374>,
        block_fft_implementation<22,    2,   22,    8,     4,  1408,    6,   376>,
        block_fft_implementation<22,    2,   22,    8,     4,   704,   12,   375>
    >;
};

template<> struct block_fft_record<180, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,    6,   30,    6,    21,   720,    4,   377>,
        block_fft_implementation<30,    6,   30,    6,     5,  1440,    2,   378>,
        block_fft_implementation<60,    3,   60,    3,    21,   720,    4,   379>,
        block_fft_implementation<60,    3,   60,    3,    21,  1440,    2,   380>
    >;
};

template<> struct block_fft_record<184, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<46,    2,   46,    4,     8,  1472,    4,   381>,
        block_fft_implementation<46,    2,   46,    4,    16,   736,    8,   382>
    >;
};

template<> struct block_fft_record<192, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,    8,   24,    8,     4,   768,    4,   383>,
        block_fft_implementation<24,    8,   24,    8,     4,  1536,    2,   384>,
        block_fft_implementation<12,    4,   12,   16,     2,  1536,    4,   385>,
        block_fft_implementation<12,    4,   12,   16,     4,   768,    8,   386>,
        block_fft_implementation<48,    4,   48,    4,    16,   768,    4,   387>,
        block_fft_implementation<48,    4,   48,    4,    15,  1536,    2,   388>,
        block_fft_implementation< 6,    2,    6,   32,     4,  1536,   10,   389>,
        block_fft_implementation< 6,    2,    6,   32,     4,   768,   20,   390>
    >;
};

template<> struct block_fft_record<200, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   10,   20,   10,     3,   800,    4,   391>,
        block_fft_implementation<40,    5,   40,    5,     6,   800,    4,   393>,
        block_fft_implementation<20,   10,   20,   10,     3,  1600,    2,   392>,
        block_fft_implementation<40,    5,   40,    5,     6,  1600,    2,   395>,
        block_fft_implementation<10,    2,   10,   20,     3,  1600,    4,   394>,
        block_fft_implementation<10,    2,   10,   20,     3,   800,    8,   396>,
        block_fft_implementation<50,    2,   50,    4,     8,  1600,    4,   398>,
        block_fft_implementation<50,    2,   50,    4,     8,   800,    8,   397>
    >;
};

template<> struct block_fft_record<208, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<52,    4,   52,    4,     8,   832,    4,   399>,
        block_fft_implementation<52,    4,   52,    4,    16,  1664,    2,   400>,
        block_fft_implementation<26,    2,   26,    8,     4,  1664,    6,   402>,
        block_fft_implementation<26,    2,   26,    8,     4,   832,   12,   401>
    >;
};

template<> struct block_fft_record<224, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,    2,   28,    8,     4,  1792,    4,   403>,
        block_fft_implementation<56,    4,   56,    4,    16,   896,    4,   404>,
        block_fft_implementation<56,    4,   56,    4,    16,  1792,    2,   407>,
        block_fft_implementation<14,    2,   14,   16,     2,  1792,    8,   405>,
        block_fft_implementation<28,    2,   28,    8,     4,   896,    8,   406>,
        block_fft_implementation<14,    2,   14,   16,     4,   896,   16,   408>
    >;
};

template<> struct block_fft_record<232, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<58,    2,   58,    4,     8,  1856,    4,   410>,
        block_fft_implementation<58,    2,   58,    4,     8,   928,    8,   409>
    >;
};

template<> struct block_fft_record<240, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<60,    4,   60,    4,     8,   960,    4,   411>,
        block_fft_implementation<60,    4,   60,    4,     8,  1920,    2,   414>,
        block_fft_implementation<30,    2,   30,    8,     4,   960,   12,   412>,
        block_fft_implementation<30,    2,   30,    8,     4,  1920,    6,   413>
    >;
};

template<> struct block_fft_record<248, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<62,    2,   62,    4,     8,  1984,    4,   416>,
        block_fft_implementation<62,    2,   62,    4,     8,   992,    8,   415>
    >;
};

template<> struct block_fft_record<252, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,    6,   42,    6,     5,  1008,    4,   417>,
        block_fft_implementation<42,    6,   42,    6,     5,  2016,    2,   418>
    >;
};

template<> struct block_fft_record<272, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<34,    2,   34,    8,     4,  2176,    6,   419>,
        block_fft_implementation<34,    2,   34,    8,     4,  1088,   12,   420>
    >;
};

template<> struct block_fft_record<288, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   12,   24,   12,     5,  1152,    4,   421>,
        block_fft_implementation<24,   12,   24,   12,     5,  2304,    2,   423>,
        block_fft_implementation<36,    2,   36,    8,     4,  2304,    4,   426>,
        block_fft_implementation<48,    6,   48,    6,     5,  1152,    4,   425>,
        block_fft_implementation<12,    2,   12,   24,     5,  1152,    8,   422>,
        block_fft_implementation<12,    2,   12,   24,     5,  2304,    4,   424>,
        block_fft_implementation<18,    2,   18,   16,     2,  2304,    8,   427>,
        block_fft_implementation<48,    6,   48,    6,     5,  2304,    2,   430>,
        block_fft_implementation<36,    2,   36,    8,     4,  1152,    8,   429>,
        block_fft_implementation< 6,    2,    6,   48,     2,  2304,    8,   428>,
        block_fft_implementation< 6,    2,    6,   48,     2,  1152,   16,   431>,
        block_fft_implementation<18,    2,   18,   16,     4,  1152,   16,   432>
    >;
};

template<> struct block_fft_record<300, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   10,   30,   10,     3,  1200,    4,   433>,
        block_fft_implementation<30,   10,   30,   10,     3,  2400,    2,   434>,
        block_fft_implementation<60,    5,   60,    5,    25,  1200,    4,   435>,
        block_fft_implementation<60,    5,   60,    5,    25,  2400,    2,   436>
    >;
};

template<> struct block_fft_record<304, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<38,    2,   38,    8,     4,  2432,    6,   437>,
        block_fft_implementation<38,    2,   38,    8,     4,  1216,   12,   438>
    >;
};

template<> struct block_fft_record<320, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<40,    8,   40,    8,     8,  1280,    4,   439>,
        block_fft_implementation<40,    8,   40,    8,     4,  2560,    2,   442>,
        block_fft_implementation<20,    4,   20,   16,     2,  2560,    4,   440>,
        block_fft_implementation<20,    4,   20,   16,     2,  1280,    8,   441>,
        block_fft_implementation<10,    2,   10,   32,     2,  2560,   10,   443>,
        block_fft_implementation<10,    2,   10,   32,     2,  1280,   20,   444>
    >;
};

template<> struct block_fft_record<336, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,    2,   42,    8,     4,  2688,    6,   445>,
        block_fft_implementation<42,    2,   42,    8,     8,  1344,   12,   446>
    >;
};

template<> struct block_fft_record<352, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<44,    2,   44,    8,     4,  2816,    4,   447>,
        block_fft_implementation<22,    2,   22,   16,     2,  2816,    8,   448>,
        block_fft_implementation<44,    2,   44,    8,     8,  1408,    8,   449>,
        block_fft_implementation<22,    2,   22,   16,     4,  1408,   16,   450>
    >;
};

template<> struct block_fft_record<360, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<60,    6,   60,    6,    21,  1440,    4,   451>,
        block_fft_implementation<60,    6,   60,    6,    21,  2880,    2,   454>,
        block_fft_implementation<30,    2,   30,   12,     5,  1440,    8,   452>,
        block_fft_implementation<30,    2,   30,   12,     5,  2880,    4,   453>
    >;
};

template<> struct block_fft_record<368, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<46,    2,   46,    8,     4,  2944,    6,   455>,
        block_fft_implementation<46,    2,   46,    8,     4,  1472,   12,   456>
    >;
};

template<> struct block_fft_record<384, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<48,    8,   48,    8,     4,  1536,    4,   458>,
        block_fft_implementation<24,    2,   24,   16,     2,  1536,    8,   459>,
        block_fft_implementation<12,    2,   12,   32,     1,  1536,   12,   457>,
        block_fft_implementation<24,    2,   24,   16,     2,  3072,    4,   461>,
        block_fft_implementation<12,    2,   12,   32,     1,  3072,    6,   460>,
        block_fft_implementation<48,    8,   48,    8,     4,  3072,    2,   462>,
        block_fft_implementation< 6,    2,    6,   64,     1,  3072,   12,   463>,
        block_fft_implementation< 6,    2,    6,   64,     2,  1536,   24,   464>
    >;
};

template<> struct block_fft_record<392, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   14,   28,   14,     9,  1568,    4,   465>,
        block_fft_implementation<28,   14,   28,   14,     9,  3136,    2,   466>,
        block_fft_implementation<56,    7,   56,    7,     9,  1568,    4,   467>,
        block_fft_implementation<14,    2,   14,   28,     9,  3136,    4,   469>,
        block_fft_implementation<56,    7,   56,    7,     9,  3136,    2,   470>,
        block_fft_implementation<14,    2,   14,   28,     1,  1568,    8,   468>
    >;
};

template<> struct block_fft_record<416, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,    2,   26,   16,     2,  3328,    8,   471>,
        block_fft_implementation<52,    2,   52,    8,     4,  3328,    4,   472>,
        block_fft_implementation<52,    2,   52,    8,     4,  1664,    8,   473>,
        block_fft_implementation<26,    2,   26,   16,     2,  1664,   16,   474>
    >;
};

template<> struct block_fft_record<432, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<36,   12,   36,   12,     5,  1728,    4,   475>,
        block_fft_implementation<36,   12,   36,   12,     5,  3456,    2,   476>,
        block_fft_implementation<12,    3,   12,   36,     7,  1728,    8,   477>,
        block_fft_implementation<12,    3,   12,   36,     7,  3456,    4,   479>,
        block_fft_implementation<24,    3,   24,   18,     7,  1728,    8,   478>,
        block_fft_implementation< 6,    2,    6,   72,     7,  3456,    6,   481>,
        block_fft_implementation<48,    3,   48,    9,     7,  1728,    8,   485>,
        block_fft_implementation<24,    3,   24,   18,     7,  3456,    4,   482>,
        block_fft_implementation< 6,    2,    6,   72,     5,  1728,   12,   480>,
        block_fft_implementation<18,    2,   18,   24,     5,  3456,    6,   483>,
        block_fft_implementation<18,    2,   18,   24,     5,  1728,   12,   484>,
        block_fft_implementation<54,    2,   54,    8,     4,  3456,    6,   488>,
        block_fft_implementation<54,    2,   54,    8,     4,  1728,   12,   486>,
        block_fft_implementation<48,    3,   48,    9,     7,  3456,    4,   487>
    >;
};

template<> struct block_fft_record<448, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<56,    8,   56,    8,     4,  1792,    4,   490>,
        block_fft_implementation<28,    4,   28,   16,     2,  3584,    4,   489>,
        block_fft_implementation<28,    4,   28,   16,     2,  1792,    8,   491>,
        block_fft_implementation<56,    8,   56,    8,     4,  3584,    2,   492>,
        block_fft_implementation<14,    2,   14,   32,     1,  3584,   10,   493>,
        block_fft_implementation<14,    2,   14,   32,     2,  1792,   20,   494>
    >;
};

template<> struct block_fft_record<464, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<58,    2,   58,    8,     4,  3712,    6,   496>,
        block_fft_implementation<58,    2,   58,    8,     4,  1856,   12,   495>
    >;
};

template<> struct block_fft_record<480, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,    2,   30,   16,     2,  3840,    8,   497>,
        block_fft_implementation<60,    2,   60,    8,     4,  3840,    4,   500>,
        block_fft_implementation<60,    2,   60,    8,     4,  1920,    8,   498>,
        block_fft_implementation<30,    2,   30,   16,     2,  1920,   16,   499>
    >;
};

template<> struct block_fft_record<496, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<62,    2,   62,    8,     4,  3968,    6,   502>,
        block_fft_implementation<62,    2,   62,    8,     4,  1984,   12,   501>
    >;
};

template<> struct block_fft_record<500, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<50,   10,   50,   10,     3,  2000,    4,   504>,
        block_fft_implementation<50,   10,   50,   10,    25,  4000,    2,   506>,
        block_fft_implementation<10,    5,   10,   50,     5,  2000,    8,   505>,
        block_fft_implementation<20,    5,   20,   25,     5,  2000,    8,   503>,
        block_fft_implementation<20,    5,   20,   25,     5,  4000,    4,   507>,
        block_fft_implementation<10,    5,   10,   50,     5,  4000,    4,   508>
    >;
};

template<> struct block_fft_record<504, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,    2,   42,   12,     5,  4032,    4,   509>,
        block_fft_implementation<42,    2,   42,   12,     5,  2016,    8,   510>
    >;
};

template<> struct block_fft_record<20736, float, fft_type::c2c, fft_direction::forward, 800> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,    3,   24,  864,     1, 82944,   12,  1497>,
        block_fft_implementation<36,    4,   36,  576,     1, 82944,   12,  1498>,
        block_fft_implementation<48,    3,   48,  432,     1, 82944,   12,  1499>,
        block_fft_implementation<36,    4,   36,  576,     1, 165888,    6,  1500>,
        block_fft_implementation<24,    3,   24,  864,     1, 165888,    6,  1501>,
        block_fft_implementation<48,    3,   48,  432,     1, 165888,    6,  1502>,
        block_fft_implementation<54,    2,   54,  384,     1, 165888,   14,  1503>,
        block_fft_implementation<54,    2,   54,  384,     1, 82944,   28,  1504>
    >;
};
