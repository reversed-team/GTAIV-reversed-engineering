#include <WinIncl.h>

// 0x6A5AE0
LRESULT MainWindowProc(HWND window,UINT message,WPARAM WParam,LPARAM LParam)
{
  undefined1 *puVar1;
  LRESULT LVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  short sVar7;
  LPARAM lParam;
  RECT rect;
  short sVar6;
  
  lParam = LParam;
  if (DAT_018b8038 != (code *)0x0) {
    LParam = 0;
    LVar2 = (*DAT_018b8038)(window,message,WParam,lParam,&LParam);
    if (LParam != 0) {
      return LVar2;
    }
  }
  GetClientRect(window,&rect);
  sVar5 = (short)lParam;
  sVar6 = (short)((uint)lParam >> 0x10);
  if (0x200 < message) {
    sVar7 = (short)(WParam >> 0x10);
    switch(message) {
    case 0x201:
      DAT_018b7a74 = DAT_018b7a74 | 1;
      if (DAT_018b7a5e == '\0') {
        DAT_Test = (sVar5 * DAT_017accec) / rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / rect.bottom;
      }
      FUN_006a5aa0(window);
      return 0;
    case 0x202:
      DAT_018b7a74 = DAT_018b7a74 & 0xfffffffe;
      if (DAT_018b7a5e == '\0') {
        DAT_Test = (sVar5 * DAT_017accec) / rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / rect.bottom;
      }
      DAT_01bb394c = DAT_01bb394c + -1;
      if (DAT_01bb394c == 0) {
        ReleaseCapture();
        return 0;
      }
      break;
    default:
switchD_006a5b51_caseD_1d:
      LParam = 0;
      iVar3 = DAT_01bb3948;
      if (0 < DAT_01bb3948) {
        do {
          if ((&DAT_01bb3950)[LParam] == message) {
            (**(code **)(*(int *)(&DAT_01bb3960)[LParam] + 4))(window,message,WParam,lParam);
            iVar3 = DAT_01bb3948;
          }
          LParam = LParam + 1;
        } while (LParam < iVar3);
      }
LAB_006a5b6b:
      iVar3 = IsWindowUnicode(window);
LAB_006a5b74:
      if (iVar3 == 0) {
        LVar2 = DefWindowProcA(window,message,WParam,lParam);
        return LVar2;
      }
      LVar2 = DefWindowProcW(window,message,WParam,lParam);
      return LVar2;
    case 0x204:
      DAT_018b7a74 = DAT_018b7a74 | 2;
      if (DAT_018b7a5e == '\0') {
        DAT_Test = (sVar5 * DAT_017accec) / rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / rect.bottom;
      }
      FUN_006a5aa0(window);
      return 0;
    case 0x205:
      DAT_018b7a74 = DAT_018b7a74 & 0xfffffffd;
      if (DAT_018b7a5e == '\0') {
        DAT_Test = (sVar5 * DAT_017accec) / rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / rect.bottom;
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
        DAT_Test = (sVar5 * DAT_017accec) / rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / rect.bottom;
      }
      FUN_006a5aa0(window);
      return 0;
    case 0x208:
      DAT_018b7a74 = DAT_018b7a74 & 0xfffffffb;
      if (DAT_018b7a5e == '\0') {
        DAT_Test = (sVar5 * DAT_017accec) / rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / rect.bottom;
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
        DAT_Test = (sVar5 * DAT_017accec) / rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / rect.bottom;
      }
LAB_006a5d45:
      FUN_006a5aa0(window);
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
        DAT_Test = (sVar5 * DAT_017accec) / rect.right;
        DAT_018b7a8c = (sVar6 * DAT_017accdc) / rect.bottom;
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
      iVar3 = IsWindowUnicode(window);
      lParam = 0;
      goto LAB_006a5b74;
    }
switchD_006a5b51_caseD_102:
    return 0;
  }
  if (message == 0x200) {
    if (DAT_018b7a5e != '\0') {
      return 0;
    }
    DAT_Test = (sVar5 * DAT_017accec) / rect.right;
    DAT_018b7a8c = (sVar6 * DAT_017accdc) / rect.bottom;
    return 0;
  }
  switch(message) {
  case 0x1c:
    if (WParam != 0) {
      FUN_0069ebc0();
    }
    break;
  default:
    goto switchD_006a5b51_caseD_1d;
  case 0x101:
  case 0x105:
    if ((lParam & 0x1000000U) == 0) {
      uVar4 = (uint)lParam >> 0x10 & 0xff;
    }
    else {
      uVar4 = FUN_006a59b0(lParam);
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
    if (WParam == 0x73) {
      SendMessageA(window,0x10,0,0);
    }
    else if (WParam == 0x10) {
      iVar3 = IsWindowUnicode(window);
      goto LAB_006a5b74;
    }
  case 0x100:
    if ((lParam & 0x1000000U) == 0) {
      uVar4 = (uint)lParam >> 0x10 & 0xff;
    }
    else {
      uVar4 = FUN_006a59b0(lParam);
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


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 0x6C19F0 */

uint LoadSocialClub(void)

{
  WCHAR WVar1;
  wchar_t wVar2;
  int *piVar3;
  uint uVar4;
  WCHAR *pWVar5;
  int iVar6;
  DWORD DVar7;
  FARPROC pFVar8;
  undefined4 *puVar9;
  wchar_t *pwVar10;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar11;
  byte *pbVar12;
  wchar_t *pwVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char *pcVar16;
  undefined8 uVar17;
  undefined4 uStack_1938;
  undefined2 local_1924 [228];
  undefined4 auStack_175c [3];
  undefined4 auStack_1750 [5];
  undefined4 auStack_173c [2];
  undefined1 auStack_1734 [8];
  undefined1 auStack_172c [36];
  undefined4 uStack_1708;
  undefined4 uStack_1704;
  undefined4 uStack_1700;
  undefined4 uStack_1538;
  undefined4 uStack_c2c;
  undefined4 uStack_c24;
  undefined4 uStack_c20;
  undefined4 auStack_b34 [9];
  undefined1 auStack_b10 [8];
  undefined1 auStack_b08 [4];
  undefined4 uStack_b04;
  undefined4 uStack_b00;
  undefined1 uStack_afc;
  undefined1 uStack_afb;
  undefined1 uStack_afa;
  undefined1 uStack_af8;
  undefined4 uStack_970;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  undefined1 uStack_844;
  undefined1 uStack_840;
  uint uStack_2c;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c19fa;
  local_1924[0] = 0;
  uStack_1938 = local_1924;
  uVar4 = SHGetFolderPathW(0,0x26,0,0);
  if (uVar4 != 0) {
    if (DAT_019f269c == 0) {
      DAT_019f269c = 3;
    }
    goto LAB_006c228b;
  }
  pWVar5 = (WCHAR *)&uStack_1938;
  WVar1 = (WCHAR)uStack_1938;
  while (WVar1 != L'\0') {
    pWVar5 = pWVar5 + 1;
    WVar1 = *pWVar5;
  }
  iVar6 = (int)pWVar5 - (int)&uStack_1938 >> 1;
  iVar11 = 0x103 - iVar6;
  pwVar13 = (wchar_t *)((int)&uStack_1938 + iVar6 * 2);
  pwVar10 = L"\\Rockstar Games\\Social Club\\socialclub.dll";
  do {
    if (iVar11 == 0) break;
    wVar2 = *pwVar10;
    pwVar10 = pwVar10 + 1;
    *pwVar13 = wVar2;
    pwVar13 = pwVar13 + 1;
    iVar11 = iVar11 + -1;
  } while (*pwVar10 != L'\0');
  *pwVar13 = L'\0';
  DVar7 = GetFileAttributesW((LPCWSTR)&uStack_1938);
  if (DVar7 == 0xffffffff) {
    uVar4 = 0xffffffff;
    if (DAT_019f269c == 0) {
      DAT_019f269c = 1;
    }
    goto LAB_006c228b;
  }
  uVar4 = FUN_0087c9a0((short *)&uStack_1938);
  if ((char)uVar4 == '\0') {
    if (DAT_019f269c == 0) {
      DAT_019f269c = 0x10;
    }
    goto LAB_006c228b;
  }
  FUN_006c1570((LPCWSTR)&uStack_1938);
  _DAT_019f266c = LoadLibraryExW((LPCWSTR)&uStack_1938,(HANDLE)0x0,8);
  if (_DAT_019f266c == (HMODULE)0x0) {
    uVar4 = 0;
    if (DAT_019f269c == 0) {
      DAT_019f269c = 4;
    }
    goto LAB_006c228b;
  }
  pFVar8 = GetProcAddress(_DAT_019f266c,(LPCSTR)0x1);
  if (pFVar8 == (FARPROC)0x0) {
    uVar4 = 0;
    if (DAT_019f269c == 0) {
      DAT_019f269c = 5;
    }
    goto LAB_006c228b;
  }
  puVar9 = (undefined4 *)(*pFVar8)();
  if (puVar9 == (undefined4 *)0x0) {
    uVar4 = 0;
    if (DAT_019f269c == 0) {
      DAT_019f269c = 6;
    }
    goto LAB_006c228b;
  }
  iVar6 = (**(code **)*puVar9)(puVar9,&DAT_00fa3698,&DAT_019f262c);
  if ((iVar6 != 0) || (DAT_019f262c == (int *)0x0)) {
    uVar4 = DAT_019f269c;
    if (DAT_019f269c == 0) {
      uVar4 = 7;
      DAT_019f269c = uVar4;
    }
    goto LAB_006c228b;
  }
  switch(DAT_018b8300) {
  default:
    uVar14 = 1;
    break;
  case 1:
    uVar14 = 3;
    break;
  case 2:
    uVar14 = 4;
    break;
  case 3:
    uVar14 = 5;
    break;
  case 4:
    uVar14 = 2;
    break;
  case 5:
    uVar14 = 8;
    break;
  case 6:
    uVar14 = 9;
    break;
  case 7:
    uVar14 = 7;
    break;
  case 8:
    uVar14 = 10;
    break;
  case 9:
    uVar14 = 0xb;
    break;
  case 10:
    uVar14 = 6;
    break;
  case 0xb:
    uVar14 = 0xc;
    break;
  case 0xc:
    uVar14 = 0xd;
  }
  uVar4 = *(uint *)(DAT_018b8320 + 0x24c);
  if (uVar4 == 0xffffffff) {
    uVar4 = *(uint *)(DAT_018b8320 + 0x108);
  }
  switch(uVar4) {
  case 0:
    uVar15 = 0;
    break;
  case 1:
    uVar15 = 1;
    break;
  case 2:
    uVar15 = 2;
    break;
  case 3:
    uVar15 = 3;
    break;
  case 4:
    uVar15 = 4;
    break;
  case 5:
    uVar15 = 5;
    break;
  default:
    if (DAT_019f269c == 0) {
      DAT_019f269c = 8;
    }
    goto LAB_006c228b;
  }
  FUN_006bf7b0(auStack_b34);
  uStack_afc = DAT_0111030c != 0;
  uStack_b04 = DAT_017ad164;
  uStack_b00 = DAT_017ad168;
  uStack_af8 = DAT_01110324 == 0;
  uStack_afb = 0;
  FUN_006bed20((int)auStack_b10,&DAT_019f2eb0);
  FUN_006bed50((int)auStack_b10,&DAT_019f2ef0);
  FUN_006bed80((int)auStack_b10,&DAT_019f2f30);
  uStack_2c = uStack_2c | 0x59;
  uStack_95c = 1;
  uStack_970 = 2;
  uStack_844 = 1;
  uStack_840 = 1;
  uStack_afa = 0;
  uStack_960 = 0;
  FUN_006c0500(auStack_173c);
  FUN_006c00e0((int)auStack_172c,DAT_018b8320);
  FUN_006c0470(auStack_1734,DAT_018b8320);
  uStack_1708 = uVar15;
  FUN_006c0210((int)auStack_172c,DAT_018b8320 + 0x6c);
  pcVar16 = DAT_018b8320;
  FUN_006c0360((int)auStack_172c,*(undefined8 **)(DAT_018b8320 + 100),*(uint *)(DAT_018b8320 + 0x68)
              );
  if (DAT_019f0b48 == '\0') {
    uStack_1538 = 1;
  }
  else {
    uStack_1538 = 2;
    FUN_006c0240((int)auStack_172c,&DAT_019f0be0);
    uStack_c2c = DAT_019f0b58;
    FUN_006c03c0((int)auStack_172c,&DAT_019f0b5c);
    uStack_c24 = DAT_019f0b50;
    uStack_c20 = DAT_019f0b54;
    pcVar16 = DAT_018b8320;
    if (DAT_019f0bde != '\0') {
      uStack_afc = 1;
    }
  }
  uStack_1704 = *(undefined4 *)(pcVar16 + 0x10);
  uStack_1700 = *(undefined4 *)(pcVar16 + 0x14);
  FUN_006c0170((int)auStack_172c,pcVar16 + 0xc5);
  iVar6 = (**(code **)(*DAT_019f262c + 0x20))
                    (DAT_019f262c,auStack_b08,auStack_172c,uVar14,&PTR_PTR_01110334);
  if (iVar6 == 0) {
    puVar9 = (undefined4 *)(**(code **)(*DAT_019f262c + 0x14))(DAT_019f262c);
    if (puVar9 == (undefined4 *)0x0) {
LAB_006c1e7e:
      uVar4 = 10;
      goto LAB_006c1e4d;
    }
    iVar6 = (**(code **)*puVar9)(puVar9,&DAT_00fa3688,&DAT_019f2630);
    if ((iVar6 != 0) || (DAT_019f2630 == 0)) goto LAB_006c2258;
    puVar9 = (undefined4 *)(**(code **)(*DAT_019f262c + 0x10))(DAT_019f262c);
    if (puVar9 == (undefined4 *)0x0) goto LAB_006c1e7e;
    iVar6 = (**(code **)*puVar9)(puVar9,&DAT_00fa3868,&DAT_019f2638);
    if ((iVar6 != 0) || (DAT_019f2638 == 0)) goto LAB_006c2258;
    puVar9 = (undefined4 *)(**(code **)(*DAT_019f262c + 0x48))(DAT_019f262c);
    if (puVar9 == (undefined4 *)0x0) goto LAB_006c1e7e;
    iVar6 = (**(code **)*puVar9)(puVar9,&DAT_00fa3898,&DAT_019f2634);
    if ((iVar6 != 0) || (DAT_019f2634 == (int *)0x0)) goto LAB_006c2258;
    puVar9 = (undefined4 *)(**(code **)(*DAT_019f262c + 0x24))(DAT_019f262c);
    if (puVar9 == (undefined4 *)0x0) goto LAB_006c1e7e;
    iVar6 = (**(code **)*puVar9)(puVar9,&DAT_00fa36d8,&DAT_019f263c);
    if ((iVar6 != 0) || (DAT_019f263c == 0)) goto LAB_006c2258;
    puVar9 = (undefined4 *)(**(code **)(*DAT_019f262c + 0x2c))(DAT_019f262c);
    if (puVar9 == (undefined4 *)0x0) goto LAB_006c1e7e;
    iVar6 = (**(code **)*puVar9)(puVar9,&DAT_00fa3548,&DAT_019f2640);
    if ((iVar6 != 0) || (DAT_019f2640 == 0)) {
LAB_006c2258:
      uVar4 = 7;
      goto LAB_006c1e4d;
    }
    puVar9 = (undefined4 *)(**(code **)(*DAT_019f262c + 0x30))(DAT_019f262c);
    if (puVar9 != (undefined4 *)0x0) {
      iVar6 = (**(code **)*puVar9)(puVar9,&DAT_00fa37d8,&DAT_019f2644);
      if ((iVar6 == 0) && (DAT_019f2644 != 0)) {
        puVar9 = (undefined4 *)(**(code **)(*DAT_019f262c + 0x18))(DAT_019f262c);
        if (puVar9 == (undefined4 *)0x0) goto LAB_006c1e7e;
        iVar6 = (**(code **)*puVar9)(puVar9,&DAT_00fa37c8,&DAT_019f2650);
        if ((iVar6 == 0) && (DAT_019f2650 != 0)) {
          puVar9 = (undefined4 *)(**(code **)(*DAT_019f262c + 0x1c))(DAT_019f262c);
          if (puVar9 == (undefined4 *)0x0) goto LAB_006c1e7e;
          iVar6 = (**(code **)*puVar9)(puVar9,&DAT_00fa3858,&DAT_019f2654);
          if ((iVar6 == 0) && (DAT_019f2654 != (int *)0x0)) {
            (**(code **)(*DAT_019f2654 + 0x58))(DAT_019f2654,1);
            puVar9 = (undefined4 *)(**(code **)(*DAT_019f2654 + 0x30))(DAT_019f2654);
            if (puVar9 == (undefined4 *)0x0) goto LAB_006c1e7e;
            iVar6 = (**(code **)*puVar9)(puVar9,&DAT_00fa3788,&DAT_019f2648);
            if ((iVar6 == 0) && (DAT_019f2648 != 0)) {
              puVar9 = (undefined4 *)(**(code **)(*DAT_019f2654 + 0x34))(DAT_019f2654);
              if (puVar9 == (undefined4 *)0x0) goto LAB_006c1e7e;
              iVar6 = (**(code **)*puVar9)(puVar9,&DAT_00fa35f8,&DAT_019f264c);
              if ((iVar6 == 0) && (DAT_019f264c != 0)) {
                puVar9 = (undefined4 *)(**(code **)(*DAT_019f262c + 0x28))(DAT_019f262c);
                if (puVar9 == (undefined4 *)0x0) goto LAB_006c1e7e;
                iVar6 = (**(code **)*puVar9)(puVar9,&DAT_00fa3708,&DAT_019f2658);
                if ((iVar6 == 0) && (DAT_019f2658 != 0)) {
                  puVar9 = (undefined4 *)(**(code **)(*DAT_019f262c + 0x3c))(DAT_019f262c);
                  if (puVar9 == (undefined4 *)0x0) goto LAB_006c1e7e;
                  iVar6 = (**(code **)*puVar9)(puVar9,&DAT_00fa3658,&DAT_019f265c);
                  if ((iVar6 == 0) && (DAT_019f265c != 0)) {
                    puVar9 = (undefined4 *)(**(code **)(*DAT_019f262c + 0x4c))(DAT_019f262c);
                    if (puVar9 == (undefined4 *)0x0) goto LAB_006c1e7e;
                    iVar6 = (**(code **)*puVar9)(puVar9,&DAT_00fa3558,&DAT_019f2660);
                    if ((iVar6 == 0) && (DAT_019f2660 != 0)) {
                      puVar9 = (undefined4 *)(**(code **)(*DAT_019f262c + 0x50))(DAT_019f262c);
                      if (puVar9 == (undefined4 *)0x0) goto LAB_006c1e7e;
                      iVar6 = (**(code **)*puVar9)(puVar9,&DAT_00fa35b8,&DAT_019f2664);
                      if ((iVar6 == 0) && (DAT_019f2664 != 0)) {
                        puVar9 = (undefined4 *)(**(code **)(*DAT_019f262c + 0x54))(DAT_019f262c);
                        if (puVar9 == (undefined4 *)0x0) goto LAB_006c1e7e;
                        uVar17 = (**(code **)*puVar9)(puVar9,&DAT_00fa3848,&DAT_019f2668);
                        if (((int)uVar17 == 0) && (DAT_019f2668 != 0)) {
                          uVar4 = 0;
                          iVar6 = extraout_ECX;
                          pbVar12 = (byte *)((ulonglong)uVar17 >> 0x20);
                          do {
                            puVar9 = (undefined4 *)FUN_00401210(iVar6,pbVar12);
                            if (puVar9 == (undefined4 *)0x0) {
                              puVar9 = (undefined4 *)0x0;
                            }
                            else {
                              puVar9 = FUN_006bfd30(puVar9);
                            }
                            *(undefined4 **)(&DAT_019f2674 + (int)DAT_019f2684 * 4) = puVar9;
                            piVar3 = *(int **)(&DAT_019f2674 + (int)DAT_019f2684 * 4);
                            iVar6 = 0;
                            if (piVar3 != (int *)0x0) {
                              (**(code **)(*piVar3 + 0x84))(piVar3);
                              (**(code **)(**(int **)(&DAT_019f2674 + (int)DAT_019f2684 * 4) + 0x80)
                              )(*(int **)(&DAT_019f2674 + (int)DAT_019f2684 * 4),uVar4);
                              DAT_019f2684 = DAT_019f2684 + 1;
                              iVar6 = extraout_ECX_00;
                            }
                            uVar4 = uVar4 + 1;
                            pbVar12 = DAT_019f2684;
                          } while (uVar4 < 4);
                          (**(code **)(*DAT_019f2634 + 4))(DAT_019f2634,&DAT_019f2674,DAT_019f2684);
                          uVar14 = FUN_006c0570(auStack_175c);
                          return CONCAT31((int3)((uint)uVar14 >> 8),1);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_006c2258;
    }
  }
  else {
    uVar4 = 9;
LAB_006c1e4d:
    if (DAT_019f269c == 0) {
      DAT_019f269c = uVar4;
    }
  }
  uVar4 = FUN_006c0570(auStack_1750);
LAB_006c228b:
  DAT_019f262c = (int *)0x0;
  DAT_019f2630 = 0;
  DAT_019f2638 = 0;
  DAT_019f263c = 0;
  DAT_019f265c = 0;
  DAT_019f2634 = (int *)0x0;
  DAT_019f2640 = 0;
  DAT_019f2644 = 0;
  DAT_019f2648 = 0;
  DAT_019f264c = 0;
  DAT_019f2650 = 0;
  DAT_019f2658 = 0;
  DAT_019f2660 = 0;
  DAT_019f2664 = 0;
  DAT_019f2668 = 0;
  DAT_019f2654 = (int *)0x0;
  _DAT_019f266c = (HMODULE)0x0;
  return uVar4 & 0xffffff00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 0xC6D980 */

bool LoadD3D9(void)

{
  if (hModule_016dd5d4 != (HMODULE)0x0) {
    return true;
  }
  hModule_016dd5d4 = LoadLibraryA("d3d9.dll");
  if (hModule_016dd5d4 != (HMODULE)0x0) {
    DAT_016dd5d8 = GetProcAddress(hModule_016dd5d4,"Direct3DCreate9");
    _DAT_016dd5dc = GetProcAddress(hModule_016dd5d4,"D3DPERF_BeginEvent");
    _DAT_016dd5e0 = GetProcAddress(hModule_016dd5d4,"D3DPERF_EndEvent");
    _DAT_016dd5e4 = GetProcAddress(hModule_016dd5d4,"D3DPERF_SetMarker");
    _DAT_016dd5e8 = GetProcAddress(hModule_016dd5d4,"D3DPERF_SetRegion");
    _DAT_016dd5ec = GetProcAddress(hModule_016dd5d4,"D3DPERF_QueryRepeatFrame");
    _DAT_016dd5f0 = GetProcAddress(hModule_016dd5d4,"D3DPERF_SetOptions");
    _DAT_016dd5f4 = GetProcAddress(hModule_016dd5d4,"D3DPERF_GetStatus");
  }
  return hModule_016dd5d4 != (HMODULE)0x0;
}

