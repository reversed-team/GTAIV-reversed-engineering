
/* 0x6A5AE0 */

LRESULT WinMain(HWND m_HWnd,uint param_2,WPARAM param_3,uint param_4)

{
  undefined1 *puVar1;
  LRESULT LVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  short sVar7;
  tagRECT m_Rect;
  short sVar6;
  
  uVar4 = param_4;
  if (DAT_018b8038 != (code *)0x0) {
    param_4 = 0;
    LVar2 = (*DAT_018b8038)(m_HWnd,param_2,param_3,uVar4,&param_4);
    if (param_4 != 0) {
      return LVar2;
    }
  }
  GetClientRect(m_HWnd,&m_Rect);
  sVar5 = (short)uVar4;
  sVar6 = (short)(uVar4 >> 0x10);
  if (0x200 < param_2) {
    sVar7 = (short)(param_3 >> 0x10);
    switch(param_2) {
    case 0x201:
      DAT_018b7a74 = DAT_018b7a74 | 1;
      if (DAT_018b7a5e == '\0') {
        DAT_018b7a80 = (sVar5 * DAT_017accec) / m_Rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / m_Rect.bottom;
      }
      FUN_006a5aa0(m_HWnd);
      return 0;
    case 0x202:
      DAT_018b7a74 = DAT_018b7a74 & 0xfffffffe;
      if (DAT_018b7a5e == '\0') {
        DAT_018b7a80 = (sVar5 * DAT_017accec) / m_Rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / m_Rect.bottom;
      }
      DAT_01bb394c = DAT_01bb394c + -1;
      if (DAT_01bb394c == 0) {
        ReleaseCapture();
        return 0;
      }
      break;
    default:
switchD_006a5b51_caseD_1d:
      param_4 = 0;
      iVar3 = DAT_01bb3948;
      if (0 < DAT_01bb3948) {
        do {
          if ((&DAT_01bb3950)[param_4] == param_2) {
            (**(code **)(*(int *)(&DAT_01bb3960)[param_4] + 4))(m_HWnd,param_2,param_3,uVar4);
            iVar3 = DAT_01bb3948;
          }
          param_4 = param_4 + 1;
        } while ((int)param_4 < iVar3);
      }
LAB_006a5b6b:
      iVar3 = IsWindowUnicode(m_HWnd);
LAB_006a5b74:
      if (iVar3 == 0) {
        LVar2 = DefWindowProcA(m_HWnd,param_2,param_3,uVar4);
        return LVar2;
      }
      LVar2 = DefWindowProcW(m_HWnd,param_2,param_3,uVar4);
      return LVar2;
    case 0x204:
      DAT_018b7a74 = DAT_018b7a74 | 2;
      if (DAT_018b7a5e == '\0') {
        DAT_018b7a80 = (sVar5 * DAT_017accec) / m_Rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / m_Rect.bottom;
      }
      FUN_006a5aa0(m_HWnd);
      return 0;
    case 0x205:
      DAT_018b7a74 = DAT_018b7a74 & 0xfffffffd;
      if (DAT_018b7a5e == '\0') {
        DAT_018b7a80 = (sVar5 * DAT_017accec) / m_Rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / m_Rect.bottom;
      }
      DAT_01bb394c = DAT_01bb394c + -1;
      if (DAT_01bb394c == 0) {
        ReleaseCapture();
        return 0;
      }
      break;
    case 0x207:
      DAT_018b7a74 = DAT_018b7a74 | 4;
      if (DAT_018b7a5e == '\0') {
        DAT_018b7a80 = (sVar5 * DAT_017accec) / m_Rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / m_Rect.bottom;
      }
      FUN_006a5aa0(m_HWnd);
      return 0;
    case 0x208:
      DAT_018b7a74 = DAT_018b7a74 & 0xfffffffb;
      if (DAT_018b7a5e == '\0') {
        DAT_018b7a80 = (sVar5 * DAT_017accec) / m_Rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / m_Rect.bottom;
      }
      DAT_01bb394c = DAT_01bb394c + -1;
      if (DAT_01bb394c == 0) {
        ReleaseCapture();
        return 0;
      }
      break;
    case 0x20a:
      DAT_018b7a7c = DAT_018b7a7c + (int)sVar7 / 0x78;
      return 0;
    case 0x20b:
      if (sVar7 == 1) {
        DAT_018b7a74 = DAT_018b7a74 | 8;
      }
      else {
        if (sVar7 != 2) goto LAB_006a5d45;
        DAT_018b7a74 = DAT_018b7a74 | 0x10;
      }
      if (DAT_018b7a5e == '\0') {
        DAT_018b7a80 = (sVar5 * DAT_017accec) / m_Rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / m_Rect.bottom;
      }
LAB_006a5d45:
      FUN_006a5aa0(m_HWnd);
      return 1;
    case 0x20c:
      if (sVar7 == 1) {
        DAT_018b7a74 = DAT_018b7a74 & 0xfffffff7;
      }
      else {
        if (sVar7 != 2) goto LAB_006a5dae;
        DAT_018b7a74 = DAT_018b7a74 & 0xffffffef;
      }
      if (DAT_018b7a5e == '\0') {
        DAT_018b7a80 = (sVar5 * DAT_017accec) / m_Rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / m_Rect.bottom;
      }
LAB_006a5dae:
      DAT_01bb394c = DAT_01bb394c + -1;
      if (DAT_01bb394c == 0) {
        ReleaseCapture();
      }
      return 1;
    case 0x215:
      DAT_018b7a74 = 0;
      DAT_01bb394c = 0;
      return 0;
    case 0x281:
      iVar3 = IsWindowUnicode(m_HWnd);
      uVar4 = 0;
      goto LAB_006a5b74;
    }
switchD_006a5b51_caseD_102:
    return 0;
  }
  if (param_2 == 0x200) {
    if (DAT_018b7a5e != '\0') {
      return 0;
    }
    DAT_018b7a80 = (sVar5 * DAT_017accec) / m_Rect.right;
    DAT_018b7a8c = (sVar6 * DAT_017accdc) / m_Rect.bottom;
    return 0;
  }
  switch(param_2) {
  case 0x1c:
    if (param_3 != 0) {
      FUN_0069ebc0();
    }
    break;
  default:
    goto switchD_006a5b51_caseD_1d;
  case 0x101:
  case 0x105:
    if ((uVar4 & 0x1000000) == 0) {
      uVar4 = uVar4 >> 0x10 & 0xff;
    }
    else {
      uVar4 = FUN_006a59b0(uVar4);
    }
    if (DAT_018b7dac == 0) {
      *(undefined1 *)((int)&DAT_018b7c90 + uVar4) = 0;
    }
    if ((uVar4 == 0x2a) || (uVar4 == 0x36)) {
      DAT_018b7a7b = 0;
    }
    return 0;
  case 0x102:
    goto switchD_006a5b51_caseD_102;
  case 0x104:
    if (param_3 == 0x73) {
      SendMessageA(m_HWnd,0x10,0,0);
    }
    else if (param_3 == 0x10) {
      iVar3 = IsWindowUnicode(m_HWnd);
      goto LAB_006a5b74;
    }
  case 0x100:
    if ((uVar4 & 0x1000000) == 0) {
      uVar4 = uVar4 >> 0x10 & 0xff;
    }
    else {
      uVar4 = FUN_006a59b0(uVar4);
    }
    if (DAT_018b7dac == 0) {
      *(undefined1 *)((int)&DAT_018b7c90 + uVar4) = 0x80;
    }
    if ((DAT_018b7da4 != '\0') && (DAT_018b7da8 < 0x10)) {
      (&DAT_018b7d90)[DAT_018b7da8] = (char)uVar4;
      puVar1 = &DAT_018b7d91 + DAT_018b7da8;
      DAT_018b7da8 = DAT_018b7da8 + 1;
      *puVar1 = 0;
    }
    if ((uVar4 == 0x2a) || (uVar4 == 0x36)) {
      DAT_018b7a7b = 1;
    }
    return 0;
  }
  goto LAB_006a5b6b;
}

