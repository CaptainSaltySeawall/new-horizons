int Sophie_walk_count;
float Sophie_walk_verts[138];
int Sophie_walk_types[46];
int Sophie_walk_graph[51];

void Sophie_walk_init()
{
        Sophie_walk_count = 46;

        Sophie_walk_verts[0] = 1.5;
        Sophie_walk_verts[1] = 1.05;
        Sophie_walk_verts[2] = 6.595585;
        Sophie_walk_verts[3] = 1.5;
        Sophie_walk_verts[4] = 1.05;
        Sophie_walk_verts[5] = 3.817865;
        Sophie_walk_verts[6] = 1.5;
        Sophie_walk_verts[7] = 1.05;
        Sophie_walk_verts[8] = 1.081132;
        Sophie_walk_verts[9] = 1.5;
        Sophie_walk_verts[10] = 1.05;
        Sophie_walk_verts[11] = -1.649022;
        Sophie_walk_verts[12] = 1.5;
        Sophie_walk_verts[13] = 1.05;
        Sophie_walk_verts[14] = -4.32898;
        Sophie_walk_verts[15] = 1.5;
        Sophie_walk_verts[16] = 1.05;
        Sophie_walk_verts[17] = -8;
        Sophie_walk_verts[18] = -1.5;
        Sophie_walk_verts[19] = 1.05;
        Sophie_walk_verts[20] = 6.690322;
        Sophie_walk_verts[21] = -1.5;
        Sophie_walk_verts[22] = 1.05;
        Sophie_walk_verts[23] = 3.813827;
        Sophie_walk_verts[24] = -1.5;
        Sophie_walk_verts[25] = 1.05;
        Sophie_walk_verts[26] = 1.084957;
        Sophie_walk_verts[27] = -1.5;
        Sophie_walk_verts[28] = 1.05;
        Sophie_walk_verts[29] = -1.669847;
        Sophie_walk_verts[30] = -1.5;
        Sophie_walk_verts[31] = 1.05;
        Sophie_walk_verts[32] = -4.169992;
        Sophie_walk_verts[33] = -1.5;
        Sophie_walk_verts[34] = 1.05;
        Sophie_walk_verts[35] = -8;
        Sophie_walk_verts[36] = 3;
        Sophie_walk_verts[37] = 2.95;
        Sophie_walk_verts[38] = -10;
        Sophie_walk_verts[39] = -2;
        Sophie_walk_verts[40] = 2.95;
        Sophie_walk_verts[41] = -10;
        Sophie_walk_verts[42] = 2;
        Sophie_walk_verts[43] = 2.95;
        Sophie_walk_verts[44] = -10;
        Sophie_walk_verts[45] = 3;
        Sophie_walk_verts[46] = 2.95;
        Sophie_walk_verts[47] = -8;
        Sophie_walk_verts[48] = 4.2;
        Sophie_walk_verts[49] = 2.95;
        Sophie_walk_verts[50] = -7.7;
        Sophie_walk_verts[51] = 0.5;
        Sophie_walk_verts[52] = 13.5;
        Sophie_walk_verts[53] = -7;
        Sophie_walk_verts[54] = -3;
        Sophie_walk_verts[55] = 2.95;
        Sophie_walk_verts[56] = -8;
        Sophie_walk_verts[57] = -4.2;
        Sophie_walk_verts[58] = 2.95;
        Sophie_walk_verts[59] = -7.7;
        Sophie_walk_verts[60] = -0.5;
        Sophie_walk_verts[61] = 13.5;
        Sophie_walk_verts[62] = -7;
        Sophie_walk_verts[63] = 3;
        Sophie_walk_verts[64] = 1;
        Sophie_walk_verts[65] = -6.956006;
        Sophie_walk_verts[66] = 3;
        Sophie_walk_verts[67] = 1;
        Sophie_walk_verts[68] = -4.281604;
        Sophie_walk_verts[69] = 3;
        Sophie_walk_verts[70] = 1;
        Sophie_walk_verts[71] = -1.620431;
        Sophie_walk_verts[72] = 3;
        Sophie_walk_verts[73] = 1;
        Sophie_walk_verts[74] = 1.113825;
        Sophie_walk_verts[75] = 3;
        Sophie_walk_verts[76] = 1;
        Sophie_walk_verts[77] = 3.90749;
        Sophie_walk_verts[78] = 3;
        Sophie_walk_verts[79] = 2.95;
        Sophie_walk_verts[80] = 5.5;
        Sophie_walk_verts[81] = -3;
        Sophie_walk_verts[82] = 1;
        Sophie_walk_verts[83] = -6.919681;
        Sophie_walk_verts[84] = -3;
        Sophie_walk_verts[85] = 1;
        Sophie_walk_verts[86] = -4.230053;
        Sophie_walk_verts[87] = -3;
        Sophie_walk_verts[88] = 1;
        Sophie_walk_verts[89] = -1.649711;
        Sophie_walk_verts[90] = -3;
        Sophie_walk_verts[91] = 1;
        Sophie_walk_verts[92] = 1.137426;
        Sophie_walk_verts[93] = -3;
        Sophie_walk_verts[94] = 1;
        Sophie_walk_verts[95] = 3.851412;
        Sophie_walk_verts[96] = -3;
        Sophie_walk_verts[97] = 2.95;
        Sophie_walk_verts[98] = 5.5;
        Sophie_walk_verts[99] = 0.2;
        Sophie_walk_verts[100] = 1.05;
        Sophie_walk_verts[101] = -12.5;
        Sophie_walk_verts[102] = -2;
        Sophie_walk_verts[103] = 3.25;
        Sophie_walk_verts[104] = -15;
        Sophie_walk_verts[105] = 2;
        Sophie_walk_verts[106] = 3.25;
        Sophie_walk_verts[107] = -15;
        Sophie_walk_verts[108] = -1.2;
        Sophie_walk_verts[109] = 2.95;
        Sophie_walk_verts[110] = -10;
        Sophie_walk_verts[111] = -1.2;
        Sophie_walk_verts[112] = 2.95;
        Sophie_walk_verts[113] = -12.5;
        Sophie_walk_verts[114] = 1.1;
        Sophie_walk_verts[115] = 2.95;
        Sophie_walk_verts[116] = 8.7;
        Sophie_walk_verts[117] = -1.1;
        Sophie_walk_verts[118] = 2.95;
        Sophie_walk_verts[119] = 8.7;
        Sophie_walk_verts[120] = 4;
        Sophie_walk_verts[121] = 2.95;
        Sophie_walk_verts[122] = 6;
        Sophie_walk_verts[123] = 0.5;
        Sophie_walk_verts[124] = 13;
        Sophie_walk_verts[125] = 7;
        Sophie_walk_verts[126] = -0.5;
        Sophie_walk_verts[127] = 13;
        Sophie_walk_verts[128] = 7;
        Sophie_walk_verts[129] = -4;
        Sophie_walk_verts[130] = 2.95;
        Sophie_walk_verts[131] = 6;
        Sophie_walk_verts[132] = -3;
        Sophie_walk_verts[133] = 2.95;
        Sophie_walk_verts[134] = -10;
        Sophie_walk_verts[135] = 0;
        Sophie_walk_verts[136] = 3.35;
        Sophie_walk_verts[137] = -18;

        Sophie_walk_types[0] = 0;
        Sophie_walk_types[1] = 0;
        Sophie_walk_types[2] = 0;
        Sophie_walk_types[3] = 0;
        Sophie_walk_types[4] = 0;
        Sophie_walk_types[5] = 0;
        Sophie_walk_types[6] = 0;
        Sophie_walk_types[7] = 0;
        Sophie_walk_types[8] = 0;
        Sophie_walk_types[9] = 0;
        Sophie_walk_types[10] = 0;
        Sophie_walk_types[11] = 0;
        Sophie_walk_types[12] = 0;
        Sophie_walk_types[13] = 0;
        Sophie_walk_types[14] = 0;
        Sophie_walk_types[15] = 5;
        Sophie_walk_types[16] = 5;
        Sophie_walk_types[17] = 4;
        Sophie_walk_types[18] = 5;
        Sophie_walk_types[19] = 5;
        Sophie_walk_types[20] = 4;
        Sophie_walk_types[21] = 2;
        Sophie_walk_types[22] = 2;
        Sophie_walk_types[23] = 2;
        Sophie_walk_types[24] = 2;
        Sophie_walk_types[25] = 2;
        Sophie_walk_types[26] = 0;
        Sophie_walk_types[27] = 1;
        Sophie_walk_types[28] = 1;
        Sophie_walk_types[29] = 1;
        Sophie_walk_types[30] = 1;
        Sophie_walk_types[31] = 1;
        Sophie_walk_types[32] = 0;
        Sophie_walk_types[33] = 0;
        Sophie_walk_types[34] = 0;
        Sophie_walk_types[35] = 0;
        Sophie_walk_types[36] = 0;
        Sophie_walk_types[37] = 0;
        Sophie_walk_types[38] = 0;
        Sophie_walk_types[39] = 0;
        Sophie_walk_types[40] = 5;
        Sophie_walk_types[41] = 6;
        Sophie_walk_types[42] = 6;
        Sophie_walk_types[43] = 5;
        Sophie_walk_types[44] = 0;
        Sophie_walk_types[45] = 0;

        Sophie_walk_graph[0] = (0)*256 + (1);
        Sophie_walk_graph[1] = (1)*256 + (2);
        Sophie_walk_graph[2] = (2)*256 + (3);
        Sophie_walk_graph[3] = (3)*256 + (4);
        Sophie_walk_graph[4] = (4)*256 + (5);
        Sophie_walk_graph[5] = (7)*256 + (6);
        Sophie_walk_graph[6] = (8)*256 + (7);
        Sophie_walk_graph[7] = (9)*256 + (8);
        Sophie_walk_graph[8] = (10)*256 + (9);
        Sophie_walk_graph[9] = (11)*256 + (10);
        Sophie_walk_graph[10] = (0)*256 + (6);
        Sophie_walk_graph[11] = (5)*256 + (11);
        Sophie_walk_graph[12] = (12)*256 + (14);
        Sophie_walk_graph[13] = (14)*256 + (13);
        Sophie_walk_graph[14] = (16)*256 + (15);
        Sophie_walk_graph[15] = (16)*256 + (17);
        Sophie_walk_graph[16] = (18)*256 + (19);
        Sophie_walk_graph[17] = (20)*256 + (19);
        Sophie_walk_graph[18] = (5)*256 + (21);
        Sophie_walk_graph[19] = (4)*256 + (22);
        Sophie_walk_graph[20] = (3)*256 + (23);
        Sophie_walk_graph[21] = (2)*256 + (24);
        Sophie_walk_graph[22] = (1)*256 + (25);
        Sophie_walk_graph[23] = (11)*256 + (27);
        Sophie_walk_graph[24] = (10)*256 + (28);
        Sophie_walk_graph[25] = (9)*256 + (29);
        Sophie_walk_graph[26] = (8)*256 + (30);
        Sophie_walk_graph[27] = (7)*256 + (31);
        Sophie_walk_graph[28] = (13)*256 + (36);
        Sophie_walk_graph[29] = (13)*256 + (34);
        Sophie_walk_graph[30] = (35)*256 + (34);
        Sophie_walk_graph[31] = (35)*256 + (14);
        Sophie_walk_graph[32] = (40)*256 + (26);
        Sophie_walk_graph[33] = (40)*256 + (41);
        Sophie_walk_graph[34] = (43)*256 + (42);
        Sophie_walk_graph[35] = (32)*256 + (43);
        Sophie_walk_graph[36] = (13)*256 + (44);
        Sophie_walk_graph[37] = (32)*256 + (39);
        Sophie_walk_graph[38] = (12)*256 + (15);
        Sophie_walk_graph[39] = (12)*256 + (26);
        Sophie_walk_graph[40] = (44)*256 + (32);
        Sophie_walk_graph[41] = (44)*256 + (18);
        Sophie_walk_graph[42] = (38)*256 + (26);
        Sophie_walk_graph[43] = (37)*256 + (36);
        Sophie_walk_graph[44] = (37)*256 + (33);
        Sophie_walk_graph[45] = (33)*256 + (5);
        Sophie_walk_graph[46] = (33)*256 + (11);
        Sophie_walk_graph[47] = (38)*256 + (39);
        Sophie_walk_graph[48] = (45)*256 + (34);
        Sophie_walk_graph[49] = (45)*256 + (35);
        Sophie_walk_graph[50] = (34)*256 + (37);
}