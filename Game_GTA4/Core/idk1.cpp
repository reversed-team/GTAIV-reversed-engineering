
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* 0x9D00C0 */

void __fastcall ErrorD3D9(char *param_1,byte *param_2,undefined4 param_3)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  HWND hWnd;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  byte *extraout_EDX_01;
  byte *extraout_EDX_02;
  byte *extraout_EDX_03;
  byte *extraout_EDX_04;
  byte *extraout_EDX_05;
  byte *pbVar8;
  byte *extraout_EDX_06;
  byte *extraout_EDX_07;
  undefined4 uVar9;
  longlong lVar10;
  char *pcVar11;
  LPCSTR lpCaption;
  UINT uType;
  char local_208 [124];
  undefined1 local_18c [388];
  uint local_8;
  
  local_8 = DAT_01057fb4 ^ (uint)local_18c;
  bVar2 = true;
  switch(param_3) {
  case 0x80040901:
    uVar9 = 2;
    cVar4 = FUN_009d04e0((int)param_1,param_2);
    uVar3 = uVar9;
    if ((cVar4 == '\0') || (cVar4 = FUN_009d0600(extraout_ECX,extraout_EDX), cVar4 != '\0')) {
      param_2 = (byte *)0x200;
      pcVar11 = local_208;
      do {
        param_1 = pcVar11;
        if ((param_2 == (byte *)0x80000202) ||
           (param_1[(int)
                    "Could not initialize Direct3D 9. Check that the latest version of DirectX is correctly installed on your system.  Also make sure that this program was compiled with header files that match the installed DirectX DLLs."
                    - (int)local_208] == '\0')) goto LAB_009d0174;
        *param_1 = param_1[(int)
                           "Could not initialize Direct3D 9. Check that the latest version of DirectX is correctly installed on your system.  Also make sure that this program was compiled with header files that match the installed DirectX DLLs."
                           - (int)local_208];
        param_2 = param_2 + -1;
        pcVar11 = param_1 + 1;
      } while (param_2 != (byte *)0x0);
      *param_1 = '\0';
    }
    else {
      param_2 = (byte *)0x200;
      pcVar11 = local_208;
      do {
        param_1 = pcVar11;
        if ((param_2 == (byte *)0x80000202) ||
           (param_1[(int)
                    "Could not initialize Direct3D 10. This application requires a Direct3D 10 class\ndevice (hardware or reference rasterizer) running on Windows Vista (or later)."
                    - (int)local_208] == '\0')) goto LAB_009d0174;
        *param_1 = param_1[(int)
                           "Could not initialize Direct3D 10. This application requires a Direct3D 10 class\ndevice (hardware or reference rasterizer) running on Windows Vista (or later)."
                           - (int)local_208];
        param_2 = param_2 + -1;
        pcVar11 = param_1 + 1;
      } while (param_2 != (byte *)0x0);
      *param_1 = '\0';
    }
    break;
  case 0x80040902:
    uVar9 = 3;
    iVar7 = GetSystemMetrics(0x1000);
    param_2 = (byte *)0x200;
    uVar3 = uVar9;
    if (iVar7 == 0) {
      pcVar11 = local_208;
      do {
        param_1 = pcVar11;
        if ((param_2 == (byte *)0x80000202) ||
           (param_1[(int)"Could not find any compatible Direct3D devices." - (int)local_208] == '\0'
           )) goto LAB_009d0174;
        *param_1 = param_1[(int)"Could not find any compatible Direct3D devices." - (int)local_208];
        param_2 = param_2 + -1;
        pcVar11 = param_1 + 1;
      } while (param_2 != (byte *)0x0);
      *param_1 = '\0';
    }
    else {
      pcVar11 = local_208;
      do {
        param_1 = pcVar11;
        if ((param_2 == (byte *)0x80000202) ||
           (param_1[(int)"Direct3D does not work over a remote session." - (int)local_208] == '\0'))
        goto LAB_009d0174;
        *param_1 = param_1[(int)"Direct3D does not work over a remote session." - (int)local_208];
        param_2 = param_2 + -1;
        pcVar11 = param_1 + 1;
      } while (param_2 != (byte *)0x0);
      *param_1 = '\0';
    }
    break;
  case 0x80040903:
    uVar9 = 4;
    param_2 = (byte *)0x200;
    pcVar11 = local_208;
    do {
      param_1 = pcVar11;
      uVar3 = uVar9;
      if ((param_2 == (byte *)0x80000202) ||
         (param_1[(int)"Could not find required media." - (int)local_208] == '\0'))
      goto LAB_009d0174;
      *param_1 = param_1[(int)"Could not find required media." - (int)local_208];
      param_2 = param_2 + -1;
      pcVar11 = param_1 + 1;
    } while (param_2 != (byte *)0x0);
    *param_1 = '\0';
    break;
  case 0x80040904:
    uVar9 = 5;
    param_2 = (byte *)0x200;
    pcVar11 = local_208;
    do {
      param_1 = pcVar11;
      uVar3 = uVar9;
      if ((param_2 == (byte *)0x80000202) ||
         (param_1[(int)
                  "The Direct3D device has a non-zero reference count, meaning some objects were not released."
                  - (int)local_208] == '\0')) goto LAB_009d0174;
      *param_1 = param_1[(int)
                         "The Direct3D device has a non-zero reference count, meaning some objects were not released."
                         - (int)local_208];
      param_2 = param_2 + -1;
      pcVar11 = param_1 + 1;
    } while (param_2 != (byte *)0x0);
    *param_1 = '\0';
    break;
  case 0x80040905:
    uVar9 = 6;
    param_2 = (byte *)0x200;
    pcVar11 = local_208;
    do {
      param_1 = pcVar11;
      uVar3 = uVar9;
      if ((param_2 == (byte *)0x80000202) ||
         (param_1[(int)"Failed creating the Direct3D device." - (int)local_208] == '\0'))
      goto LAB_009d0174;
      *param_1 = param_1[(int)"Failed creating the Direct3D device." - (int)local_208];
      param_2 = param_2 + -1;
      pcVar11 = param_1 + 1;
    } while (param_2 != (byte *)0x0);
    *param_1 = '\0';
    break;
  case 0x80040906:
    uVar9 = 7;
    param_2 = (byte *)0x200;
    pcVar11 = local_208;
    do {
      param_1 = pcVar11;
      uVar3 = uVar9;
      if ((param_2 == (byte *)0x80000202) ||
         (param_1[(int)"Failed resetting the Direct3D device." - (int)local_208] == '\0'))
      goto LAB_009d0174;
      *param_1 = param_1[(int)"Failed resetting the Direct3D device." - (int)local_208];
      param_2 = param_2 + -1;
      pcVar11 = param_1 + 1;
    } while (param_2 != (byte *)0x0);
    *param_1 = '\0';
    break;
  case 0x80040907:
    uVar9 = 8;
    param_2 = (byte *)0x200;
    pcVar11 = local_208;
    do {
      param_1 = pcVar11;
      uVar3 = uVar9;
      if ((param_2 == (byte *)0x80000202) ||
         (param_1[(int)"An error occurred in the device create callback function." - (int)local_208]
          == '\0')) goto LAB_009d0174;
      *param_1 = param_1[(int)"An error occurred in the device create callback function." -
                         (int)local_208];
      param_2 = param_2 + -1;
      pcVar11 = param_1 + 1;
    } while (param_2 != (byte *)0x0);
    *param_1 = '\0';
    break;
  case 0x80040908:
    uVar9 = 9;
    param_2 = (byte *)0x200;
    pcVar11 = local_208;
    do {
      param_1 = pcVar11;
      uVar3 = uVar9;
      if ((param_2 == (byte *)0x80000202) ||
         (param_1[(int)"An error occurred in the device reset callback function." - (int)local_208]
          == '\0')) goto LAB_009d0174;
      *param_1 = param_1[(int)"An error occurred in the device reset callback function." -
                         (int)local_208];
      param_2 = param_2 + -1;
      pcVar11 = param_1 + 1;
    } while (param_2 != (byte *)0x0);
    *param_1 = '\0';
    break;
  default:
    bVar2 = false;
    uVar9 = 1;
    break;
  case 0x8004090a:
    param_2 = (byte *)0x200;
    uVar9 = 0xb;
    pcVar11 = local_208;
    do {
      param_1 = pcVar11;
      uVar3 = 0xb;
      if ((param_2 == (byte *)0x80000202) ||
         (uVar3 = uVar9, param_1[(int)"The Direct3D device was removed." - (int)local_208] == '\0'))
      goto LAB_009d0174;
      *param_1 = param_1[(int)"The Direct3D device was removed." - (int)local_208];
      param_2 = param_2 + -1;
      pcVar11 = param_1 + 1;
    } while (param_2 != (byte *)0x0);
    *param_1 = '\0';
  }
LAB_009d03bd:
  iVar5 = FUN_009d0f60((int)param_1,param_2);
  iVar7 = extraout_ECX_00;
  pbVar8 = extraout_EDX_00;
  if (DAT_0103ad58 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0129588c);
    iVar7 = extraout_ECX_01;
    pbVar8 = extraout_EDX_01;
  }
  *(undefined4 *)(iVar5 + 0x300) = uVar9;
  if (DAT_0103ad58 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0129588c);
    iVar7 = extraout_ECX_02;
    pbVar8 = extraout_EDX_02;
  }
  iVar5 = FUN_009d0f60(iVar7,pbVar8);
  iVar7 = CONCAT31((int3)((uint)extraout_ECX_03 >> 8),DAT_0103ad58);
  pbVar8 = extraout_EDX_03;
  if (DAT_0103ad58 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0129588c);
    iVar7 = CONCAT31((int3)((uint)extraout_ECX_04 >> 8),DAT_0103ad58);
    pbVar8 = extraout_EDX_04;
  }
  cVar4 = *(char *)(iVar5 + 0x2f2);
  if ((char)iVar7 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0129588c);
    iVar7 = extraout_ECX_05;
    pbVar8 = extraout_EDX_05;
  }
  if ((bVar2) && (cVar4 != '\0')) {
    psVar6 = (short *)FUN_009d0950(iVar7,pbVar8);
    if (*psVar6 == 0) {
      lVar10 = CONCAT44(extraout_EDX_06,"DXUT Application");
      iVar7 = extraout_ECX_06;
    }
    else {
      iVar5 = FUN_009d0950(extraout_ECX_06,extraout_EDX_06);
      lVar10 = ZEXT48(extraout_EDX_07) << 0x20;
      iVar7 = extraout_ECX_07;
      if (iVar5 != 0) {
        psVar6 = (short *)FUN_009d0950(extraout_ECX_07,extraout_EDX_07);
        pbVar8 = (byte *)(psVar6 + 1);
        iVar7 = extraout_ECX_08;
        do {
          sVar1 = *psVar6;
          iVar7 = CONCAT22((short)((uint)iVar7 >> 0x10),sVar1);
          psVar6 = psVar6 + 1;
        } while (sVar1 != 0);
        iVar5 = ((int)psVar6 - (int)pbVar8 >> 1) + 1;
        iVar7 = FUN_009d0950(iVar7,pbVar8);
        lVar10 = FUN_006a0100((int)&stack0xfffffde8,iVar7,iVar5);
        iVar7 = extraout_ECX_09;
      }
    }
    lpCaption = (LPCSTR)lVar10;
    uType = 0x10;
    pcVar11 = local_208;
    hWnd = (HWND)FUN_009d08a0(iVar7,(byte *)((ulonglong)lVar10 >> 0x20));
    MessageBoxA(hWnd,pcVar11,lpCaption,uType);
  }
  __security_check_cookie(local_8 ^ (uint)local_18c);
  return;
LAB_009d0174:
  uVar9 = uVar3;
  if (param_2 == (byte *)0x0) {
    param_1 = param_1 + -1;
  }
  *param_1 = '\0';
  goto LAB_009d03bd;
}

