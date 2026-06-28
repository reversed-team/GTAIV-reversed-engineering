
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 0x5C1360 */

void __fastcall FileLoader(undefined4 param_1,byte *param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  char extraout_CL;
  char extraout_CL_00;
  char extraout_CL_01;
  char extraout_CL_02;
  char extraout_CL_03;
  char extraout_CL_04;
  char extraout_CL_05;
  uint extraout_ECX;
  void *extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  int extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  int extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 uVar6;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  int extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  int extraout_ECX_22;
  undefined4 extraout_ECX_23;
  undefined4 extraout_ECX_24;
  uint extraout_ECX_25;
  undefined4 extraout_ECX_26;
  undefined4 extraout_ECX_27;
  byte *pbVar7;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  byte *extraout_EDX_01;
  byte *extraout_EDX_02;
  int extraout_EDX_03;
  uint *extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  uint *extraout_EDX_08;
  int extraout_EDX_09;
  uint *extraout_EDX_10;
  byte *extraout_EDX_11;
  uint *extraout_EDX_12;
  uint *extraout_EDX_13;
  int extraout_EDX_14;
  byte *extraout_EDX_15;
  uint *extraout_EDX_16;
  uint *extraout_EDX_17;
  uint *puVar8;
  uint extraout_EDX_18;
  undefined4 extraout_EDX_19;
  int extraout_EDX_20;
  int extraout_EDX_21;
  int extraout_EDX_22;
  uint *extraout_EDX_23;
  int extraout_EDX_24;
  int extraout_EDX_25;
  uint *extraout_EDX_26;
  int extraout_EDX_27;
  byte *extraout_EDX_28;
  uint *extraout_EDX_29;
  uint *extraout_EDX_30;
  uint *extraout_EDX_31;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined8 uVar9;
  undefined4 uVar10;
  
  uVar10 = param_1;
  uVar9 = FUN_009345d0(DAT_01bb5624,param_2);
  pvVar1 = DAT_01bb5624;
  pbVar7 = (byte *)((ulonglong)uVar9 >> 0x20);
  if (((DAT_018b6f00 & (uint)uVar9) == DAT_018b6f00) &&
     ((DAT_018b6f04 & (uint)pbVar7) == DAT_018b6f04)) {
    uVar3 = DAT_018b6f04;
    if (DAT_018b6ede == '\0') goto LAB_005c13fe;
    FUN_009345b0(DAT_01bb5624,pbVar7);
    uVar3 = extraout_ECX;
    if (*(char *)((int)pvVar1 + 0x169) != '\0') goto LAB_005c13fe;
  }
  DAT_01282f32 = 1;
  thunk_FUN_008c24f0();
  FUN_008c1c60(extraout_ECX_00);
  DAT_01282f32 = 0;
  uVar2 = FUN_00934660(DAT_01bb5624,extraout_EDX);
  pvVar1 = DAT_01bb5624;
  uVar3 = extraout_ECX_01;
  if (0 < (int)uVar2) {
    FUN_009345b0(DAT_01bb5624,extraout_EDX_00);
    uVar3 = extraout_ECX_02;
    if ((*(char *)((int)pvVar1 + 0x169) == '\0') && (DAT_011d6fd4 == 0)) {
      FUN_00934cb0(DAT_01bb5624,extraout_EDX_01);
      uVar3 = extraout_ECX_03;
    }
  }
LAB_005c13fe:
  uVar3 = FUN_00404220(uVar3);
  FUN_00dfc0bc(uVar3);
  DAT_01048458 = 0;
  _DAT_0104845c = 0;
  DAT_018b600c = &DAT_019e8678;
  DAT_017f5ea0 = 0;
  DAT_017f5fc4 = 0;
  _DAT_01048450 = (uVar3 == 0) + uVar3;
  _DAT_01048454 = (uVar3 << 0x10 | uVar3 >> 0x10) ^ uVar3;
  FUN_009c3650();
  FUN_00d8e2d0(extraout_ECX_04,extraout_EDX_02);
  FUN_00b1e6a0();
  FUN_004016a0(extraout_CL,extraout_EDX_03);
  FUN_009fb200();
  FUN_00af8f80();
  FUN_00b0cd60();
  FUN_00936490();
  FUN_005c31f0(extraout_ECX_05,extraout_EDX_04);
  FUN_009f5330();
  FUN_00c84cb0();
  FUN_00cf3590();
  FUN_004016a0(extraout_CL_00,extraout_EDX_05);
  FUN_004016a0(extraout_CL_01,extraout_EDX_06);
  thunk_FUN_00a2e1d0();
  FUN_008d84b0();
  FUN_00c68990((undefined4 *)&DAT_016dceb8);
  FUN_00c6d510(extraout_ECX_06,extraout_EDX_07);
  FUN_005c31f0(extraout_ECX_07,extraout_EDX_08);
  FUN_00c78720(extraout_ECX_08,extraout_EDX_09);
  FUN_005c31f0(extraout_ECX_09,extraout_EDX_10);
  FUN_00cc6c70();
  FUN_008fb1d0();
  FUN_00af68e0();
  FUN_00a69740(extraout_ECX_10,extraout_EDX_11);
  FUN_005c31f0(extraout_ECX_11,extraout_EDX_12);
  FUN_005c2c60();
  FUN_008f7b90(&DAT_0118d7f0);
  FUN_0094eef0();
  FUN_00c0fd30();
  FUN_005c31f0(extraout_ECX_12,extraout_EDX_13);
  FUN_004016a0(extraout_CL_02,extraout_EDX_14);
  FUN_00afdee0();
  FUN_00c1d060();
  piVar4 = (int *)FUN_008f69e0();
  FUN_008f0a50(piVar4);
  iVar5 = FUN_00942730();
  if (iVar5 == 1) {
    FUN_00cd2990(extraout_ECX_13,extraout_EDX_15);
    uVar6 = extraout_ECX_14;
    puVar8 = extraout_EDX_16;
  }
  else {
    FUN_00cd29b0(extraout_ECX_13,extraout_EDX_15);
    uVar6 = extraout_ECX_15;
    puVar8 = extraout_EDX_17;
  }
  FUN_005c31f0(uVar6,puVar8);
  FUN_00b3a0c0();
  FUN_00b27240(extraout_ECX_16,extraout_EDX_18);
  FUN_008bb730(extraout_ECX_17,extraout_EDX_19);
  LoadBlips(extraout_ECX_18,extraout_EDX_20);
  LoadMultiplayerFiles();
  FUN_004016a0(extraout_CL_03,extraout_EDX_21);
  FUN_009e9470();
  FUN_004016a0(extraout_CL_04,extraout_EDX_22);
  FUN_009427d0();
  FUN_00b2cf10();
  FUN_005c31f0(extraout_ECX_19,extraout_EDX_23);
  FUN_00dc4c10();
  FUN_004016a0(extraout_CL_05,extraout_EDX_24);
  FUN_00c3b250(extraout_ECX_20,extraout_EDX_25);
  FUN_00da8a70();
  FUN_00b69d50();
  FUN_00b02d10();
  FUN_008d0a40();
  FUN_00c09d20(&DAT_01683290);
  FUN_00c29310((float *)&DAT_016c8fb0);
  FUN_00401690();
  FUN_005bf940();
  FUN_008c1c80();
  FUN_005c31f0(extraout_ECX_21,extraout_EDX_26);
  FUN_00c3ae00();
  _DAT_018b6bac = 0;
  FUN_0094c470(extraout_ECX_22,extraout_EDX_27,(char)param_1);
  FUN_008ca880(extraout_ECX_23,extraout_EDX_28,DAT_011d6fd0);
  FUN_005c31f0(extraout_ECX_24,extraout_EDX_29);
  FUN_00939460();
  FUN_005be150();
  uVar3 = _DAT_019d220c >> 0x10;
  uVar6 = DAT_019d2208;
  FUN_00486340(extraout_ECX_25);
  DAT_019d2208 = 0;
  _DAT_019d220c = 0;
  FUN_004853f0(uVar6,uVar3,unaff_ESI,unaff_EBX,uVar10);
  DAT_0118e90a = 1;
  FUN_009f6930();
  InitializeFontTexture();
  FUN_00924700();
  FUN_005c31f0(extraout_ECX_26,extraout_EDX_30);
  if ((char)param_1 == '\0') {
    InitializeDefaultMaps();
    FUN_0094dd40();
    FUN_005c1660();
    FUN_009fba30();
  }
  FUN_008e5850(&DAT_01176888,'\0');
  FUN_005c4490();
  FUN_005c31f0(extraout_ECX_27,extraout_EDX_31);
  FUN_00954170();
  return;
}

