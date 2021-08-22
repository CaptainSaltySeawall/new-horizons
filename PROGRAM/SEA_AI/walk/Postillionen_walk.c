int Postillionen_walk_count;
float Postillionen_walk_verts[198];
int Postillionen_walk_types[66];
int Postillionen_walk_graph[85];

void Postillionen_walk_init()
{
        Postillionen_walk_count = 66;

        Postillionen_walk_verts[0] = -0.112408;
        Postillionen_walk_verts[1] = 4.842431;
        Postillionen_walk_verts[2] = -20.050966;
        Postillionen_walk_verts[3] = 2.097752;
        Postillionen_walk_verts[4] = 4.587426;
        Postillionen_walk_verts[5] = -16.585629;
        Postillionen_walk_verts[6] = -2.024705;
        Postillionen_walk_verts[7] = 4.632427;
        Postillionen_walk_verts[8] = -17.094265;
        Postillionen_walk_verts[9] = -3.752429;
        Postillionen_walk_verts[10] = 4.399922;
        Postillionen_walk_verts[11] = -17.114336;
        Postillionen_walk_verts[12] = 3.731727;
        Postillionen_walk_verts[13] = 4.474923;
        Postillionen_walk_verts[14] = -17.209833;
        Postillionen_walk_verts[15] = -0.093654;
        Postillionen_walk_verts[16] = 4.452427;
        Postillionen_walk_verts[17] = -12.967608;
        Postillionen_walk_verts[18] = 2.96572;
        Postillionen_walk_verts[19] = 4.357422;
        Postillionen_walk_verts[20] = -12.290832;
        Postillionen_walk_verts[21] = -3.220259;
        Postillionen_walk_verts[22] = 4.327424;
        Postillionen_walk_verts[23] = -11.012908;
        Postillionen_walk_verts[24] = -3.25371;
        Postillionen_walk_verts[25] = 4.202416;
        Postillionen_walk_verts[26] = -9.974401;
        Postillionen_walk_verts[27] = 3.249138;
        Postillionen_walk_verts[28] = 4.247419;
        Postillionen_walk_verts[29] = -9.842514;
        Postillionen_walk_verts[30] = 0.688772;
        Postillionen_walk_verts[31] = 13.487164;
        Postillionen_walk_verts[32] = -16.222979;
        Postillionen_walk_verts[33] = -0.781992;
        Postillionen_walk_verts[34] = 13.409655;
        Postillionen_walk_verts[35] = -16.137627;
        Postillionen_walk_verts[36] = 3.283376;
        Postillionen_walk_verts[37] = 2.209917;
        Postillionen_walk_verts[38] = -8.73741;
        Postillionen_walk_verts[39] = -3.434214;
        Postillionen_walk_verts[40] = 2.182423;
        Postillionen_walk_verts[41] = -8.742611;
        Postillionen_walk_verts[42] = 1.168947;
        Postillionen_walk_verts[43] = 2.194898;
        Postillionen_walk_verts[44] = -7.79775;
        Postillionen_walk_verts[45] = -1.225407;
        Postillionen_walk_verts[46] = 2.164903;
        Postillionen_walk_verts[47] = -7.750195;
        Postillionen_walk_verts[48] = 1.189338;
        Postillionen_walk_verts[49] = 2.217393;
        Postillionen_walk_verts[50] = -10.497538;
        Postillionen_walk_verts[51] = -1.421773;
        Postillionen_walk_verts[52] = 2.254915;
        Postillionen_walk_verts[53] = -10.390084;
        Postillionen_walk_verts[54] = 1.645936;
        Postillionen_walk_verts[55] = 2.149905;
        Postillionen_walk_verts[56] = -4.359557;
        Postillionen_walk_verts[57] = -1.538747;
        Postillionen_walk_verts[58] = 2.134921;
        Postillionen_walk_verts[59] = -4.446961;
        Postillionen_walk_verts[60] = -1.503843;
        Postillionen_walk_verts[61] = 2.117387;
        Postillionen_walk_verts[62] = -1.208177;
        Postillionen_walk_verts[63] = 1.630715;
        Postillionen_walk_verts[64] = 2.144888;
        Postillionen_walk_verts[65] = -1.139099;
        Postillionen_walk_verts[66] = 1.509213;
        Postillionen_walk_verts[67] = 2.102407;
        Postillionen_walk_verts[68] = 1.867163;
        Postillionen_walk_verts[69] = -1.30396;
        Postillionen_walk_verts[70] = 2.107418;
        Postillionen_walk_verts[71] = 1.965697;
        Postillionen_walk_verts[72] = -1.302034;
        Postillionen_walk_verts[73] = 2.117422;
        Postillionen_walk_verts[74] = 4.854424;
        Postillionen_walk_verts[75] = 1.439192;
        Postillionen_walk_verts[76] = 2.204919;
        Postillionen_walk_verts[77] = 4.677648;
        Postillionen_walk_verts[78] = 1.263922;
        Postillionen_walk_verts[79] = 2.239919;
        Postillionen_walk_verts[80] = 7.722134;
        Postillionen_walk_verts[81] = -1.259709;
        Postillionen_walk_verts[82] = 2.289913;
        Postillionen_walk_verts[83] = 7.875471;
        Postillionen_walk_verts[84] = 0.005606;
        Postillionen_walk_verts[85] = 2.369885;
        Postillionen_walk_verts[86] = 10.171986;
        Postillionen_walk_verts[87] = 5.02262;
        Postillionen_walk_verts[88] = 2.74742;
        Postillionen_walk_verts[89] = -6.197537;
        Postillionen_walk_verts[90] = 4.891414;
        Postillionen_walk_verts[91] = 2.804919;
        Postillionen_walk_verts[92] = -8.872965;
        Postillionen_walk_verts[93] = -4.702559;
        Postillionen_walk_verts[94] = 2.709918;
        Postillionen_walk_verts[95] = -8.65308;
        Postillionen_walk_verts[96] = -4.950666;
        Postillionen_walk_verts[97] = 2.592421;
        Postillionen_walk_verts[98] = -5.713624;
        Postillionen_walk_verts[99] = -1.041776;
        Postillionen_walk_verts[100] = 14.759746;
        Postillionen_walk_verts[101] = -5.355776;
        Postillionen_walk_verts[102] = 1.044549;
        Postillionen_walk_verts[103] = 14.747241;
        Postillionen_walk_verts[104] = -5.439784;
        Postillionen_walk_verts[105] = 2.144052;
        Postillionen_walk_verts[106] = 2.262425;
        Postillionen_walk_verts[107] = -12.693929;
        Postillionen_walk_verts[108] = -2.066451;
        Postillionen_walk_verts[109] = 2.229926;
        Postillionen_walk_verts[110] = -12.828522;
        Postillionen_walk_verts[111] = -0.170787;
        Postillionen_walk_verts[112] = 2.317426;
        Postillionen_walk_verts[113] = -14.407358;
        Postillionen_walk_verts[114] = -0.984957;
        Postillionen_walk_verts[115] = 2.469924;
        Postillionen_walk_verts[116] = -16.907124;
        Postillionen_walk_verts[117] = 0.711767;
        Postillionen_walk_verts[118] = 2.419926;
        Postillionen_walk_verts[119] = -16.912167;
        Postillionen_walk_verts[120] = 4.452011;
        Postillionen_walk_verts[121] = 2.904932;
        Postillionen_walk_verts[122] = 7.8052;
        Postillionen_walk_verts[123] = 4.152144;
        Postillionen_walk_verts[124] = 3.092456;
        Postillionen_walk_verts[125] = 9.780769;
        Postillionen_walk_verts[126] = -4.581513;
        Postillionen_walk_verts[127] = 2.922418;
        Postillionen_walk_verts[128] = 7.629065;
        Postillionen_walk_verts[129] = -4.152939;
        Postillionen_walk_verts[130] = 3.037418;
        Postillionen_walk_verts[131] = 9.810079;
        Postillionen_walk_verts[132] = 0.867142;
        Postillionen_walk_verts[133] = 14.085065;
        Postillionen_walk_verts[134] = 10.642326;
        Postillionen_walk_verts[135] = -0.887696;
        Postillionen_walk_verts[136] = 14.012615;
        Postillionen_walk_verts[137] = 10.544047;
        Postillionen_walk_verts[138] = -0.498625;
        Postillionen_walk_verts[139] = 2.662526;
        Postillionen_walk_verts[140] = 10.457057;
        Postillionen_walk_verts[141] = 0.710917;
        Postillionen_walk_verts[142] = 2.537525;
        Postillionen_walk_verts[143] = 10.555202;
        Postillionen_walk_verts[144] = 1.635486;
        Postillionen_walk_verts[145] = 2.347522;
        Postillionen_walk_verts[146] = 7.736832;
        Postillionen_walk_verts[147] = -1.542581;
        Postillionen_walk_verts[148] = 2.340024;
        Postillionen_walk_verts[149] = 7.871976;
        Postillionen_walk_verts[150] = 1.911844;
        Postillionen_walk_verts[151] = 2.257522;
        Postillionen_walk_verts[152] = 4.729623;
        Postillionen_walk_verts[153] = -1.746154;
        Postillionen_walk_verts[154] = 2.195022;
        Postillionen_walk_verts[155] = 4.877937;
        Postillionen_walk_verts[156] = 2.00282;
        Postillionen_walk_verts[157] = 2.187526;
        Postillionen_walk_verts[158] = 1.96808;
        Postillionen_walk_verts[159] = -1.866855;
        Postillionen_walk_verts[160] = 2.034997;
        Postillionen_walk_verts[161] = 2.022157;
        Postillionen_walk_verts[162] = 2.235361;
        Postillionen_walk_verts[163] = 2.159998;
        Postillionen_walk_verts[164] = -1.140223;
        Postillionen_walk_verts[165] = -2.014549;
        Postillionen_walk_verts[166] = 2.084996;
        Postillionen_walk_verts[167] = -1.175197;
        Postillionen_walk_verts[168] = 2.199686;
        Postillionen_walk_verts[169] = 2.139937;
        Postillionen_walk_verts[170] = -4.295848;
        Postillionen_walk_verts[171] = -2.060657;
        Postillionen_walk_verts[172] = 2.182424;
        Postillionen_walk_verts[173] = -4.47496;
        Postillionen_walk_verts[174] = 1.899899;
        Postillionen_walk_verts[175] = 2.12743;
        Postillionen_walk_verts[176] = -7.74697;
        Postillionen_walk_verts[177] = -1.776024;
        Postillionen_walk_verts[178] = 2.139929;
        Postillionen_walk_verts[179] = -7.649297;
        Postillionen_walk_verts[180] = -1.794078;
        Postillionen_walk_verts[181] = 2.239931;
        Postillionen_walk_verts[182] = -10.393404;
        Postillionen_walk_verts[183] = 1.702587;
        Postillionen_walk_verts[184] = 2.279926;
        Postillionen_walk_verts[185] = -10.450269;
        Postillionen_walk_verts[186] = 1.353886;
        Postillionen_walk_verts[187] = 2.24752;
        Postillionen_walk_verts[188] = -13.897371;
        Postillionen_walk_verts[189] = -1.381814;
        Postillionen_walk_verts[190] = 2.232521;
        Postillionen_walk_verts[191] = -13.816251;
        Postillionen_walk_verts[192] = -1.374541;
        Postillionen_walk_verts[193] = 2.482527;
        Postillionen_walk_verts[194] = -16.897337;
        Postillionen_walk_verts[195] = 1.121084;
        Postillionen_walk_verts[196] = 2.407523;
        Postillionen_walk_verts[197] = -16.878206;

        Postillionen_walk_types[0] = 0;
        Postillionen_walk_types[1] = 0;
        Postillionen_walk_types[2] = 0;
        Postillionen_walk_types[3] = 5;
        Postillionen_walk_types[4] = 5;
        Postillionen_walk_types[5] = 0;
        Postillionen_walk_types[6] = 0;
        Postillionen_walk_types[7] = 0;
        Postillionen_walk_types[8] = 0;
        Postillionen_walk_types[9] = 0;
        Postillionen_walk_types[10] = 4;
        Postillionen_walk_types[11] = 4;
        Postillionen_walk_types[12] = 0;
        Postillionen_walk_types[13] = 0;
        Postillionen_walk_types[14] = 0;
        Postillionen_walk_types[15] = 0;
        Postillionen_walk_types[16] = 0;
        Postillionen_walk_types[17] = 0;
        Postillionen_walk_types[18] = 0;
        Postillionen_walk_types[19] = 0;
        Postillionen_walk_types[20] = 0;
        Postillionen_walk_types[21] = 0;
        Postillionen_walk_types[22] = 0;
        Postillionen_walk_types[23] = 0;
        Postillionen_walk_types[24] = 0;
        Postillionen_walk_types[25] = 0;
        Postillionen_walk_types[26] = 0;
        Postillionen_walk_types[27] = 0;
        Postillionen_walk_types[28] = 0;
        Postillionen_walk_types[29] = 5;
        Postillionen_walk_types[30] = 5;
        Postillionen_walk_types[31] = 5;
        Postillionen_walk_types[32] = 5;
        Postillionen_walk_types[33] = 6;
        Postillionen_walk_types[34] = 5;
        Postillionen_walk_types[35] = 0;
        Postillionen_walk_types[36] = 0;
        Postillionen_walk_types[37] = 0;
        Postillionen_walk_types[38] = 0;
        Postillionen_walk_types[39] = 0;
        Postillionen_walk_types[40] = 5;
        Postillionen_walk_types[41] = 5;
        Postillionen_walk_types[42] = 5;
        Postillionen_walk_types[43] = 5;
        Postillionen_walk_types[44] = 5;
        Postillionen_walk_types[45] = 5;
        Postillionen_walk_types[46] = 1;
        Postillionen_walk_types[47] = 2;
        Postillionen_walk_types[48] = 2;
        Postillionen_walk_types[49] = 1;
        Postillionen_walk_types[50] = 2;
        Postillionen_walk_types[51] = 1;
        Postillionen_walk_types[52] = 2;
        Postillionen_walk_types[53] = 1;
        Postillionen_walk_types[54] = 2;
        Postillionen_walk_types[55] = 1;
        Postillionen_walk_types[56] = 2;
        Postillionen_walk_types[57] = 1;
        Postillionen_walk_types[58] = 2;
        Postillionen_walk_types[59] = 1;
        Postillionen_walk_types[60] = 1;
        Postillionen_walk_types[61] = 2;
        Postillionen_walk_types[62] = 2;
        Postillionen_walk_types[63] = 1;
        Postillionen_walk_types[64] = 1;
        Postillionen_walk_types[65] = 2;

        Postillionen_walk_graph[0] = (1)*256 + (0);
        Postillionen_walk_graph[1] = (2)*256 + (0);
        Postillionen_walk_graph[2] = (2)*256 + (1);
        Postillionen_walk_graph[3] = (4)*256 + (1);
        Postillionen_walk_graph[4] = (4)*256 + (10);
        Postillionen_walk_graph[5] = (6)*256 + (1);
        Postillionen_walk_graph[6] = (6)*256 + (5);
        Postillionen_walk_graph[7] = (7)*256 + (5);
        Postillionen_walk_graph[8] = (7)*256 + (8);
        Postillionen_walk_graph[9] = (3)*256 + (2);
        Postillionen_walk_graph[10] = (3)*256 + (11);
        Postillionen_walk_graph[11] = (7)*256 + (2);
        Postillionen_walk_graph[12] = (1)*256 + (5);
        Postillionen_walk_graph[13] = (2)*256 + (5);
        Postillionen_walk_graph[14] = (6)*256 + (9);
        Postillionen_walk_graph[15] = (8)*256 + (13);
        Postillionen_walk_graph[16] = (9)*256 + (12);
        Postillionen_walk_graph[17] = (14)*256 + (12);
        Postillionen_walk_graph[18] = (14)*256 + (15);
        Postillionen_walk_graph[19] = (17)*256 + (15);
        Postillionen_walk_graph[20] = (17)*256 + (16);
        Postillionen_walk_graph[21] = (14)*256 + (16);
        Postillionen_walk_graph[22] = (14)*256 + (18);
        Postillionen_walk_graph[23] = (19)*256 + (20);
        Postillionen_walk_graph[24] = (19)*256 + (20);
        Postillionen_walk_graph[25] = (20)*256 + (23);
        Postillionen_walk_graph[26] = (22)*256 + (25);
        Postillionen_walk_graph[27] = (24)*256 + (27);
        Postillionen_walk_graph[28] = (26)*256 + (28);
        Postillionen_walk_graph[29] = (27)*256 + (28);
        Postillionen_walk_graph[30] = (13)*256 + (15);
        Postillionen_walk_graph[31] = (15)*256 + (19);
        Postillionen_walk_graph[32] = (22)*256 + (21);
        Postillionen_walk_graph[33] = (18)*256 + (21);
        Postillionen_walk_graph[34] = (23)*256 + (24);
        Postillionen_walk_graph[35] = (26)*256 + (25);
        Postillionen_walk_graph[36] = (23)*256 + (22);
        Postillionen_walk_graph[37] = (29)*256 + (18);
        Postillionen_walk_graph[38] = (30)*256 + (34);
        Postillionen_walk_graph[39] = (30)*256 + (12);
        Postillionen_walk_graph[40] = (31)*256 + (13);
        Postillionen_walk_graph[41] = (29)*256 + (34);
        Postillionen_walk_graph[42] = (32)*256 + (19);
        Postillionen_walk_graph[43] = (32)*256 + (33);
        Postillionen_walk_graph[44] = (31)*256 + (33);
        Postillionen_walk_graph[45] = (35)*256 + (37);
        Postillionen_walk_graph[46] = (35)*256 + (39);
        Postillionen_walk_graph[47] = (37)*256 + (39);
        Postillionen_walk_graph[48] = (37)*256 + (36);
        Postillionen_walk_graph[49] = (37)*256 + (38);
        Postillionen_walk_graph[50] = (38)*256 + (36);
        Postillionen_walk_graph[51] = (17)*256 + (36);
        Postillionen_walk_graph[52] = (35)*256 + (16);
        Postillionen_walk_graph[53] = (40)*256 + (41);
        Postillionen_walk_graph[54] = (40)*256 + (44);
        Postillionen_walk_graph[55] = (41)*256 + (44);
        Postillionen_walk_graph[56] = (42)*256 + (45);
        Postillionen_walk_graph[57] = (43)*256 + (28);
        Postillionen_walk_graph[58] = (24)*256 + (42);
        Postillionen_walk_graph[59] = (43)*256 + (42);
        Postillionen_walk_graph[60] = (43)*256 + (45);
        Postillionen_walk_graph[61] = (40)*256 + (26);
        Postillionen_walk_graph[62] = (41)*256 + (28);
        Postillionen_walk_graph[63] = (41)*256 + (28);
        Postillionen_walk_graph[64] = (24)*256 + (51);
        Postillionen_walk_graph[65] = (50)*256 + (25);
        Postillionen_walk_graph[66] = (48)*256 + (26);
        Postillionen_walk_graph[67] = (49)*256 + (27);
        Postillionen_walk_graph[68] = (46)*256 + (28);
        Postillionen_walk_graph[69] = (28)*256 + (47);
        Postillionen_walk_graph[70] = (22)*256 + (52);
        Postillionen_walk_graph[71] = (23)*256 + (53);
        Postillionen_walk_graph[72] = (21)*256 + (54);
        Postillionen_walk_graph[73] = (20)*256 + (55);
        Postillionen_walk_graph[74] = (19)*256 + (57);
        Postillionen_walk_graph[75] = (56)*256 + (18);
        Postillionen_walk_graph[76] = (58)*256 + (14);
        Postillionen_walk_graph[77] = (59)*256 + (15);
        Postillionen_walk_graph[78] = (61)*256 + (16);
        Postillionen_walk_graph[79] = (17)*256 + (60);
        Postillionen_walk_graph[80] = (17)*256 + (60);
        Postillionen_walk_graph[81] = (37)*256 + (62);
        Postillionen_walk_graph[82] = (37)*256 + (63);
        Postillionen_walk_graph[83] = (38)*256 + (64);
        Postillionen_walk_graph[84] = (65)*256 + (39);
}