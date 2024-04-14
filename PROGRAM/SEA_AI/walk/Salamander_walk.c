int Salamander_walk_count;
float Salamander_walk_verts[150];
int Salamander_walk_types[50];
int Salamander_walk_graph[54];

void Salamander_walk_init()
{
        Salamander_walk_count = 50;

        Salamander_walk_verts[0] = -1.142682;
        Salamander_walk_verts[1] = 3.36;
        Salamander_walk_verts[2] = 4.610147;
        Salamander_walk_verts[3] = -1.50004;
        Salamander_walk_verts[4] = 3.36;
        Salamander_walk_verts[5] = 1.084434;
        Salamander_walk_verts[6] = -1.489563;
        Salamander_walk_verts[7] = 3.36;
        Salamander_walk_verts[8] = -2.897744;
        Salamander_walk_verts[9] = 0.144317;
        Salamander_walk_verts[10] = 3.640006;
        Salamander_walk_verts[11] = -6.231847;
        Salamander_walk_verts[12] = 0.148498;
        Salamander_walk_verts[13] = 3.937511;
        Salamander_walk_verts[14] = -9.22886;
        Salamander_walk_verts[15] = 1.303076;
        Salamander_walk_verts[16] = 4.07595;
        Salamander_walk_verts[17] = -10.130797;
        Salamander_walk_verts[18] = 1.272493;
        Salamander_walk_verts[19] = 4.376003;
        Salamander_walk_verts[20] = -13.445333;
        Salamander_walk_verts[21] = -1.281573;
        Salamander_walk_verts[22] = 4.142502;
        Salamander_walk_verts[23] = -12.106459;
        Salamander_walk_verts[24] = 1.056982;
        Salamander_walk_verts[25] = 3.5;
        Salamander_walk_verts[26] = 4.574512;
        Salamander_walk_verts[27] = 1.576743;
        Salamander_walk_verts[28] = 3.5;
        Salamander_walk_verts[29] = 8.317389;
        Salamander_walk_verts[30] = 1.705587;
        Salamander_walk_verts[31] = 3.5;
        Salamander_walk_verts[32] = -0.629315;
        Salamander_walk_verts[33] = -1.243666;
        Salamander_walk_verts[34] = 3.5;
        Salamander_walk_verts[35] = 8.293781;
        Salamander_walk_verts[36] = 1.182564;
        Salamander_walk_verts[37] = 3.672401;
        Salamander_walk_verts[38] = 11.207024;
        Salamander_walk_verts[39] = 1.050055;
        Salamander_walk_verts[40] = 3.899906;
        Salamander_walk_verts[41] = 13.351086;
        Salamander_walk_verts[42] = -0.850388;
        Salamander_walk_verts[43] = 3.847405;
        Salamander_walk_verts[44] = 13.315586;
        Salamander_walk_verts[45] = -1.217097;
        Salamander_walk_verts[46] = 3.692402;
        Salamander_walk_verts[47] = 11.216149;
        Salamander_walk_verts[48] = -0.375331;
        Salamander_walk_verts[49] = 4.334916;
        Salamander_walk_verts[50] = -13.150962;
        Salamander_walk_verts[51] = -1.605268;
        Salamander_walk_verts[52] = 5.202436;
        Salamander_walk_verts[53] = -13.22591;
        Salamander_walk_verts[54] = -2.33797;
        Salamander_walk_verts[55] = 5.187439;
        Salamander_walk_verts[56] = -13.971833;
        Salamander_walk_verts[57] = -2.220896;
        Salamander_walk_verts[58] = 7.087484;
        Salamander_walk_verts[59] = -16.108459;
        Salamander_walk_verts[60] = -2.152628;
        Salamander_walk_verts[61] = 7.342493;
        Salamander_walk_verts[62] = -18.580923;
        Salamander_walk_verts[63] = 2.009319;
        Salamander_walk_verts[64] = 7.389997;
        Salamander_walk_verts[65] = -18.570129;
        Salamander_walk_verts[66] = 2.115594;
        Salamander_walk_verts[67] = 7.127487;
        Salamander_walk_verts[68] = -14.824848;
        Salamander_walk_verts[69] = 0.197265;
        Salamander_walk_verts[70] = 7.28999;
        Salamander_walk_verts[71] = -17.255413;
        Salamander_walk_verts[72] = 1.525807;
        Salamander_walk_verts[73] = 3.862418;
        Salamander_walk_verts[74] = 13.368395;
        Salamander_walk_verts[75] = -1.345124;
        Salamander_walk_verts[76] = 3.817483;
        Salamander_walk_verts[77] = 13.376973;
        Salamander_walk_verts[78] = 1.712415;
        Salamander_walk_verts[79] = 3.632477;
        Salamander_walk_verts[80] = 11.179025;
        Salamander_walk_verts[81] = -1.638639;
        Salamander_walk_verts[82] = 3.764977;
        Salamander_walk_verts[83] = 11.246088;
        Salamander_walk_verts[84] = 1.945503;
        Salamander_walk_verts[85] = 3.489959;
        Salamander_walk_verts[86] = 8.280919;
        Salamander_walk_verts[87] = -1.780614;
        Salamander_walk_verts[88] = 3.554957;
        Salamander_walk_verts[89] = 8.314681;
        Salamander_walk_verts[90] = 1.896758;
        Salamander_walk_verts[91] = 3.439957;
        Salamander_walk_verts[92] = 4.631266;
        Salamander_walk_verts[93] = -1.713857;
        Salamander_walk_verts[94] = 3.402441;
        Salamander_walk_verts[95] = 4.60031;
        Salamander_walk_verts[96] = 1.940886;
        Salamander_walk_verts[97] = 3.51993;
        Salamander_walk_verts[98] = 1.131514;
        Salamander_walk_verts[99] = -1.971853;
        Salamander_walk_verts[100] = 3.379927;
        Salamander_walk_verts[101] = 1.061755;
        Salamander_walk_verts[102] = 1.867007;
        Salamander_walk_verts[103] = 3.592415;
        Salamander_walk_verts[104] = -2.859743;
        Salamander_walk_verts[105] = -1.925691;
        Salamander_walk_verts[106] = 3.377415;
        Salamander_walk_verts[107] = -2.885602;
        Salamander_walk_verts[108] = 1.7961;
        Salamander_walk_verts[109] = 3.672427;
        Salamander_walk_verts[110] = -6.157529;
        Salamander_walk_verts[111] = -1.80406;
        Salamander_walk_verts[112] = 3.627419;
        Salamander_walk_verts[113] = -6.160889;
        Salamander_walk_verts[114] = 1.73464;
        Salamander_walk_verts[115] = 4.007431;
        Salamander_walk_verts[116] = -9.362247;
        Salamander_walk_verts[117] = -1.694078;
        Salamander_walk_verts[118] = 3.984914;
        Salamander_walk_verts[119] = -9.327864;
        Salamander_walk_verts[120] = 1.548934;
        Salamander_walk_verts[121] = 4.134915;
        Salamander_walk_verts[122] = -11.609277;
        Salamander_walk_verts[123] = -1.555542;
        Salamander_walk_verts[124] = 4.027412;
        Salamander_walk_verts[125] = -11.637907;
        Salamander_walk_verts[126] = 4.004572;
        Salamander_walk_verts[127] = 4.107411;
        Salamander_walk_verts[128] = 10.318907;
        Salamander_walk_verts[129] = 0.880734;
        Salamander_walk_verts[130] = 22.52441;
        Salamander_walk_verts[131] = 11.911008;
        Salamander_walk_verts[132] = -0.809461;
        Salamander_walk_verts[133] = 22.631907;
        Salamander_walk_verts[134] = 11.886587;
        Salamander_walk_verts[135] = -4.112403;
        Salamander_walk_verts[136] = 4.104911;
        Salamander_walk_verts[137] = 10.193004;
        Salamander_walk_verts[138] = 4.196667;
        Salamander_walk_verts[139] = 4.132411;
        Salamander_walk_verts[140] = -4.151669;
        Salamander_walk_verts[141] = 1.01493;
        Salamander_walk_verts[142] = 23.936855;
        Salamander_walk_verts[143] = -0.672561;
        Salamander_walk_verts[144] = -0.884804;
        Salamander_walk_verts[145] = 23.979353;
        Salamander_walk_verts[146] = -0.685448;
        Salamander_walk_verts[147] = -4.072547;
        Salamander_walk_verts[148] = 4.184914;
        Salamander_walk_verts[149] = -4.147198;

        Salamander_walk_types[0] = 0;
        Salamander_walk_types[1] = 0;
        Salamander_walk_types[2] = 0;
        Salamander_walk_types[3] = 0;
        Salamander_walk_types[4] = 0;
        Salamander_walk_types[5] = 0;
        Salamander_walk_types[6] = 0;
        Salamander_walk_types[7] = 0;
        Salamander_walk_types[8] = 0;
        Salamander_walk_types[9] = 0;
        Salamander_walk_types[10] = 2;
        Salamander_walk_types[11] = 0;
        Salamander_walk_types[12] = 0;
        Salamander_walk_types[13] = 0;
        Salamander_walk_types[14] = 0;
        Salamander_walk_types[15] = 0;
        Salamander_walk_types[16] = 0;
        Salamander_walk_types[17] = 0;
        Salamander_walk_types[18] = 0;
        Salamander_walk_types[19] = 0;
        Salamander_walk_types[20] = 0;
        Salamander_walk_types[21] = 0;
        Salamander_walk_types[22] = 0;
        Salamander_walk_types[23] = 0;
        Salamander_walk_types[24] = 2;
        Salamander_walk_types[25] = 1;
        Salamander_walk_types[26] = 2;
        Salamander_walk_types[27] = 1;
        Salamander_walk_types[28] = 2;
        Salamander_walk_types[29] = 1;
        Salamander_walk_types[30] = 2;
        Salamander_walk_types[31] = 1;
        Salamander_walk_types[32] = 2;
        Salamander_walk_types[33] = 1;
        Salamander_walk_types[34] = 2;
        Salamander_walk_types[35] = 1;
        Salamander_walk_types[36] = 2;
        Salamander_walk_types[37] = 0;
        Salamander_walk_types[38] = 2;
        Salamander_walk_types[39] = 1;
        Salamander_walk_types[40] = 2;
        Salamander_walk_types[41] = 1;
        Salamander_walk_types[42] = 5;
        Salamander_walk_types[43] = 6;
        Salamander_walk_types[44] = 6;
        Salamander_walk_types[45] = 5;
        Salamander_walk_types[46] = 5;
        Salamander_walk_types[47] = 4;
        Salamander_walk_types[48] = 4;
        Salamander_walk_types[49] = 5;

        Salamander_walk_graph[0] = (0)*256 + (1);
        Salamander_walk_graph[1] = (2)*256 + (1);
        Salamander_walk_graph[2] = (2)*256 + (3);
        Salamander_walk_graph[3] = (3)*256 + (4);
        Salamander_walk_graph[4] = (5)*256 + (4);
        Salamander_walk_graph[5] = (5)*256 + (6);
        Salamander_walk_graph[6] = (6)*256 + (7);
        Salamander_walk_graph[7] = (2)*256 + (7);
        Salamander_walk_graph[8] = (8)*256 + (9);
        Salamander_walk_graph[9] = (8)*256 + (10);
        Salamander_walk_graph[10] = (9)*256 + (10);
        Salamander_walk_graph[11] = (9)*256 + (12);
        Salamander_walk_graph[12] = (13)*256 + (12);
        Salamander_walk_graph[13] = (15)*256 + (14);
        Salamander_walk_graph[14] = (15)*256 + (11);
        Salamander_walk_graph[15] = (29)*256 + (11);
        Salamander_walk_graph[16] = (0)*256 + (11);
        Salamander_walk_graph[17] = (6)*256 + (16);
        Salamander_walk_graph[18] = (16)*256 + (17);
        Salamander_walk_graph[19] = (18)*256 + (17);
        Salamander_walk_graph[20] = (18)*256 + (19);
        Salamander_walk_graph[21] = (20)*256 + (19);
        Salamander_walk_graph[22] = (20)*256 + (21);
        Salamander_walk_graph[23] = (22)*256 + (21);
        Salamander_walk_graph[24] = (22)*256 + (23);
        Salamander_walk_graph[25] = (21)*256 + (23);
        Salamander_walk_graph[26] = (20)*256 + (23);
        Salamander_walk_graph[27] = (19)*256 + (23);
        Salamander_walk_graph[28] = (3)*256 + (10);
        Salamander_walk_graph[29] = (3)*256 + (36);
        Salamander_walk_graph[30] = (3)*256 + (37);
        Salamander_walk_graph[31] = (4)*256 + (38);
        Salamander_walk_graph[32] = (4)*256 + (39);
        Salamander_walk_graph[33] = (7)*256 + (40);
        Salamander_walk_graph[34] = (7)*256 + (41);
        Salamander_walk_graph[35] = (0)*256 + (8);
        Salamander_walk_graph[36] = (14)*256 + (25);
        Salamander_walk_graph[37] = (15)*256 + (27);
        Salamander_walk_graph[38] = (31)*256 + (0);
        Salamander_walk_graph[39] = (32)*256 + (1);
        Salamander_walk_graph[40] = (33)*256 + (1);
        Salamander_walk_graph[41] = (34)*256 + (2);
        Salamander_walk_graph[42] = (35)*256 + (2);
        Salamander_walk_graph[43] = (9)*256 + (28);
        Salamander_walk_graph[44] = (12)*256 + (26);
        Salamander_walk_graph[45] = (13)*256 + (24);
        Salamander_walk_graph[46] = (11)*256 + (45);
        Salamander_walk_graph[47] = (9)*256 + (42);
        Salamander_walk_graph[48] = (44)*256 + (45);
        Salamander_walk_graph[49] = (43)*256 + (42);
        Salamander_walk_graph[50] = (47)*256 + (46);
        Salamander_walk_graph[51] = (49)*256 + (48);
        Salamander_walk_graph[52] = (49)*256 + (2);
        Salamander_walk_graph[53] = (46)*256 + (34);
}