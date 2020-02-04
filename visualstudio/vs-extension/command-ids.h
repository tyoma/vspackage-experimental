﻿//	Copyright (c) 2011-2019 by Artem A. Gevorkyan (gevorkyan.org)
//
//	Permission is hereby granted, free of charge, to any person obtaining a copy
//	of this software and associated documentation files (the "Software"), to deal
//	in the Software without restriction, including without limitation the rights
//	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//	copies of the Software, and to permit persons to whom the Software is
//	furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//	THE SOFTWARE.

#ifndef __COMMANDIDS_H_
#define __COMMANDIDS_H_

///////////////////////////////////////////////////////////////////////////////
// Package

// { B264B274-06E2-4B13-8BBD-9EEC51478CB0 }
#define guidExperimentalPkg { 0xb264b274, 0x6e2, 0x4b13, { 0x8b, 0xbd, 0x9e, 0xec, 0x51, 0x47, 0x8c, 0xb0 } }

///////////////////////////////////////////////////////////////////////////////
// Command Set IDs

// Global command set
// { 26EEA1D0-F71E-413C-BF9F-6493BCFDAAF3 }
#define guidGlobalCmdSet { 0x26eea1d0, 0xf71e, 0x413c, { 0xbf, 0x9f, 0x64, 0x93, 0xbc, 0xfd, 0xaa, 0xf3 } }

// Instance command set
// {F67EF201-61ED-4515-8352-2FA3B425B6F2}
#define guidInstanceCmdSet { 0xf67ef201, 0x61ed, 0x4515, { 0x83, 0x52, 0x2f, 0xa3, 0xb4, 0x25, 0xb6, 0xf2 } }

///////////////////////////////////////////////////////////////////////////////
// Menu IDs

///////////////////////////////////////////////////////////////////////////////
// Menu Group IDs
#define IDG_MP_PROJECT_SETUP	0x1020
#define IDM_MP_MM_MICROPROFILER	0x1030
#define IDG_MP_MAIN	0x1031
#define IDG_MP_WINDOWS	0x1032
#define IDM_MP_PANE_TOOLBAR	0x1033
#define IDG_MP_INSTANCE_COMMANDS 0x1034
#define IDG_MP_INSTANCE_MISC_COMMANDS 0x1035
#define IDG_MP_IPC	0x1036


///////////////////////////////////////////////////////////////////////////////
// Command IDs
#define cmdidToggleProfiling 0x101
#define cmdidRemoveProfilingSupport 0x104
#define cmdidToggleUpdates 0x108
#define cmdidSaveStatistics 0x110
#define cmdidLoadStatistics 0x111
#define cmdidProfileProcess 0x120
#define cmdidIPCEnableRemote 0x201
#define cmdidIPCSocketPort 0x202
#define cmdidCloseAll 0x300
#define cmdidClearStatistics 0x400
#define cmdidCopyStatistics 0x401

#define cmdidSupportDeveloper 0x1000

#define cmdidWindowActivateDynamic 0x2000

#define cmdidDummy0x0001 0x0001
#define cmdidDummy0x0002 0x0002
#define cmdidDummy0x0003 0x0003
#define cmdidDummy0x0004 0x0004
#define cmdidDummy0x0005 0x0005
#define cmdidDummy0x0006 0x0006
#define cmdidDummy0x0007 0x0007
#define cmdidDummy0x0008 0x0008
#define cmdidDummy0x0009 0x0009
#define cmdidDummy0x000A 0x000A
#define cmdidDummy0x000B 0x000B
#define cmdidDummy0x000C 0x000C
#define cmdidDummy0x000D 0x000D
#define cmdidDummy0x000E 0x000E
#define cmdidDummy0x000F 0x000F
#define cmdidDummy0x0010 0x0010
#define cmdidDummy0x0011 0x0011
#define cmdidDummy0x0012 0x0012
#define cmdidDummy0x0013 0x0013
#define cmdidDummy0x0014 0x0014
#define cmdidDummy0x0015 0x0015
#define cmdidDummy0x0016 0x0016
#define cmdidDummy0x0017 0x0017
#define cmdidDummy0x0018 0x0018
#define cmdidDummy0x0019 0x0019
#define cmdidDummy0x001A 0x001A
#define cmdidDummy0x001B 0x001B
#define cmdidDummy0x001C 0x001C
#define cmdidDummy0x001D 0x001D
#define cmdidDummy0x001E 0x001E
#define cmdidDummy0x001F 0x001F
#define cmdidDummy0x0020 0x0020
#define cmdidDummy0x0021 0x0021
#define cmdidDummy0x0022 0x0022
#define cmdidDummy0x0023 0x0023
#define cmdidDummy0x0024 0x0024
#define cmdidDummy0x0025 0x0025
#define cmdidDummy0x0026 0x0026
#define cmdidDummy0x0027 0x0027
#define cmdidDummy0x0028 0x0028
#define cmdidDummy0x0029 0x0029
#define cmdidDummy0x002A 0x002A
#define cmdidDummy0x002B 0x002B
#define cmdidDummy0x002C 0x002C
#define cmdidDummy0x002D 0x002D
#define cmdidDummy0x002E 0x002E
#define cmdidDummy0x002F 0x002F
#define cmdidDummy0x0030 0x0030
#define cmdidDummy0x0031 0x0031
#define cmdidDummy0x0032 0x0032
#define cmdidDummy0x0033 0x0033
#define cmdidDummy0x0034 0x0034
#define cmdidDummy0x0035 0x0035
#define cmdidDummy0x0036 0x0036
#define cmdidDummy0x0037 0x0037
#define cmdidDummy0x0038 0x0038
#define cmdidDummy0x0039 0x0039
#define cmdidDummy0x003A 0x003A
#define cmdidDummy0x003B 0x003B
#define cmdidDummy0x003C 0x003C
#define cmdidDummy0x003D 0x003D
#define cmdidDummy0x003E 0x003E
#define cmdidDummy0x003F 0x003F
#define cmdidDummy0x0040 0x0040
#define cmdidDummy0x0041 0x0041
#define cmdidDummy0x0042 0x0042
#define cmdidDummy0x0043 0x0043
#define cmdidDummy0x0044 0x0044
#define cmdidDummy0x0045 0x0045
#define cmdidDummy0x0046 0x0046
#define cmdidDummy0x0047 0x0047
#define cmdidDummy0x0048 0x0048
#define cmdidDummy0x0049 0x0049
#define cmdidDummy0x004A 0x004A
#define cmdidDummy0x004B 0x004B
#define cmdidDummy0x004C 0x004C
#define cmdidDummy0x004D 0x004D
#define cmdidDummy0x004E 0x004E
#define cmdidDummy0x004F 0x004F
#define cmdidDummy0x0050 0x0050
#define cmdidDummy0x0051 0x0051
#define cmdidDummy0x0052 0x0052
#define cmdidDummy0x0053 0x0053
#define cmdidDummy0x0054 0x0054
#define cmdidDummy0x0055 0x0055
#define cmdidDummy0x0056 0x0056
#define cmdidDummy0x0057 0x0057
#define cmdidDummy0x0058 0x0058
#define cmdidDummy0x0059 0x0059
#define cmdidDummy0x005A 0x005A
#define cmdidDummy0x005B 0x005B
#define cmdidDummy0x005C 0x005C
#define cmdidDummy0x005D 0x005D
#define cmdidDummy0x005E 0x005E
#define cmdidDummy0x005F 0x005F
#define cmdidDummy0x0060 0x0060
#define cmdidDummy0x0061 0x0061
#define cmdidDummy0x0062 0x0062
#define cmdidDummy0x0063 0x0063
#define cmdidDummy0x0064 0x0064
#define cmdidDummy0x0065 0x0065
#define cmdidDummy0x0066 0x0066
#define cmdidDummy0x0067 0x0067
#define cmdidDummy0x0068 0x0068
#define cmdidDummy0x0069 0x0069
#define cmdidDummy0x006A 0x006A
#define cmdidDummy0x006B 0x006B
#define cmdidDummy0x006C 0x006C
#define cmdidDummy0x006D 0x006D
#define cmdidDummy0x006E 0x006E
#define cmdidDummy0x006F 0x006F
#define cmdidDummy0x0070 0x0070
#define cmdidDummy0x0071 0x0071
#define cmdidDummy0x0072 0x0072
#define cmdidDummy0x0073 0x0073
#define cmdidDummy0x0074 0x0074
#define cmdidDummy0x0075 0x0075
#define cmdidDummy0x0076 0x0076
#define cmdidDummy0x0077 0x0077
#define cmdidDummy0x0078 0x0078
#define cmdidDummy0x0079 0x0079
#define cmdidDummy0x007A 0x007A
#define cmdidDummy0x007B 0x007B
#define cmdidDummy0x007C 0x007C
#define cmdidDummy0x007D 0x007D
#define cmdidDummy0x007E 0x007E
#define cmdidDummy0x007F 0x007F

#define cmdidDummy0x0080 0x0080
#define cmdidDummy0x0081 0x0081
#define cmdidDummy0x0082 0x0082
#define cmdidDummy0x0083 0x0083
#define cmdidDummy0x0084 0x0084
#define cmdidDummy0x0085 0x0085
#define cmdidDummy0x0086 0x0086
#define cmdidDummy0x0087 0x0087
#define cmdidDummy0x0088 0x0088
#define cmdidDummy0x0089 0x0089
#define cmdidDummy0x008A 0x008A
#define cmdidDummy0x008B 0x008B
#define cmdidDummy0x008C 0x008C
#define cmdidDummy0x008D 0x008D
#define cmdidDummy0x008E 0x008E
#define cmdidDummy0x008F 0x008F
#define cmdidDummy0x0090 0x0090
#define cmdidDummy0x0091 0x0091
#define cmdidDummy0x0092 0x0092
#define cmdidDummy0x0093 0x0093
#define cmdidDummy0x0094 0x0094
#define cmdidDummy0x0095 0x0095
#define cmdidDummy0x0096 0x0096
#define cmdidDummy0x0097 0x0097
#define cmdidDummy0x0098 0x0098
#define cmdidDummy0x0099 0x0099
#define cmdidDummy0x009A 0x009A
#define cmdidDummy0x009B 0x009B
#define cmdidDummy0x009C 0x009C
#define cmdidDummy0x009D 0x009D
#define cmdidDummy0x009E 0x009E
#define cmdidDummy0x009F 0x009F
#define cmdidDummy0x00A0 0x00A0
#define cmdidDummy0x00A1 0x00A1
#define cmdidDummy0x00A2 0x00A2
#define cmdidDummy0x00A3 0x00A3
#define cmdidDummy0x00A4 0x00A4
#define cmdidDummy0x00A5 0x00A5
#define cmdidDummy0x00A6 0x00A6
#define cmdidDummy0x00A7 0x00A7
#define cmdidDummy0x00A8 0x00A8
#define cmdidDummy0x00A9 0x00A9
#define cmdidDummy0x00AA 0x00AA
#define cmdidDummy0x00AB 0x00AB
#define cmdidDummy0x00AC 0x00AC
#define cmdidDummy0x00AD 0x00AD
#define cmdidDummy0x00AE 0x00AE
#define cmdidDummy0x00AF 0x00AF
#define cmdidDummy0x00B0 0x00B0
#define cmdidDummy0x00B1 0x00B1
#define cmdidDummy0x00B2 0x00B2
#define cmdidDummy0x00B3 0x00B3
#define cmdidDummy0x00B4 0x00B4
#define cmdidDummy0x00B5 0x00B5
#define cmdidDummy0x00B6 0x00B6
#define cmdidDummy0x00B7 0x00B7
#define cmdidDummy0x00B8 0x00B8
#define cmdidDummy0x00B9 0x00B9
#define cmdidDummy0x00BA 0x00BA
#define cmdidDummy0x00BB 0x00BB
#define cmdidDummy0x00BC 0x00BC
#define cmdidDummy0x00BD 0x00BD
#define cmdidDummy0x00BE 0x00BE
#define cmdidDummy0x00BF 0x00BF
#define cmdidDummy0x00C0 0x00C0
#define cmdidDummy0x00C1 0x00C1
#define cmdidDummy0x00C2 0x00C2
#define cmdidDummy0x00C3 0x00C3
#define cmdidDummy0x00C4 0x00C4
#define cmdidDummy0x00C5 0x00C5
#define cmdidDummy0x00C6 0x00C6
#define cmdidDummy0x00C7 0x00C7
#define cmdidDummy0x00C8 0x00C8
#define cmdidDummy0x00C9 0x00C9
#define cmdidDummy0x00CA 0x00CA
#define cmdidDummy0x00CB 0x00CB
#define cmdidDummy0x00CC 0x00CC
#define cmdidDummy0x00CD 0x00CD
#define cmdidDummy0x00CE 0x00CE
#define cmdidDummy0x00CF 0x00CF
#define cmdidDummy0x00D0 0x00D0
#define cmdidDummy0x00D1 0x00D1
#define cmdidDummy0x00D2 0x00D2
#define cmdidDummy0x00D3 0x00D3
#define cmdidDummy0x00D4 0x00D4
#define cmdidDummy0x00D5 0x00D5
#define cmdidDummy0x00D6 0x00D6
#define cmdidDummy0x00D7 0x00D7
#define cmdidDummy0x00D8 0x00D8
#define cmdidDummy0x00D9 0x00D9
#define cmdidDummy0x00DA 0x00DA
#define cmdidDummy0x00DB 0x00DB
#define cmdidDummy0x00DC 0x00DC
#define cmdidDummy0x00DD 0x00DD
#define cmdidDummy0x00DE 0x00DE
#define cmdidDummy0x00DF 0x00DF
#define cmdidDummy0x00E0 0x00E0
#define cmdidDummy0x00E1 0x00E1
#define cmdidDummy0x00E2 0x00E2
#define cmdidDummy0x00E3 0x00E3
#define cmdidDummy0x00E4 0x00E4
#define cmdidDummy0x00E5 0x00E5
#define cmdidDummy0x00E6 0x00E6
#define cmdidDummy0x00E7 0x00E7
#define cmdidDummy0x00E8 0x00E8
#define cmdidDummy0x00E9 0x00E9
#define cmdidDummy0x00EA 0x00EA
#define cmdidDummy0x00EB 0x00EB
#define cmdidDummy0x00EC 0x00EC
#define cmdidDummy0x00ED 0x00ED
#define cmdidDummy0x00EE 0x00EE
#define cmdidDummy0x00EF 0x00EF
#define cmdidDummy0x00F0 0x00F0
#define cmdidDummy0x00F1 0x00F1
#define cmdidDummy0x00F2 0x00F2
#define cmdidDummy0x00F3 0x00F3
#define cmdidDummy0x00F4 0x00F4
#define cmdidDummy0x00F5 0x00F5
#define cmdidDummy0x00F6 0x00F6
#define cmdidDummy0x00F7 0x00F7
#define cmdidDummy0x00F8 0x00F8
#define cmdidDummy0x00F9 0x00F9
#define cmdidDummy0x00FA 0x00FA
#define cmdidDummy0x00FB 0x00FB
#define cmdidDummy0x00FC 0x00FC
#define cmdidDummy0x00FD 0x00FD
#define cmdidDummy0x00FE 0x00FE
#define cmdidDummy0x00FF 0x00FF

#endif // __COMMANDIDS_H_