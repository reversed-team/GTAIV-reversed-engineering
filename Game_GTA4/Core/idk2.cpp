
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 0x5B05E0 */

void __fastcall FEHelpMenu(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined *IsAController;
  float *pfVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 extraout_ECX;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 uVar11;
  undefined4 local_20 [2];
  undefined4 local_18 [2];
  undefined4 local_10 [3];
  char *Input;
  char *Text;
  
  DAT_011609e8 = 0;
  IsAController = FUN_008f69d0();
  bVar3 = FUN_008b9600();
  if (bVar3) {
    if ((DAT_01176764 & 0x10) != 0) {
      if (((IsAController[0x328d] == '\0') && (DAT_01160c3d == '\0')) &&
         (cVar4 = FUN_0059db00(), cVar4 == '\0')) {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
    }
    if ((DAT_01176764 & 0x20) != 0) {
      if (((IsAController[0x328d] == '\0') && (DAT_01160c3d == '\0')) &&
         (cVar4 = FUN_0059db00(), cVar4 == '\0')) {
        Input = "FE_CANCEL";
        Text = "FE_HLP30";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP30";
      }
      FUN_008b4570(Text,Input,0);
    }
    if ((DAT_01176764 & 0x40) != 0) {
      if (((IsAController[0x328d] == '\0') && (DAT_01160c3d == '\0')) &&
         (cVar4 = FUN_0059db00(), cVar4 == '\0')) {
        Input = "FE_CANCEL";
        Text = "FE_HLP31";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP31";
      }
      FUN_008b4570(Text,Input,0);
    }
    if ((DAT_01176764 & 2) != 0) {
      FUN_008b4570("FE_HLP4","FE_ACCEPT",0);
    }
    if ((DAT_01176764 & 4) != 0) {
      FUN_008b4570("FE_HLP28","FE_ACCEPT",0);
    }
    if ((DAT_01176764 & 8) != 0) {
      FUN_008b4570("FE_HLP29","FE_ACCEPT",0);
    }
    if ((DAT_01176764 & 0x80) != 0) {
      FUN_008b4570("FE_HLP24","FE_BUTY",0);
      FUN_008b6c80();
      return;
    }
    goto switchD_005b078e_caseD_32;
  }
  cVar4 = FUN_008b9590(0);
  if (cVar4 != '\0') {
    switch(DAT_01160c40) {
    case 0:
    case 1:
      if (IsAController[0x328d] == '\0') {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      uVar5 = FUN_008b75e0();
      if (CONCAT31(extraout_var,uVar5) == 1) {
        Input = "FE_BUTL";
        Text = "FE_HLP7";
      }
      else {
        Input = "FE_ACCEPT";
        Text = "FE_HLP4";
      }
      FUN_008b4570(Text,Input,0);
      FUN_008b4570("FE_HLP1","FE_BUTU",0);
      FUN_008b6c80();
      return;
    case 2:
      if (IsAController[0x328d] == '\0') {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      cVar4 = FUN_0047c2e0(extraout_ECX,extraout_DX);
      if ((cVar4 == '\0') || (DAT_011db248 == '\0')) {
        if (DAT_011609d6 == '\0') {
          Input = "FE_ACCEPT";
          Text = "FE_HLP36";
        }
        else {
          Input = "FE_ACCEPT";
          Text = "FE_HLP37";
        }
        FUN_008b4570(Text,Input,0);
      }
      if ((DAT_011609d5 != '\0') || (DAT_011609dc < 0.0)) {
        FUN_008b4570("FE_HLP5","FE_BUTLUD",0);
        FUN_008b6c80();
        return;
      }
      break;
    case 3:
      if (IsAController[0x328d] == '\0') {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      if (DAT_011e622f == '\0') {
        bVar3 = FUN_00905790(DAT_01160c4c);
        if (bVar3) {
          Input = "FE_ACCEPT";
          Text = "FE_HLP11";
        }
        else {
          Input = "FE_ACCEPT";
          Text = "FE_HLP10";
        }
        FUN_008b4570(Text,Input,0);
        if (*(char *)(param_1 + 2) == '\0') {
          if (IsAController[0x328d] == '\0') {
            Input = "FE_BUTY";
            Text = "FE_HLP12";
          }
          else {
            Input = "FE_TAB";
            Text = "FE_HLP12";
          }
        }
        else if (IsAController[0x328d] == '\0') {
          Input = "FE_BUTY";
          Text = "FE_HLP13";
        }
        else {
          Input = "FE_TAB";
          Text = "FE_HLP13";
        }
        FUN_008b4570(Text,Input,0);
      }
      if (IsAController[0x328d] == '\0') {
        Input = "FE_BUTLU";
        Text = "FE_HLP1";
      }
      else {
        Input = "FE_MOUSE";
        Text = "FE_HLP1";
      }
      FUN_008b4570(Text,Input,1);
      if (IsAController[0x328d] == '\0') {
        Input = "FE_BUTLT";
        Text = "FE_HLP9";
      }
      else {
        Input = "FE_WHEEL";
        Text = "FE_HLP9";
      }
      FUN_008b4570(Text,Input,0);
      if (*(char *)(param_1 + 2) != '\0') {
        iVar8 = FUN_008b9020(local_20,0x4b);
        fVar1 = *(float *)(iVar8 + 4);
        iVar10 = DAT_0118f4c0 + 1;
        iVar8 = FUN_008b9020(local_18,0x48);
        fVar2 = *(float *)(iVar8 + 4);
        pfVar6 = (float *)FUN_008b9020(local_10,0x16);
        if (*pfVar6 <= fVar2 + fVar1 * (float)iVar10) {
          if (IsAController[0x328d] != '\0') {
            FUN_008b4570("FE_HLP6","FE_BUTU",0);
            FUN_008b6c80();
            return;
          }
          FUN_008b4570("FE_HLP6","FE_BUTRU",0);
          FUN_008b6c80();
          return;
        }
      }
      break;
    case 4:
      if (IsAController[0x328d] == '\0') {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      FUN_008b4570("FE_HLP1","FE_BUTU",0);
      iVar8 = FUN_008cce00(DAT_01160c0c);
      if (-1 < iVar8) {
        if (iVar8 < 8) {
          if (IsAController[0x328d] != '\0') {
            FUN_008b4570("FE_HLP5","FE_WHEEL",0);
            FUN_008b6c80();
            return;
          }
          FUN_008b4570("FE_HLP5","FE_BUTRU",0);
          FUN_008b6c80();
          return;
        }
        if (iVar8 == 8) {
          FUN_008b4570("FE_HLP4","FE_ACCEPT",0);
          FUN_008b6c80();
          return;
        }
      }
      break;
    case 5:
    case 0x3b:
    case 0x47:
    case 0x48:
      if (IsAController[0x328d] == '\0') {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      uVar5 = FUN_008b75e0();
      if (CONCAT31(extraout_var_01,uVar5) == 1) {
        Input = "FE_BUTL";
        Text = "FE_HLP7";
      }
      else {
        Input = "FE_ACCEPT";
        Text = "FE_HLP4";
      }
      FUN_008b4570(Text,Input,0);
      FUN_008b4570("FE_HLP1","FE_BUTU",0);
      FUN_008b6c80();
      return;
    default:
      if (((IsAController[0x328d] == '\0') && (DAT_01160c3d == '\0')) &&
         (cVar4 = FUN_0059db00(), cVar4 == '\0')) {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      FUN_008b4570("FE_HLP4","FE_ACCEPT",0);
      FUN_008b4570("FE_HLP1","FE_BUTU",0);
      FUN_008b6c80();
      return;
    case 7:
    case 0x3c:
      if (IsAController[0x328d] == '\0') {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      FUN_008b4570("FE_HLP7","FE_BUTL",0);
      FUN_008b4570("FE_HLP1","FE_BUTU",0);
      FUN_008b6c80();
      return;
    case 8:
    case 0x3d:
      if (IsAController[0x328d] == '\0') {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      uVar5 = FUN_008b75e0();
      if (CONCAT31(extraout_var_00,uVar5) == 1) {
        Input = "FE_BUTL";
        Text = "FE_HLP7";
      }
      else {
        Input = "FE_ACCEPT";
        Text = "FE_HLP4";
      }
      FUN_008b4570(Text,Input,0);
      FUN_008b4570("FE_HLP1","FE_BUTU",0);
      FUN_008b6c80();
      return;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
      if (IsAController[0x328d] == '\0') {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      FUN_008b4570("FE_HLP4","FE_ACCEPT",0);
      FUN_008b4570("FE_HLP5","FE_BUTUL",0);
      FUN_008b6c80();
      return;
    case 0x17:
    case 0x18:
      iVar8 = FUN_004d2d20();
      if (IsAController[0x328d] == '\0') {
        Input = "FE_CANCEL";
        Text = "FE_HLP27";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      FUN_008b4570("FE_HLP17","FE_ACCEPT",0);
      FUN_008b4570("FE_HLP18","FE_BUTX",0);
      if (DAT_011d6fd4 == 0) {
        uVar5 = 1;
        if (iVar8 < 10) {
          Input = "FE_BUTLB";
          Text = "FE_HLP40";
        }
        else {
          FUN_008b4570("FE_HLP25","FE_BUTY",1);
          if (DAT_011d6fd4 != 0) goto LAB_005b0f85;
          uVar5 = 0;
          Input = "FE_BUTLB";
          Text = "FE_HLP40";
        }
        FUN_008b4570(Text,Input,uVar5);
        uVar5 = 0;
        Input = "FE_BUTUL";
        Text = "FE_HLP5";
      }
      else {
LAB_005b0f85:
        uVar5 = 1;
        Input = "FE_BUTUL";
        Text = "FE_HLP5";
      }
      FUN_008b4570(Text,Input,uVar5);
      if (IsAController[0x328d] == '\0') {
        Input = "FE_BUTRA";
        Text = "FE_HLP24";
      }
      else {
        Input = "MS_MOUSE_RMB";
        Text = "FE_HLP24";
      }
      FUN_008b4570(Text,Input,0);
      if (IsAController[0x328d] == '\0') {
        FUN_008b4570("FE_HLP9","FE_BUTLT",0);
        FUN_008b6c80();
        return;
      }
      if (0.5 < (float)DAT_Test * _DAT_017acce8) {
        FUN_008b4570("FE_HLP9","FE_WHEEL",0);
        FUN_008b6c80();
        return;
      }
      break;
    case 0x19:
    case 0x1a:
      if (IsAController[0x328d] == '\0') {
        Input = "FE_CANCEL";
        Text = "FE_HLP27";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      FUN_008b4570("FE_HLP17","FE_ACCEPT",0);
      FUN_008b4570("FE_HLP26","FE_BUTY",0);
      FUN_008b4570("FE_HLP5","FE_BUTUL",1);
      if (IsAController[0x328d] == '\0') {
        Input = "FE_BUTRA";
        Text = "FE_HLP24";
      }
      else {
        Input = "MS_MOUSE_RMB";
        Text = "FE_HLP24";
      }
      FUN_008b4570(Text,Input,0);
      if (IsAController[0x328d] == '\0') {
        FUN_008b4570("FE_HLP9","FE_BUTLT",0);
        FUN_008b6c80();
        return;
      }
      if (0.5 < (float)DAT_Test * _DAT_017acce8) {
        FUN_008b4570("FE_HLP9","FE_WHEEL",0);
        FUN_008b6c80();
        return;
      }
      break;
    case 0x1b:
      if (IsAController[0x328d] == '\0') {
        Input = "FE_CANCEL";
        Text = "FE_HLP27";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      FUN_008b4570("FE_HLP17","FE_ACCEPT",0);
      FUN_008b4570("FE_HLP26","FE_BUTLB",0);
      FUN_008b4570("FE_HLP5","FE_BUTUL",1);
      if (IsAController[0x328d] == '\0') {
        Input = "FE_BUTRA";
        Text = "FE_HLP24";
      }
      else {
        Input = "MS_MOUSE_RMB";
        Text = "FE_HLP24";
      }
      FUN_008b4570(Text,Input,0);
      if (IsAController[0x328d] == '\0') {
        FUN_008b4570("FE_HLP9","FE_BUTLT",0);
        FUN_008b6c80();
        return;
      }
      if (0.5 < (float)DAT_Test * _DAT_017acce8) {
        FUN_008b4570("FE_HLP9","FE_WHEEL",0);
        FUN_008b6c80();
        return;
      }
      break;
    case 0x31:
    case 0x3e:
      if (IsAController[0x328d] == '\0') {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      if (IsAController[0x328d] == '\0') {
        Input = "FE_BUTY";
        Text = "FE_APPLY";
      }
      else {
        Input = "FE_SPACE";
        Text = "FE_APPLY";
      }
      FUN_008b4570(Text,Input,0);
      uVar5 = FUN_008b75e0();
      if (CONCAT31(extraout_var_02,uVar5) == 1) {
        Input = "FE_BUTL";
        Text = "FE_HLP7";
      }
      else {
        Input = "FE_ACCEPT";
        Text = "FE_HLP4";
      }
      FUN_008b4570(Text,Input,0);
      FUN_008b4570("FE_HLP1","FE_BUTU",0);
      FUN_008b6c80();
      return;
    case 0x32:
      break;
    case 0x39:
      if (IsAController[0x328d] != '\0') {
        FUN_008b4570("MO_BENCH_EXIT","PAD_START",0);
        FUN_008b4570("FE_HLP5","FE_WHEEL",0);
        FUN_008b6c80();
        return;
      }
      FUN_008b4570("MO_BENCH_EXIT","FE_CANCEL",0);
      FUN_008b4570("FE_HLP5","FE_BUTRU",0);
      FUN_008b6c80();
      return;
    case 0x3a:
      if (IsAController[0x328d] == '\0') {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      FUN_008b4570("FE_HLP4","FE_ACCEPT",0);
      FUN_008b4570("FE_HLP1","FE_BUTU",0);
      FUN_008b6c80();
      return;
    case 0x3f:
      if (IsAController[0x328d] == '\0') {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      FUN_008b4570("FE_HLP1","FE_BUTU",0);
      FUN_008b6c80();
      return;
    case 0x40:
      if (((IsAController[0x328d] == '\0') && (DAT_01160c3d == '\0')) &&
         (cVar4 = FUN_0059db00(), cVar4 == '\0')) {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      iVar8 = FUN_00db56f0(&DAT_01981a4c,"UIMontageClips");
      if ((iVar8 != 0) && (uVar7 = FUN_00e4dc30(iVar8), (char)uVar7 != '\0')) {
        FUN_008b4570("MO_DELETE_VE","MO_DELETE",0);
        FUN_008b6c80();
        return;
      }
      break;
    case 0x41:
      if (DAT_018b6c98 != 0) {
        if (((*(int *)(DAT_018b6c98 + 0x1e8) != 0) || (uVar9 = FUN_0059e060(), (char)uVar9 == '\0'))
           || ((uVar9 = FUN_0059e0f0(), (char)uVar9 == '\0' &&
               (uVar9 = FUN_0059e0a0(), (char)uVar9 == '\0')))) {
          if (((IsAController[0x328d] == '\0') && (DAT_01160c3d == '\0')) &&
             (cVar4 = FUN_0059db00(), cVar4 == '\0')) {
            Input = "FE_CANCEL";
            Text = "FE_HLP3";
          }
          else {
            Input = "PAD_START";
            Text = "FE_HLP3";
          }
          FUN_008b4570(Text,Input,0);
        }
        if (DAT_018b6c98 != 0) {
          if (*(int *)(DAT_018b6c98 + 0x1e8) != 0) {
            FUN_008b4570("MO_DELETE_VE","MO_DELETE",1);
            FUN_008b6c80();
            return;
          }
          FUN_008b4570("FE_HLP46","FE_SAVE",0);
          FUN_008b4570("FE_HLP45","FE_PREVIEW",0);
          uVar9 = FUN_0059e060();
          if ((char)uVar9 != '\0') {
            uVar9 = FUN_0059e0f0();
            if ((char)uVar9 != '\0') {
              FUN_008b4570("MO_PASTE","FE_PASTE_VE",1);
              if (((IsAController[0x328d] == '\0') && (DAT_01160c3d == '\0')) &&
                 (cVar4 = FUN_0059db00(), cVar4 == '\0')) {
                FUN_008b4570("MO_CANCEL_CUT","FE_CANCEL",0);
                FUN_008b6c80();
                return;
              }
              FUN_008b4570("MO_CANCEL_CUT","PAD_START",0);
              FUN_008b6c80();
              return;
            }
            uVar9 = FUN_0059e0a0();
            if ((char)uVar9 == '\0') {
              FUN_008b4570("MO_EDITVID","FE_ACCEPT",1);
              FUN_008b4570("MO_CUT","FE_CUT_VE",0);
              FUN_008b4570("MO_COPY","FE_COPY_VE",0);
              FUN_008b4570("MO_DELETE_VE","MO_DELETE",1);
              FUN_008b4570("MO_SET_THUMB","MO_U",0);
              FUN_008b6c80();
              return;
            }
            FUN_008b4570("MO_PASTE","FE_PASTE_VE",1);
            if (((IsAController[0x328d] == '\0') && (DAT_01160c3d == '\0')) &&
               (cVar4 = FUN_0059db00(), cVar4 == '\0')) {
              FUN_008b4570("MO_CANCEL_COPY","FE_CANCEL",0);
              FUN_008b6c80();
              return;
            }
            FUN_008b4570("MO_CANCEL_COPY","PAD_START",0);
            FUN_008b6c80();
            return;
          }
          if (((*(int *)(DAT_018b6c98 + 0x1e0) != 0) &&
              (iVar8 = *(int *)(*(int *)(DAT_018b6c98 + 0x1e0) + 500), iVar8 != 0)) &&
             (uVar7 = FUN_00df68b0(iVar8), (char)uVar7 != '\0')) {
            FUN_008b4570("MO_DELETE_VE","MO_DELETE",1);
            FUN_008b6c80();
            return;
          }
          uVar9 = FUN_0059e140();
          if ((char)uVar9 != '\0') {
            FUN_008b4570("MO_DELETE_VE","MO_DELETE",1);
            FUN_008b4570("MO_NUDGE_SONG","FE_BUTL",0);
            FUN_008b6c80();
            return;
          }
          if (((*(int *)(DAT_018b6c98 + 0x1e4) != 0) &&
              (iVar8 = *(int *)(*(int *)(DAT_018b6c98 + 0x1e4) + 0x1e8), iVar8 != 0)) &&
             (iVar8 = FUN_00ddc660(iVar8), iVar8 != 0)) {
            FUN_008b4570("MO_DELETE_VE","MO_DELETE",1);
            FUN_008b4570("MO_NUDGE_TEXT","FE_BUTL",0);
            FUN_008b6c80();
            return;
          }
        }
      }
      break;
    case 0x42:
      if (((IsAController[0x328d] == '\0') && (DAT_01160c3d == '\0')) &&
         (cVar4 = FUN_0059db00(), cVar4 == '\0')) {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      iVar8 = FUN_00db56f0(&DAT_01981a4c,"UIMontageGallery");
      if ((iVar8 != 0) && (uVar9 = FUN_00e4c900(iVar8), (char)uVar9 != '\0')) {
        FUN_008b4570("FE_HLP1","FE_BUTU",0);
        FUN_008b4570("MO_DELETE_VE","MO_DELETE",1);
        FUN_008b6c80();
        return;
      }
      break;
    case 0x45:
      if ((DAT_019d2e01 & 0x10) != 0) {
        if (IsAController[0x328d] == '\0') {
          Input = "FE_CANCEL";
          Text = "FE_HLP27";
        }
        else {
          Input = "PAD_START";
          Text = "FE_HLP27";
        }
        FUN_008b4570(Text,Input,0);
        FUN_008b4570("FE_HLP50","FE_SAVE",0);
        FUN_008b6c80();
        return;
      }
      if (IsAController[0x328d] == '\0') {
        Input = "FE_CANCEL";
        Text = "FE_HLP3";
      }
      else {
        Input = "PAD_START";
        Text = "FE_HLP3";
      }
      FUN_008b4570(Text,Input,0);
      FUN_008b4570("FE_HLP4","FE_ACCEPT",0);
      if (IsAController[0x328d] == '\0') {
        FUN_008b4570("FE_HLP5","FE_BUTRU",1);
      }
      else {
        FUN_008b4570("FE_HLP48","FE_SPACE",0);
        FUN_008b4570("FE_HLP5","FE_WHEEL",1);
      }
      FUN_008b4570("FE_HLP1","FE_BUTU",0);
      FUN_008b6c80();
      return;
    case 0x46:
      if (IsAController[0x328d] != '\0') {
        FUN_008b4570("FE_HLP3","PAD_START",0);
        FUN_008b4570("FE_HLP39","FE_BUTL",0);
        FUN_008b6c80();
        return;
      }
      FUN_008b4570("FE_HLP3","FE_CANCEL",0);
      FUN_008b4570("FE_HLP39","FE_BUTRL",0);
      FUN_008b6c80();
      return;
    }
    goto switchD_005b078e_caseD_32;
  }
  switch(DAT_01160c40) {
  case 2:
    if (IsAController[0x328d] == '\0') {
      Input = "FE_CANCEL";
      Text = "FE_HLP3";
    }
    else {
      Input = "PAD_START";
      Text = "FE_HLP3";
    }
    FUN_008b4570(Text,Input,0);
    FUN_008b4570("FE_HLP4","FE_ACCEPT",0);
    FUN_008b4570("FE_HLP1","FE_BUTL",1);
    if (IsAController[0x328d] == '\0') {
      if (DAT_018e51cd == '\0') {
        FUN_008b4570("FE_HLP5","FE_BUTRU",0);
        FUN_008b6c80();
        return;
      }
    }
    else if (DAT_018e51cd == '\0') {
      FUN_008b4570("FE_HLP5","FE_WHEEL",0);
      FUN_008b6c80();
      return;
    }
    break;
  default:
    if (IsAController[0x328d] == '\0') {
      Input = "FE_CANCEL";
      Text = "FE_HLP3";
    }
    else {
      Input = "PAD_START";
      Text = "FE_HLP3";
    }
    FUN_008b4570(Text,Input,0);
    FUN_008b4570("FE_HLP4","FE_ACCEPT",0);
    FUN_008b4570("FE_HLP1","FE_BUTL",0);
    break;
  case 8:
    if (IsAController[0x328d] == '\0') {
      Input = "FE_CANCEL";
      Text = "FE_HLP3";
    }
    else {
      Input = "PAD_START";
      Text = "FE_HLP3";
    }
    FUN_008b4570(Text,Input,0);
    FUN_008b4570("FE_HLP4","FE_ACCEPT",0);
    FUN_008b4570("FE_HLP1","FE_BUTL",0);
    FUN_008b6c80();
    return;
  case 0xe:
  case 0xf:
    if (IsAController[0x328d] == '\0') {
      Input = "FE_CANCEL";
      Text = "FE_HLP3";
    }
    else {
      Input = "PAD_START";
      Text = "FE_HLP3";
    }
    FUN_008b4570(Text,Input,0);
    FUN_008b4570("FE_HLP4","FE_ACCEPT",0);
    FUN_008b4570("FE_HLP1","FE_BUTU",0);
    FUN_008b6c80();
    return;
  case 0x16:
    if (IsAController[0x328d] == '\0') {
      Input = "FE_CANCEL";
      Text = "FE_HLP3";
    }
    else {
      Input = "PAD_START";
      Text = "FE_HLP3";
    }
    FUN_008b4570(Text,Input,0);
    if (*(char *)(param_1 + 0x16) != '\0') {
      FUN_008b4570("FE_HLP42","FE_BUTRB",0);
      FUN_008b6c80();
      return;
    }
    FUN_008b4570("FE_HLP19","FE_ACCEPT",0);
    if (*(char *)(DAT_018b6e84 + 0x3ce) == '\0') {
      Input = "FE_BUTY";
      Text = "FE_HLP21";
LAB_005b18df:
      FUN_008b4570(Text,Input,0);
      uVar11 = extraout_DX_01;
    }
    else {
      uVar11 = extraout_DX_00;
      if (*(char *)(DAT_018b6e84 + 0x3ce) == '\x01') {
        Input = "FE_BUTY";
        Text = "FE_HLP33";
        goto LAB_005b18df;
      }
    }
    bVar3 = FUN_008f7c00(0x118d7f0,uVar11);
    if (bVar3) {
      if (*(char *)(DAT_018b6e84 + 0x3ce) == '\0') {
        FUN_008b4570("FE_HLP20","FE_BUTX",0);
      }
      if (*(char *)(param_1 + 0x15) == '\0') {
        Input = "FE_BUTUL";
        Text = "FE_HLP5";
      }
      else {
        Input = "FE_BUTU";
        Text = "FE_HLP5";
      }
    }
    else {
      if (*(char *)(DAT_018b6e84 + 0x3ce) == '\0') {
        FUN_008b4570("FE_HLP20","FE_BUTX",0);
      }
      if (*(char *)(param_1 + 0x15) == '\0') {
        Input = "FE_BUTUL";
        Text = "FE_HLP5";
      }
      else {
        Input = "FE_BUTU";
        Text = "FE_HLP5";
      }
    }
    FUN_008b4570(Text,Input,1);
    if (IsAController[0x328d] == '\0') {
      Input = "FE_BUTLT";
      Text = "FE_HLP23";
    }
    else {
      Input = "FE_WHEEL";
      Text = "FE_HLP23";
    }
    FUN_008b4570(Text,Input,0);
    FUN_008b4570("FE_HLP41","FE_BUTRB",0);
    if (*(char *)(DAT_018b6e84 + 0x3ce) == '\0') {
      FUN_008b4570("FE_HLP22","FE_BUTLB",0);
      FUN_008b6c80();
      return;
    }
    if (*(char *)(DAT_018b6e84 + 0x3ce) == '\x02') {
      FUN_008b4570("FE_HLP33","FE_BUTLB",0);
      FUN_008b6c80();
      return;
    }
    break;
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    if (IsAController[0x328d] == '\0') {
      Input = "FE_CANCEL";
      Text = "FE_HLP16";
    }
    else {
      Input = "PAD_START";
      Text = "FE_HLP3";
    }
    FUN_008b4570(Text,Input,0);
    FUN_008b4570("FE_HLP4","FE_ACCEPT",0);
    FUN_008b6c80();
    return;
  case 0x39:
    if (DAT_018b6e83 == '\0') {
      if (IsAController[0x328d] != '\0') {
        FUN_008b4570("MO_BENCH_EXIT","PAD_START",0);
        FUN_008b4570("FE_HLP5","FE_WHEEL",0);
        FUN_008b6c80();
        return;
      }
      FUN_008b4570("MO_BENCH_EXIT","FE_CANCEL",0);
      FUN_008b4570("FE_HLP5","FE_BUTRU",0);
      FUN_008b6c80();
      return;
    }
  }
switchD_005b078e_caseD_32:
  FUN_008b6c80();
  return;
}

