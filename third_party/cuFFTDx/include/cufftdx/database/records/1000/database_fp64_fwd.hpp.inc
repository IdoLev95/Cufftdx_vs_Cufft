//Copyright (c) 2019-2023, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//NVIDIA CORPORATION and its licensors retain all intellectual property
//and proprietary rights in and to this software, related documentation
//and any modifications thereto.  Any use, reproduction, disclosure or
//distribution of this software and related documentation without an express
//license agreement from NVIDIA CORPORATION is strictly prohibited.
//


template<> struct block_fft_record<33, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<33,   33,   33,    1,   256,     0,    0,   511>
    >;
};

template<> struct block_fft_record<34, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<34,   34,   34,    1,   256,     0,    0,   512>
    >;
};

template<> struct block_fft_record<35, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<35,   35,   35,    1,   256,     0,    0,   513>
    >;
};

template<> struct block_fft_record<37, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<37,   37,   37,    1,   256,     0,    0,   514>
    >;
};

template<> struct block_fft_record<38, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<38,   38,   38,    1,   256,     0,    0,   515>
    >;
};

template<> struct block_fft_record<39, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<39,   39,   39,    1,   256,     0,    0,   516>
    >;
};

template<> struct block_fft_record<40, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,    2,   20,    2,    32,   320,    4,   517>,
        block_fft_implementation<10,    2,   10,    4,    16,   320,    8,   519>,
        block_fft_implementation<20,    2,   20,    2,    31,   640,    2,   518>,
        block_fft_implementation<10,    2,   10,    4,    30,   640,    4,   520>,
        block_fft_implementation<40,   40,   40,    1,   256,     0,    0,   521>
    >;
};

template<> struct block_fft_record<2, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 2,    2,    2,    1,   384,     0,    0,   522>
    >;
};

template<> struct block_fft_record<4, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 4,    4,    4,    1,   512,     0,    0,   523>,
        block_fft_implementation< 2,    2,    2,    2,   448,    32,    4,   524>,
        block_fft_implementation< 2,    2,    2,    2,   368,    64,    2,   525>
    >;
};

template<> struct block_fft_record<8, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,    1,   432,     0,    0,   526>,
        block_fft_implementation< 4,    2,    4,    2,   288,    64,    4,   527>,
        block_fft_implementation< 2,    2,    2,    4,   224,    64,    8,   528>,
        block_fft_implementation< 4,    2,    4,    2,   256,   128,    2,   529>,
        block_fft_implementation< 2,    2,    2,    4,   192,   128,    4,   530>
    >;
};

template<> struct block_fft_record<16, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,   16,   16,    1,    32,     0,    0,   531>,
        block_fft_implementation< 4,    4,    4,    4,   176,   128,    4,   533>,
        block_fft_implementation< 4,    4,    4,    4,   192,   256,    2,   532>,
        block_fft_implementation< 2,    2,    2,    8,    80,   256,    6,   534>,
        block_fft_implementation< 8,    2,    8,    2,   256,   256,    2,   536>,
        block_fft_implementation< 8,    2,    8,    2,   384,   128,    4,   535>,
        block_fft_implementation< 2,    2,    2,    8,   112,   128,   12,   537>
    >;
};

template<> struct block_fft_record<32, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<32,   32,   32,    1,   256,     0,    0,   538>,
        block_fft_implementation< 8,    4,    8,    4,    64,   256,    4,   539>,
        block_fft_implementation< 4,    2,    4,    8,    48,   512,    4,   540>,
        block_fft_implementation< 8,    4,    8,    4,    96,   512,    2,   541>,
        block_fft_implementation< 4,    2,    4,    8,   112,   256,    8,   542>,
        block_fft_implementation<16,    2,   16,    2,    96,   512,    2,   543>,
        block_fft_implementation< 2,    2,    2,   16,    48,   256,   16,   545>,
        block_fft_implementation< 2,    2,    2,   16,    48,   512,    8,   544>,
        block_fft_implementation<16,    2,   16,    2,    31,   256,    4,   546>
    >;
};

template<> struct block_fft_record<64, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,    8,    24,   512,    4,   547>,
        block_fft_implementation< 4,    4,    4,   16,    24,  1024,    4,   549>,
        block_fft_implementation< 4,    4,    4,   16,    22,   512,    8,   548>,
        block_fft_implementation< 8,    8,    8,    8,    31,  1024,    2,   550>,
        block_fft_implementation<16,    4,   16,    4,    30,  1024,    2,   551>,
        block_fft_implementation<16,    4,   16,    4,    16,   512,    4,   552>,
        block_fft_implementation< 2,    2,    2,   32,    30,   512,   20,   554>,
        block_fft_implementation< 2,    2,    2,   32,    12,  1024,   10,   553>
    >;
};

template<> struct block_fft_record<128, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    2,    8,   16,     8,  1024,    8,   555>,
        block_fft_implementation<16,    8,   16,    8,    15,  2048,    2,   556>,
        block_fft_implementation<16,    8,   16,    8,    16,  1024,    4,   557>,
        block_fft_implementation< 4,    2,    4,   32,    12,  1024,   12,   559>,
        block_fft_implementation< 4,    2,    4,   32,     8,  2048,    6,   558>,
        block_fft_implementation< 8,    2,    8,   16,     8,  2048,    4,   560>,
        block_fft_implementation< 2,    2,    2,   64,    14,  1024,   24,   562>,
        block_fft_implementation< 2,    2,    2,   64,     5,  2048,   12,   561>
    >;
};

template<> struct block_fft_record<256, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    4,    8,   32,     4,  2048,    8,   563>,
        block_fft_implementation<16,   16,   16,   16,     8,  4096,    2,   564>,
        block_fft_implementation<16,   16,   16,   16,     8,  2048,    4,   565>,
        block_fft_implementation< 4,    4,    4,   64,     6,  2048,   12,   567>,
        block_fft_implementation< 4,    4,    4,   64,     4,  4096,    6,   566>,
        block_fft_implementation< 8,    4,    8,   32,     4,  4096,    4,   568>,
        block_fft_implementation< 2,    2,    2,  128,     7,  2048,   28,   569>,
        block_fft_implementation< 2,    2,    2,  128,     3,  4096,   14,   570>
    >;
};

template<> struct block_fft_record<512, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,   64,     2,  4096,    8,   571>,
        block_fft_implementation< 8,    8,    8,   64,     2,  8192,    4,   572>,
        block_fft_implementation<16,    2,   16,   32,     2,  8192,    4,   573>,
        block_fft_implementation<16,    2,   16,   32,     4,  4096,    8,   574>,
        block_fft_implementation< 4,    2,    4,  128,     3,  4096,   16,   575>,
        block_fft_implementation< 4,    2,    4,  128,     2,  8192,    8,   576>,
        block_fft_implementation< 2,    2,    2,  256,     4,  4096,   32,   577>,
        block_fft_implementation< 2,    2,    2,  256,     2,  8192,   16,   578>
    >;
};

template<> struct block_fft_record<1024, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    2,    8,  128,     2,  8192,   12,   579>,
        block_fft_implementation<16,    4,   16,   64,     2, 16384,    4,   583>,
        block_fft_implementation<16,    4,   16,   64,     2,  8192,    8,   580>,
        block_fft_implementation< 4,    4,    4,  256,     1, 16384,    8,   582>,
        block_fft_implementation< 4,    4,    4,  256,     1,  8192,   16,   581>,
        block_fft_implementation< 8,    2,    8,  128,     1, 16384,    6,   584>,
        block_fft_implementation< 2,    2,    2,  512,     2,  8192,   36,   586>,
        block_fft_implementation< 2,    2,    2,  512,     1, 16384,   18,   585>
    >;
};

template<> struct block_fft_record<2048, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    4,    8,  256,     1, 16384,   12,   587>,
        block_fft_implementation<16,    8,   16,  128,     2, 32768,    4,   589>,
        block_fft_implementation<16,    8,   16,  128,     1, 16384,    8,   588>,
        block_fft_implementation< 8,    4,    8,  256,     1, 32768,    6,   590>,
        block_fft_implementation< 4,    2,    4,  512,     1, 16384,   20,   591>,
        block_fft_implementation< 4,    2,    4,  512,     1, 32768,   10,   592>,
        block_fft_implementation< 2,    2,    2, 1024,     1, 16384,   40,   593>,
        block_fft_implementation< 2,    2,    2, 1024,     1, 32768,   20,   594>
    >;
};

template<> struct block_fft_record<4096, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    8,    8,  512,     2, 32768,   12,   595>,
        block_fft_implementation<16,   16,   16,  256,     2, 65536,    4,   597>,
        block_fft_implementation<16,   16,   16,  256,     1, 32768,    8,   596>,
        block_fft_implementation< 4,    4,    4, 1024,     1, 65536,   10,   600>,
        block_fft_implementation< 4,    4,    4, 1024,     1, 32768,   20,   599>,
        block_fft_implementation< 8,    8,    8,  512,     1, 65536,    6,   598>
    >;
};

template<> struct block_fft_record<8192, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 8,    2,    8, 1024,     1, 65536,   16,   602>,
        block_fft_implementation<16,    2,   16,  512,     1, 65536,   12,   601>,
        block_fft_implementation<16,    2,   16,  512,     1, 131072,    6,  1505>,
        block_fft_implementation< 8,    2,    8, 1024,     1, 131072,    8,  1506>
    >;
};

template<> struct block_fft_record<16384, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<16,    4,   16, 1024,     1, 131072,   12,  1507>
    >;
};

template<> struct block_fft_record<3, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 3,    3,    3,    1,   416,     0,    0,   603>
    >;
};

template<> struct block_fft_record<9, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    9,    1,   448,     0,    0,   604>,
        block_fft_implementation< 3,    3,    3,    3,   336,    72,    4,   605>,
        block_fft_implementation< 3,    3,    3,    3,   192,   144,    2,   606>
    >;
};

template<> struct block_fft_record<27, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,    1,   256,     0,    0,   607>,
        block_fft_implementation< 9,    3,    9,    3,    21,   432,    2,   609>,
        block_fft_implementation< 9,    3,    9,    3,    21,   216,    4,   608>,
        block_fft_implementation< 3,    3,    3,    9,    96,   216,    8,   610>,
        block_fft_implementation< 3,    3,    3,    9,    48,   432,    4,   611>
    >;
};

template<> struct block_fft_record<81, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    9,    9,     7,  1296,    2,   612>,
        block_fft_implementation< 9,    9,    9,    9,     7,   648,    4,   613>,
        block_fft_implementation<27,    3,   27,    3,    21,  1296,    2,   615>,
        block_fft_implementation<27,    3,   27,    3,    21,   648,    4,   614>,
        block_fft_implementation< 3,    3,    3,   27,    26,  1296,    6,   616>,
        block_fft_implementation< 3,    3,    3,   27,    23,   648,   12,   617>
    >;
};

template<> struct block_fft_record<243, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,    9,   27,    9,     7,  3888,    2,   619>,
        block_fft_implementation<27,    9,   27,    9,     7,  1944,    4,   618>,
        block_fft_implementation< 9,    3,    9,   27,     9,  3888,    4,   620>,
        block_fft_implementation< 9,    3,    9,   27,     2,  1944,    8,   621>,
        block_fft_implementation< 3,    3,    3,   81,     9,  1944,   16,   623>,
        block_fft_implementation< 3,    3,    3,   81,     3,  3888,    8,   622>
    >;
};

template<> struct block_fft_record<729, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<27,   27,   27,   27,    14, 11664,    2,   627>,
        block_fft_implementation<27,   27,   27,   27,     2,  5832,    4,   626>,
        block_fft_implementation< 9,    9,    9,   81,     3, 11664,    4,   624>,
        block_fft_implementation< 9,    9,    9,   81,     3,  5832,    8,   625>,
        block_fft_implementation< 3,    3,    3,  243,     2,  5832,   20,   628>,
        block_fft_implementation< 3,    3,    3,  243,     2, 11664,   10,   629>
    >;
};

template<> struct block_fft_record<2187, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    3,    9,  243,     2, 34992,    6,   631>,
        block_fft_implementation< 9,    3,    9,  243,     2, 17496,   12,   630>,
        block_fft_implementation< 3,    3,    3,  729,     1, 17496,   24,   632>,
        block_fft_implementation< 3,    3,    3,  729,     1, 34992,   12,   633>
    >;
};

template<> struct block_fft_record<6561, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 9,    9,    9,  729,     1, 104976,    6,  1508>,
        block_fft_implementation< 9,    9,    9,  729,     1, 52488,   12,   634>
    >;
};

template<> struct block_fft_record<5, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,    5,    1,   480,     0,    0,   635>
    >;
};

template<> struct block_fft_record<25, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,   25,    1,   256,     0,    0,   636>,
        block_fft_implementation< 5,    5,    5,    5,    25,   400,    2,   637>,
        block_fft_implementation< 5,    5,    5,    5,    24,   200,    4,   638>
    >;
};

template<> struct block_fft_record<125, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,    5,   25,    5,     6,  2000,    2,   642>,
        block_fft_implementation<25,    5,   25,    5,     6,  1000,    4,   641>,
        block_fft_implementation< 5,    5,    5,   25,     5,  2000,    4,   639>,
        block_fft_implementation< 5,    5,    5,   25,     5,  1000,    8,   640>
    >;
};

template<> struct block_fft_record<625, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,   25,   25,     5,  5000,    4,   643>,
        block_fft_implementation<25,   25,   25,   25,     5, 10000,    2,   646>,
        block_fft_implementation< 5,    5,    5,  125,     1, 10000,    6,   645>,
        block_fft_implementation< 5,    5,    5,  125,     1,  5000,   12,   644>
    >;
};

template<> struct block_fft_record<3125, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 5,    5,    5,  625,     1, 25000,   16,   648>,
        block_fft_implementation< 5,    5,    5,  625,     1, 50000,    8,   647>
    >;
};

template<> struct block_fft_record<15625, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<25,   25,   25,  625,     1, 125000,    8,  1509>
    >;
};

template<> struct block_fft_record<7, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,    1,   256,     0,    0,   649>
    >;
};

template<> struct block_fft_record<49, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,    7,     9,   784,    2,   651>,
        block_fft_implementation< 7,    7,    7,    7,    18,   392,    4,   650>
    >;
};

template<> struct block_fft_record<343, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,   49,     5,  5488,    4,   652>,
        block_fft_implementation< 7,    7,    7,   49,     5,  2744,    8,   653>
    >;
};

template<> struct block_fft_record<2401, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 7,    7,    7,  343,     2, 38416,    6,   654>,
        block_fft_implementation< 7,    7,    7,  343,     2, 19208,   12,   655>
    >;
};

template<> struct block_fft_record<11, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,    1,   256,     0,    0,   656>
    >;
};

template<> struct block_fft_record<121, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,   11,    11,  1936,    2,   657>,
        block_fft_implementation<11,   11,   11,   11,    11,   968,    4,   658>
    >;
};

template<> struct block_fft_record<1331, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<11,   11,   11,  121,     1, 21296,    4,   660>,
        block_fft_implementation<11,   11,   11,  121,     1, 10648,    8,   659>
    >;
};

template<> struct block_fft_record<6, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,    1,   352,     0,    0,   661>
    >;
};

template<> struct block_fft_record<36, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,    6,    21,   288,    4,   663>,
        block_fft_implementation< 6,    6,    6,    6,    21,   576,    2,   662>,
        block_fft_implementation<36,   36,   36,    1,   256,     0,    0,   664>
    >;
};

template<> struct block_fft_record<216, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,   36,     7,  1728,    8,   665>,
        block_fft_implementation< 6,    6,    6,   36,     6,  3456,    4,   666>
    >;
};

template<> struct block_fft_record<1296, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation< 6,    6,    6,  216,     1, 10368,   12,   667>,
        block_fft_implementation< 6,    6,    6,  216,     1, 20736,    6,   668>
    >;
};

template<> struct block_fft_record<7776, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<36,    6,   36,  216,     1, 62208,    8,   669>,
        block_fft_implementation<36,    6,   36,  216,     1, 124416,    4,  1510>
    >;
};

template<> struct block_fft_record<10, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,    1,    32,     0,    0,   670>
    >;
};

template<> struct block_fft_record<100, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,   10,     6,  1600,    2,   671>,
        block_fft_implementation<10,   10,   10,   10,     3,   800,    4,   672>
    >;
};

template<> struct block_fft_record<1000, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10,  100,     5, 16000,    4,   673>,
        block_fft_implementation<10,   10,   10,  100,     1,  8000,    8,   674>
    >;
};

template<> struct block_fft_record<10000, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<10,   10,   10, 1000,     1, 160000,    6,  1511>,
        block_fft_implementation<10,   10,   10, 1000,     1, 80000,   12,   675>
    >;
};

template<> struct block_fft_record<12, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,    1,   448,     0,    0,   676>
    >;
};

template<> struct block_fft_record<144, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,   12,     5,  1152,    4,   677>,
        block_fft_implementation<12,   12,   12,   12,     8,  2304,    2,   678>
    >;
};

template<> struct block_fft_record<1728, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,   12,   12,  144,     2, 13824,    8,   679>,
        block_fft_implementation<12,   12,   12,  144,     2, 27648,    4,   680>
    >;
};

template<> struct block_fft_record<13, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,   13,    1,    32,     0,    0,   681>
    >;
};

template<> struct block_fft_record<169, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,   13,   13,     9,  2704,    2,   683>,
        block_fft_implementation<13,   13,   13,   13,     9,  1352,    4,   682>
    >;
};

template<> struct block_fft_record<2197, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<13,   13,   13,  169,     3, 17576,    8,   684>,
        block_fft_implementation<13,   13,   13,  169,     3, 35152,    4,   685>
    >;
};

template<> struct block_fft_record<14, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,   14,    1,    32,     0,    0,   686>
    >;
};

template<> struct block_fft_record<196, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,   14,   14,     9,  1568,    4,   687>,
        block_fft_implementation<14,   14,   14,   14,     2,  3136,    2,   688>
    >;
};

template<> struct block_fft_record<2744, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<14,   14,   14,  196,     3, 43904,    4,   689>,
        block_fft_implementation<14,   14,   14,  196,     3, 21952,    8,   690>
    >;
};

template<> struct block_fft_record<15, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,   15,    1,   320,     0,    0,   691>
    >;
};

template<> struct block_fft_record<225, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,   15,   15,     2,  3600,    2,   693>,
        block_fft_implementation<15,   15,   15,   15,     2,  1800,    4,   692>
    >;
};

template<> struct block_fft_record<3375, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<15,   15,   15,  225,     1, 27000,    8,   694>,
        block_fft_implementation<15,   15,   15,  225,     1, 54000,    4,   695>
    >;
};

template<> struct block_fft_record<17, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,   17,    1,   384,     0,    0,   696>
    >;
};

template<> struct block_fft_record<289, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,   17,   17,    15,  2312,    4,   697>,
        block_fft_implementation<17,   17,   17,   17,     7,  4624,    2,   698>
    >;
};

template<> struct block_fft_record<4913, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<17,   17,   17,  289,     1, 39304,    8,   699>,
        block_fft_implementation<17,   17,   17,  289,     1, 78608,    4,   700>
    >;
};

template<> struct block_fft_record<18, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,   18,    1,   512,     0,    0,   701>
    >;
};

template<> struct block_fft_record<324, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,   18,   18,     7,  5184,    2,   703>,
        block_fft_implementation<18,   18,   18,   18,     7,  2592,    4,   702>
    >;
};

template<> struct block_fft_record<5832, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<18,   18,   18,  324,     1, 46656,    8,   704>,
        block_fft_implementation<18,   18,   18,  324,     1, 93312,    4,   705>
    >;
};

template<> struct block_fft_record<19, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,   19,    1,   384,     0,    0,   706>
    >;
};

template<> struct block_fft_record<361, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,   19,   19,     3,  5776,    2,   708>,
        block_fft_implementation<19,   19,   19,   19,     3,  2888,    4,   707>
    >;
};

template<> struct block_fft_record<6859, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<19,   19,   19,  361,     1, 54872,    8,   709>,
        block_fft_implementation<19,   19,   19,  361,     1, 109744,    4,  1512>
    >;
};

template<> struct block_fft_record<20, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,   20,    1,    32,     0,    0,   710>
    >;
};

template<> struct block_fft_record<400, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,   20,   20,     3,  3200,    4,   711>,
        block_fft_implementation<20,   20,   20,   20,     3,  6400,    2,   712>
    >;
};

template<> struct block_fft_record<8000, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   20,   20,  400,     1, 64000,    8,   713>,
        block_fft_implementation<20,   20,   20,  400,     1, 128000,    4,  1513>
    >;
};

template<> struct block_fft_record<21, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,   21,    1,   384,     0,    0,   714>
    >;
};

template<> struct block_fft_record<441, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,   21,   21,     3,  7056,    2,   716>,
        block_fft_implementation<21,   21,   21,   21,     3,  3528,    4,   715>
    >;
};

template<> struct block_fft_record<9261, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<21,   21,   21,  441,     1, 148176,    4,  1514>,
        block_fft_implementation<21,   21,   21,  441,     1, 74088,    8,   717>
    >;
};

template<> struct block_fft_record<22, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,   22,    1,   256,     0,    0,   718>
    >;
};

template<> struct block_fft_record<484, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,   22,   22,    17,  3872,    4,   719>,
        block_fft_implementation<22,   22,   22,   22,     5,  7744,    2,   720>
    >;
};

template<> struct block_fft_record<10648, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,   22,   22,  484,     1, 85184,    8,   721>
    >;
};

template<> struct block_fft_record<23, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,   23,    1,   256,     0,    0,   722>
    >;
};

template<> struct block_fft_record<529, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,   23,   23,    11,  8464,    2,   723>,
        block_fft_implementation<23,   23,   23,   23,    11,  4232,    4,   724>
    >;
};

template<> struct block_fft_record<12167, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<23,   23,   23,  529,     1, 97336,    8,   725>
    >;
};

template<> struct block_fft_record<24, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,   24,    1,   384,     0,    0,   726>
    >;
};

template<> struct block_fft_record<576, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,   24,   24,     5,  4608,    4,   727>,
        block_fft_implementation<24,   24,   24,   24,     4,  9216,    2,   728>
    >;
};

template<> struct block_fft_record<13824, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   24,   24,  576,     1, 110592,    8,  1515>
    >;
};

template<> struct block_fft_record<26, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,   26,    1,   256,     0,    0,   729>
    >;
};

template<> struct block_fft_record<676, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,   26,   26,   26,     1,  5408,    4,   730>,
        block_fft_implementation<26,   26,   26,   26,     2, 10816,    2,   731>
    >;
};

template<> struct block_fft_record<28, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,   28,    1,   256,     0,    0,   732>
    >;
};

template<> struct block_fft_record<784, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   28,   28,   28,     1,  6272,    4,   733>,
        block_fft_implementation<28,   28,   28,   28,     1, 12544,    2,   734>
    >;
};

template<> struct block_fft_record<29, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,   29,    1,   256,     0,    0,   735>
    >;
};

template<> struct block_fft_record<841, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<29,   29,   29,   29,     8, 13456,    2,   737>,
        block_fft_implementation<29,   29,   29,   29,     8,  6728,    4,   736>
    >;
};

template<> struct block_fft_record<30, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,   30,    1,   384,     0,    0,   738>
    >;
};

template<> struct block_fft_record<900, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   30,   30,   30,     2,  7200,    4,   739>,
        block_fft_implementation<30,   30,   30,   30,     2, 14400,    2,   740>
    >;
};

template<> struct block_fft_record<31, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,   31,    1,   256,     0,    0,   741>
    >;
};

template<> struct block_fft_record<961, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<31,   31,   31,   31,     8, 15376,    2,   743>,
        block_fft_implementation<31,   31,   31,   31,     8,  7688,    4,   742>
    >;
};

template<> struct block_fft_record<44, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<22,    2,   22,    2,    16,   352,    4,   744>,
        block_fft_implementation<22,    2,   22,    2,    16,   704,    2,   745>
    >;
};

template<> struct block_fft_record<48, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,    4,   12,    4,    32,   768,    2,   747>,
        block_fft_implementation<12,    4,   12,    4,    15,   384,    4,   746>,
        block_fft_implementation< 6,    2,    6,    8,    64,   768,    6,   748>,
        block_fft_implementation<24,    2,   24,    2,    32,   384,    4,   749>,
        block_fft_implementation<24,    2,   24,    2,    32,   768,    2,   750>,
        block_fft_implementation< 6,    2,    6,    8,    32,   384,   12,   751>
    >;
};

template<> struct block_fft_record<52, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,    2,   26,    2,    16,   416,    4,   752>,
        block_fft_implementation<26,    2,   26,    2,    16,   832,    2,   753>
    >;
};

template<> struct block_fft_record<56, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,    2,   28,    2,    32,   448,    4,   754>,
        block_fft_implementation<14,    2,   14,    4,    16,   448,    8,   755>,
        block_fft_implementation<28,    2,   28,    2,    29,   896,    2,   757>,
        block_fft_implementation<14,    2,   14,    4,    16,   896,    4,   756>
    >;
};

template<> struct block_fft_record<60, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,    2,   30,    2,    16,   480,    4,   758>,
        block_fft_implementation<30,    2,   30,    2,    16,   960,    2,   759>
    >;
};

template<> struct block_fft_record<68, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<34,    2,   34,    2,    16,   544,    4,   760>,
        block_fft_implementation<34,    2,   34,    2,    16,  1088,    2,   761>
    >;
};

template<> struct block_fft_record<72, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,    6,   12,    6,    10,   576,    4,   762>,
        block_fft_implementation<12,    6,   12,    6,    21,  1152,    2,   763>,
        block_fft_implementation<36,    2,   36,    2,    32,   576,    4,   765>,
        block_fft_implementation< 6,    2,    6,   12,    16,  1152,    4,   768>,
        block_fft_implementation<24,    3,   24,    3,    20,   576,    4,   764>,
        block_fft_implementation<18,    2,   18,    4,    16,   576,    8,   766>,
        block_fft_implementation< 6,    2,    6,   12,    21,   576,    8,   767>,
        block_fft_implementation<36,    2,   36,    2,    32,  1152,    2,   771>,
        block_fft_implementation<18,    2,   18,    4,    16,  1152,    4,   769>,
        block_fft_implementation<24,    3,   24,    3,    21,  1152,    2,   770>
    >;
};

template<> struct block_fft_record<76, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<38,    2,   38,    2,    16,   608,    4,   772>,
        block_fft_implementation<38,    2,   38,    2,    16,  1216,    2,   773>
    >;
};

template<> struct block_fft_record<80, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,    4,   20,    4,    16,   640,    4,   774>,
        block_fft_implementation<20,    4,   20,    4,    16,  1280,    2,   775>,
        block_fft_implementation<10,    2,   10,    8,     8,  1280,    6,   776>,
        block_fft_implementation<40,    2,   40,    2,    31,   640,    4,   777>,
        block_fft_implementation<40,    2,   40,    2,    16,  1280,    2,   779>,
        block_fft_implementation<10,    2,   10,    8,    16,   640,   12,   778>
    >;
};

template<> struct block_fft_record<84, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,    2,   42,    2,    16,   672,    4,   780>,
        block_fft_implementation<42,    2,   42,    2,    16,  1344,    2,   781>
    >;
};

template<> struct block_fft_record<88, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<44,    2,   44,    2,    32,   704,    4,   783>,
        block_fft_implementation<22,    2,   22,    4,    16,   704,    8,   782>,
        block_fft_implementation<44,    2,   44,    2,    31,  1408,    2,   785>,
        block_fft_implementation<22,    2,   22,    4,    16,  1408,    4,   784>
    >;
};

template<> struct block_fft_record<92, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<46,    2,   46,    2,    16,  1472,    2,   787>,
        block_fft_implementation<46,    2,   46,    2,    16,   736,    4,   786>
    >;
};

template<> struct block_fft_record<96, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<12,    2,   12,    8,    16,  1536,    4,   790>,
        block_fft_implementation<24,    4,   24,    4,    16,   768,    4,   788>,
        block_fft_implementation<12,    2,   12,    8,     8,   768,    8,   789>,
        block_fft_implementation<24,    4,   24,    4,    16,  1536,    2,   791>,
        block_fft_implementation< 6,    2,    6,   16,    16,  1536,    8,   793>,
        block_fft_implementation< 6,    2,    6,   16,    12,   768,   16,   792>,
        block_fft_implementation<48,    2,   48,    2,    29,  1536,    2,   795>,
        block_fft_implementation<48,    2,   48,    2,    32,   768,    4,   794>
    >;
};

template<> struct block_fft_record<104, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,    2,   26,    4,     8,   832,    8,   796>,
        block_fft_implementation<52,    2,   52,    2,    32,   832,    4,   797>,
        block_fft_implementation<26,    2,   26,    4,     8,  1664,    4,   798>,
        block_fft_implementation<52,    2,   52,    2,    28,  1664,    2,   799>
    >;
};

template<> struct block_fft_record<108, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<54,    2,   54,    2,    16,   864,    4,   805>,
        block_fft_implementation<18,    6,   18,    6,     5,   864,    4,   800>,
        block_fft_implementation<18,    6,   18,    6,     5,  1728,    2,   801>,
        block_fft_implementation<54,    2,   54,    2,    16,  1728,    2,   809>,
        block_fft_implementation<36,    3,   36,    3,    21,   864,    4,   803>,
        block_fft_implementation<36,    3,   36,    3,    10,  1728,    2,   808>,
        block_fft_implementation< 6,    3,    6,   18,    14,  1728,    4,   804>,
        block_fft_implementation< 6,    3,    6,   18,     7,   864,    8,   802>,
        block_fft_implementation<12,    3,   12,    9,    12,   864,    8,   806>,
        block_fft_implementation<12,    3,   12,    9,    14,  1728,    4,   807>
    >;
};

template<> struct block_fft_record<112, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,    4,   28,    4,    16,   896,    4,   810>,
        block_fft_implementation<28,    4,   28,    4,    15,  1792,    2,   812>,
        block_fft_implementation<14,    2,   14,    8,     8,  1792,    6,   811>,
        block_fft_implementation<14,    2,   14,    8,     8,   896,   12,   813>,
        block_fft_implementation<56,    2,   56,    2,    32,   896,    4,   814>,
        block_fft_implementation<56,    2,   56,    2,    32,  1792,    2,   815>
    >;
};

template<> struct block_fft_record<116, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<58,    2,   58,    2,    32,   928,    4,   816>,
        block_fft_implementation<58,    2,   58,    2,    28,  1856,    2,   817>
    >;
};

template<> struct block_fft_record<120, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,    2,   30,    4,     8,   960,    8,   818>,
        block_fft_implementation<60,    2,   60,    2,    32,   960,    4,   819>,
        block_fft_implementation<30,    2,   30,    4,    16,  1920,    4,   820>,
        block_fft_implementation<60,    2,   60,    2,    14,  1920,    2,   821>
    >;
};

template<> struct block_fft_record<124, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<62,    2,   62,    2,    32,   992,    4,   822>,
        block_fft_implementation<62,    2,   62,    2,    28,  1984,    2,   823>
    >;
};

template<> struct block_fft_record<136, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<34,    2,   34,    4,     8,  1088,    8,   824>,
        block_fft_implementation<34,    2,   34,    4,     8,  2176,    4,   825>
    >;
};

template<> struct block_fft_record<152, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<38,    2,   38,    4,     8,  1216,    8,   826>,
        block_fft_implementation<38,    2,   38,    4,    16,  2432,    4,   827>
    >;
};

template<> struct block_fft_record<160, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,    2,   20,    8,     8,  2560,    4,   830>,
        block_fft_implementation<40,    4,   40,    4,    14,  1280,    4,   829>,
        block_fft_implementation<20,    2,   20,    8,     8,  1280,    8,   828>,
        block_fft_implementation<40,    4,   40,    4,    15,  2560,    2,   833>,
        block_fft_implementation<10,    2,   10,   16,     4,  2560,    8,   831>,
        block_fft_implementation<10,    2,   10,   16,     4,  1280,   16,   832>
    >;
};

template<> struct block_fft_record<168, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,    2,   42,    4,     8,  1344,    8,   834>,
        block_fft_implementation<42,    2,   42,    4,     8,  2688,    4,   835>
    >;
};

template<> struct block_fft_record<176, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<44,    4,   44,    4,    16,  1408,    4,   836>,
        block_fft_implementation<44,    4,   44,    4,     8,  2816,    2,   839>,
        block_fft_implementation<22,    2,   22,    8,     4,  2816,    6,   837>,
        block_fft_implementation<22,    2,   22,    8,     8,  1408,   12,   838>
    >;
};

template<> struct block_fft_record<180, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,    6,   30,    6,    10,  1440,    4,   840>,
        block_fft_implementation<30,    6,   30,    6,     5,  2880,    2,   841>,
        block_fft_implementation<60,    3,   60,    3,    21,  1440,    4,   842>,
        block_fft_implementation<60,    3,   60,    3,    64,  2880,    2,   843>
    >;
};

template<> struct block_fft_record<184, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<46,    2,   46,    4,     8,  2944,    4,   845>,
        block_fft_implementation<46,    2,   46,    4,     8,  1472,    8,   844>
    >;
};

template<> struct block_fft_record<192, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,    8,   24,    8,     8,  1536,    4,   847>,
        block_fft_implementation<12,    4,   12,   16,     4,  1536,    8,   846>,
        block_fft_implementation<12,    4,   12,   16,     4,  3072,    4,   848>,
        block_fft_implementation<24,    8,   24,    8,     8,  3072,    2,   849>,
        block_fft_implementation<48,    4,   48,    4,    15,  3072,    2,   853>,
        block_fft_implementation<48,    4,   48,    4,    15,  1536,    4,   850>,
        block_fft_implementation< 6,    2,    6,   32,     4,  3072,   10,   852>,
        block_fft_implementation< 6,    2,    6,   32,     8,  1536,   20,   851>
    >;
};

template<> struct block_fft_record<200, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,   10,   20,   10,     6,  1600,    4,   854>,
        block_fft_implementation<20,   10,   20,   10,     6,  3200,    2,   855>,
        block_fft_implementation<10,    2,   10,   20,     3,  3200,    4,   858>,
        block_fft_implementation<10,    2,   10,   20,     3,  1600,    8,   856>,
        block_fft_implementation<40,    5,   40,    5,    12,  1600,    4,   857>,
        block_fft_implementation<50,    2,   50,    4,     8,  1600,    8,   859>,
        block_fft_implementation<50,    2,   50,    4,     8,  3200,    4,   861>,
        block_fft_implementation<40,    5,   40,    5,     6,  3200,    2,   860>
    >;
};

template<> struct block_fft_record<208, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<52,    4,   52,    4,     8,  1664,    4,   862>,
        block_fft_implementation<52,    4,   52,    4,    14,  3328,    2,   865>,
        block_fft_implementation<26,    2,   26,    8,     4,  3328,    6,   863>,
        block_fft_implementation<26,    2,   26,    8,     8,  1664,   12,   864>
    >;
};

template<> struct block_fft_record<224, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,    2,   28,    8,     8,  1792,    8,   866>,
        block_fft_implementation<28,    2,   28,    8,     4,  3584,    4,   870>,
        block_fft_implementation<14,    2,   14,   16,     4,  3584,    8,   869>,
        block_fft_implementation<56,    4,   56,    4,     8,  1792,    4,   868>,
        block_fft_implementation<14,    2,   14,   16,     4,  1792,   16,   867>,
        block_fft_implementation<56,    4,   56,    4,    16,  3584,    2,   871>
    >;
};

template<> struct block_fft_record<232, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<58,    2,   58,    4,    32,  1856,    8,   872>,
        block_fft_implementation<58,    2,   58,    4,    30,  3712,    4,   873>
    >;
};

template<> struct block_fft_record<240, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<60,    4,   60,    4,    16,  1920,    4,   874>,
        block_fft_implementation<60,    4,   60,    4,     7,  3840,    2,   877>,
        block_fft_implementation<30,    2,   30,    8,     4,  3840,    6,   876>,
        block_fft_implementation<30,    2,   30,    8,     8,  1920,   12,   875>
    >;
};

template<> struct block_fft_record<248, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<62,    2,   62,    4,    32,  1984,    8,   878>,
        block_fft_implementation<62,    2,   62,    4,    14,  3968,    4,   879>
    >;
};

template<> struct block_fft_record<252, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,    6,   42,    6,     5,  2016,    4,   880>,
        block_fft_implementation<42,    6,   42,    6,     5,  4032,    2,   881>
    >;
};

template<> struct block_fft_record<272, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<34,    2,   34,    8,     4,  4352,    6,   883>,
        block_fft_implementation<34,    2,   34,    8,     4,  2176,   12,   882>
    >;
};

template<> struct block_fft_record<288, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,   12,   24,   12,     5,  2304,    4,   884>,
        block_fft_implementation<12,    2,   12,   24,     4,  2304,    8,   885>,
        block_fft_implementation<12,    2,   12,   24,     5,  4608,    4,   887>,
        block_fft_implementation<36,    2,   36,    8,     8,  4608,    4,   894>,
        block_fft_implementation<36,    2,   36,    8,     4,  2304,    8,   886>,
        block_fft_implementation<24,   12,   24,   12,     5,  4608,    2,   891>,
        block_fft_implementation<18,    2,   18,   16,     4,  4608,    8,   890>,
        block_fft_implementation<18,    2,   18,   16,     4,  2304,   16,   888>,
        block_fft_implementation<48,    6,   48,    6,     5,  4608,    2,   895>,
        block_fft_implementation< 6,    2,    6,   48,     4,  2304,   16,   889>,
        block_fft_implementation< 6,    2,    6,   48,     2,  4608,    8,   893>,
        block_fft_implementation<48,    6,   48,    6,    21,  2304,    4,   892>
    >;
};

template<> struct block_fft_record<300, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,   10,   30,   10,     3,  2400,    4,   896>,
        block_fft_implementation<30,   10,   30,   10,     3,  4800,    2,   898>,
        block_fft_implementation<60,    5,   60,    5,    25,  2400,    4,   897>,
        block_fft_implementation<60,    5,   60,    5,    48,  4800,    2,   899>
    >;
};

template<> struct block_fft_record<304, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<38,    2,   38,    8,     4,  4864,    6,   901>,
        block_fft_implementation<38,    2,   38,    8,     8,  2432,   12,   900>
    >;
};

template<> struct block_fft_record<320, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<20,    4,   20,   16,     4,  2560,    8,   902>,
        block_fft_implementation<40,    8,   40,    8,     8,  2560,    4,   903>,
        block_fft_implementation<20,    4,   20,   16,     4,  5120,    4,   904>,
        block_fft_implementation<40,    8,   40,    8,     8,  5120,    2,   907>,
        block_fft_implementation<10,    2,   10,   32,     2,  5120,   10,   905>,
        block_fft_implementation<10,    2,   10,   32,     4,  2560,   20,   906>
    >;
};

template<> struct block_fft_record<336, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,    2,   42,    8,     4,  5376,    6,   909>,
        block_fft_implementation<42,    2,   42,    8,     4,  2688,   12,   908>
    >;
};

template<> struct block_fft_record<352, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<44,    2,   44,    8,     4,  5632,    4,   913>,
        block_fft_implementation<44,    2,   44,    8,     4,  2816,    8,   910>,
        block_fft_implementation<22,    2,   22,   16,     4,  2816,   16,   912>,
        block_fft_implementation<22,    2,   22,   16,     4,  5632,    8,   911>
    >;
};

template<> struct block_fft_record<360, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,    2,   30,   12,     5,  5760,    4,   916>,
        block_fft_implementation<60,    6,   60,    6,    10,  2880,    4,   915>,
        block_fft_implementation<30,    2,   30,   12,     5,  2880,    8,   914>,
        block_fft_implementation<60,    6,   60,    6,    20,  5760,    2,   917>
    >;
};

template<> struct block_fft_record<368, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<46,    2,   46,    8,     8,  5888,    6,   919>,
        block_fft_implementation<46,    2,   46,    8,     8,  2944,   12,   918>
    >;
};

template<> struct block_fft_record<384, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<24,    2,   24,   16,     4,  3072,    8,   921>,
        block_fft_implementation<12,    2,   12,   32,     2,  3072,   12,   920>,
        block_fft_implementation<48,    8,   48,    8,     4,  6144,    2,   927>,
        block_fft_implementation<12,    2,   12,   32,     2,  6144,    6,   922>,
        block_fft_implementation<48,    8,   48,    8,    16,  3072,    4,   923>,
        block_fft_implementation<24,    2,   24,   16,     4,  6144,    4,   924>,
        block_fft_implementation< 6,    2,    6,   64,     2,  6144,   12,   926>,
        block_fft_implementation< 6,    2,    6,   64,     4,  3072,   24,   925>
    >;
};

template<> struct block_fft_record<392, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,   14,   28,   14,     9,  3136,    4,   928>,
        block_fft_implementation<14,    2,   14,   28,     1,  3136,    8,   929>,
        block_fft_implementation<14,    2,   14,   28,     2,  6272,    4,   930>,
        block_fft_implementation<28,   14,   28,   14,     2,  6272,    2,   931>,
        block_fft_implementation<56,    7,   56,    7,     9,  3136,    4,   932>,
        block_fft_implementation<56,    7,   56,    7,     8,  6272,    2,   933>
    >;
};

template<> struct block_fft_record<416, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<26,    2,   26,   16,     2,  6656,    8,   936>,
        block_fft_implementation<26,    2,   26,   16,     2,  3328,   16,   935>,
        block_fft_implementation<52,    2,   52,    8,     4,  6656,    4,   937>,
        block_fft_implementation<52,    2,   52,    8,     8,  3328,    8,   934>
    >;
};

template<> struct block_fft_record<432, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<36,   12,   36,   12,     5,  3456,    4,   938>,
        block_fft_implementation<12,    3,   12,   36,     3,  3456,    8,   939>,
        block_fft_implementation<36,   12,   36,   12,     5,  6912,    2,   947>,
        block_fft_implementation<12,    3,   12,   36,     3,  6912,    4,   942>,
        block_fft_implementation< 6,    2,    6,   72,     3,  3456,   12,   940>,
        block_fft_implementation< 6,    2,    6,   72,     3,  6912,    6,   945>,
        block_fft_implementation<18,    2,   18,   24,     4,  6912,    6,   944>,
        block_fft_implementation<18,    2,   18,   24,     5,  3456,   12,   943>,
        block_fft_implementation<24,    3,   24,   18,     7,  3456,    8,   941>,
        block_fft_implementation<54,    2,   54,    8,     4,  6912,    6,   950>,
        block_fft_implementation<24,    3,   24,   18,     7,  6912,    4,   946>,
        block_fft_implementation<54,    2,   54,    8,     8,  3456,   12,   948>,
        block_fft_implementation<48,    3,   48,    9,     7,  6912,    4,   951>,
        block_fft_implementation<48,    3,   48,    9,     7,  3456,    8,   949>
    >;
};

template<> struct block_fft_record<448, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<28,    4,   28,   16,     4,  3584,    8,   952>,
        block_fft_implementation<28,    4,   28,   16,     4,  7168,    4,   954>,
        block_fft_implementation<56,    8,   56,    8,     4,  3584,    4,   953>,
        block_fft_implementation<56,    8,   56,    8,     8,  7168,    2,   957>,
        block_fft_implementation<14,    2,   14,   32,     2,  7168,   10,   955>,
        block_fft_implementation<14,    2,   14,   32,     2,  3584,   20,   956>
    >;
};

template<> struct block_fft_record<464, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<58,    2,   58,    8,    15,  7424,    6,   959>,
        block_fft_implementation<58,    2,   58,    8,    16,  3712,   12,   958>
    >;
};

template<> struct block_fft_record<480, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<30,    2,   30,   16,     2,  3840,   16,   960>,
        block_fft_implementation<30,    2,   30,   16,     2,  7680,    8,   962>,
        block_fft_implementation<60,    2,   60,    8,     8,  3840,    8,   961>,
        block_fft_implementation<60,    2,   60,    8,     4,  7680,    4,   963>
    >;
};

template<> struct block_fft_record<496, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<62,    2,   62,    8,    16,  3968,   12,   964>,
        block_fft_implementation<62,    2,   62,    8,     4,  7936,    6,   965>
    >;
};

template<> struct block_fft_record<500, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<50,   10,   50,   10,     3,  4000,    4,   967>,
        block_fft_implementation<50,   10,   50,   10,     3,  8000,    2,   971>,
        block_fft_implementation<10,    5,   10,   50,     5,  8000,    4,   969>,
        block_fft_implementation<10,    5,   10,   50,     5,  4000,    8,   966>,
        block_fft_implementation<20,    5,   20,   25,     5,  4000,    8,   968>,
        block_fft_implementation<20,    5,   20,   25,     5,  8000,    4,   970>
    >;
};

template<> struct block_fft_record<504, double, fft_type::c2c, fft_direction::forward, 1000> {
    static constexpr bool defined = true;
    using blobs = type_list<
        block_fft_implementation<42,    2,   42,   12,     5,  8064,    4,   973>,
        block_fft_implementation<42,    2,   42,   12,     5,  4032,    8,   972>
    >;
};
