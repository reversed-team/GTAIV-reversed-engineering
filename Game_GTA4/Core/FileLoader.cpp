
/* 0x5CE120 */

void LoadIntro()

{
  char cVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  byte *_Src;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 extraout_ECX;
  byte *extraout_ECX_00;
  undefined3 uVar9;
  byte *pbVar8;
  byte *extraout_ECX_01;
  byte *extraout_ECX_02;
  char *pcVar10;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  int local_dc;
  char local_d7;
  char local_d6;
  char local_d5;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  char local_a8 [32];
  char local_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  char local_2c [32];
  uint local_c;
  
  local_c = DAT_01057fb4 ^ (uint)&local_dc;
  bVar4 = false;
  if (((DAT_018b6f34 != '\0') && (DAT_01bb5624 != 0)) &&
     (iVar12 = 0, *(short *)(DAT_01bb5624 + 0x148) != 0)) {
    iVar11 = 0;
    do {
      iVar3 = *(int *)(DAT_01bb5624 + 0x144);
      if (*(char *)(iVar11 + 0x225 + iVar3) != '\0') {
        if (DAT_018b6f2f == '\0') {
          pcVar7 = (char *)(iVar3 + 0x1a4 + iVar11);
          if (*pcVar7 != '\0') {
            pcVar10 = (char *)&local_68;
            do {
              cVar1 = *pcVar7;
              *pcVar10 = cVar1;
              pcVar7 = pcVar7 + 1;
              pcVar10 = pcVar10 + 1;
            } while (cVar1 != '\0');
            goto LAB_005ce1ca;
          }
        }
        else {
          pcVar7 = (char *)(iVar3 + 0x124 + iVar11);
          if (*pcVar7 != '\0') {
            pcVar10 = (char *)&local_68;
            do {
              cVar1 = *pcVar7;
              *pcVar10 = cVar1;
              pcVar7 = pcVar7 + 1;
              pcVar10 = pcVar10 + 1;
            } while (cVar1 != '\0');
LAB_005ce1ca:
            bVar4 = true;
          }
        }
      }
      iVar12 = iVar12 + 1;
      iVar11 = iVar11 + 0x22c;
    } while (iVar12 < (int)(uint)*(ushort *)(DAT_01bb5624 + 0x148));
    if (bVar4) goto LAB_005ce2b2;
  }
  if (DAT_018b6f2f == '\0') {
    local_68 = 0x2f3a6e6f6d6d6f63;
    local_60 = 0x414f4c2f41544144;
    local_58 = 0x45524353474e4944;
    local_50 = 0x41474e495f534e45;
    local_48 = 0x41442e43505f454d;
    local_40 = 0x54;
  }
  else {
    local_68 = 0x2f3a6e6f6d6d6f63;
    local_60 = 0x414f4c2f41544144;
    local_58 = 0x45524353474e4944;
    local_50 = 0x442e43505f534e45;
    local_48 = CONCAT53(local_48._3_5_,0x5441);
  }
LAB_005ce2b2:
  DAT_018b6f3c = 0;
  FUN_008c5220();
  uVar14 = Filemgr::Read((char *)&local_68,"rb");
  local_d6 = '\0';
  local_d7 = '\0';
  bVar4 = false;
  _Src = FUN_008c4e70(extraout_ECX,(int)((ulonglong)uVar14 >> 0x20),(int)uVar14,'\x01');
  pbVar8 = extraout_ECX_00;
  iVar12 = extraout_EDX;
  while (_Src != (byte *)0x0) {
    if ((*_Src != 0x23) && (*_Src != 0)) {
      if (local_d7 == '\0') {
        if (local_d5 == '\0') {
          pbVar5 = &DAT_00f8f608;
          do {
            bVar2 = *_Src;
            uVar9 = (undefined3)((uint)pbVar8 >> 8);
            pbVar8 = (byte *)CONCAT31(uVar9,bVar2);
            bVar13 = bVar2 < *pbVar5;
            if (bVar2 != *pbVar5) {
LAB_005ce345:
              uVar6 = -(uint)bVar13 | 1;
              goto LAB_005ce34a;
            }
            if (bVar2 == 0) break;
            bVar2 = _Src[1];
            pbVar8 = (byte *)CONCAT31(uVar9,bVar2);
            bVar13 = bVar2 < pbVar5[1];
            if (bVar2 != pbVar5[1]) goto LAB_005ce345;
            _Src = _Src + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar2 != 0);
          uVar6 = 0;
LAB_005ce34a:
          if (uVar6 != 0) goto LAB_005ceb3c;
        }
        local_d7 = '\x01';
      }
      else {
        if (local_d5 != '\0') {
          pbVar8 = &DAT_00f8f610;
          pbVar5 = _Src;
          do {
            bVar2 = *pbVar5;
            uVar9 = (undefined3)((uint)iVar12 >> 8);
            iVar12 = CONCAT31(uVar9,bVar2);
            bVar13 = bVar2 < *pbVar8;
            if (bVar2 != *pbVar8) {
LAB_005ce390:
              uVar6 = -(uint)bVar13 | 1;
              goto LAB_005ce395;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            iVar12 = CONCAT31(uVar9,bVar2);
            bVar13 = bVar2 < pbVar8[1];
            if (bVar2 != pbVar8[1]) goto LAB_005ce390;
            pbVar5 = pbVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar2 != 0);
          uVar6 = 0;
LAB_005ce395:
          if (uVar6 == 0) break;
        }
        if (local_d6 == '\0') {
          pbVar5 = &DAT_00f8f628;
          do {
            bVar2 = *_Src;
            uVar9 = (undefined3)((uint)pbVar8 >> 8);
            pbVar8 = (byte *)CONCAT31(uVar9,bVar2);
            bVar13 = bVar2 < *pbVar5;
            if (bVar2 != *pbVar5) {
LAB_005ce3d0:
              uVar6 = -(uint)bVar13 | 1;
              goto LAB_005ce3d5;
            }
            if (bVar2 == 0) break;
            bVar2 = _Src[1];
            pbVar8 = (byte *)CONCAT31(uVar9,bVar2);
            bVar13 = bVar2 < pbVar5[1];
            if (bVar2 != pbVar5[1]) goto LAB_005ce3d0;
            _Src = _Src + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar2 != 0);
          uVar6 = 0;
LAB_005ce3d5:
          if (uVar6 == 0) {
            if (bVar4) break;
            local_d6 = '\x01';
          }
        }
        else {
          pbVar8 = &DAT_00f8f630;
          pbVar5 = _Src;
          do {
            bVar2 = *pbVar5;
            uVar9 = (undefined3)((uint)iVar12 >> 8);
            iVar12 = CONCAT31(uVar9,bVar2);
            bVar13 = bVar2 < *pbVar8;
            if (bVar2 != *pbVar8) {
LAB_005ce416:
              uVar6 = -(uint)bVar13 | 1;
              goto LAB_005ce41b;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            iVar12 = CONCAT31(uVar9,bVar2);
            bVar13 = bVar2 < pbVar8[1];
            if (bVar2 != pbVar8[1]) goto LAB_005ce416;
            pbVar5 = pbVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar2 != 0);
          uVar6 = 0;
LAB_005ce41b:
          if (uVar6 == 0) {
            local_d6 = '\0';
            if (0x11 < DAT_018b6f3c) break;
            DAT_018b6f3c = DAT_018b6f3c + 1;
          }
          else {
            local_dc = 0;
            local_d4 = 0;
            local_d0 = 0;
            local_cc = 0;
            local_a8[0] = '\0';
            FID_conflict__sscanf((char *)_Src,"%s",local_88);
            iVar12 = __stricmp(local_88,"OBJECTS");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %*s %d",&local_dc);
              (&DAT_019d3b64)[DAT_018b6f3c * 100] = local_dc;
            }
            iVar12 = __stricmp(local_88,"DURATION");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %*s %d",&local_dc);
              (&DAT_019d3b60)[DAT_018b6f3c * 100] = local_dc;
            }
            iVar12 = __stricmp(local_88,"FLAG");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %*s %s",local_a8);
              iVar12 = __stricmp(local_a8,"LEGAL");
              if (iVar12 == 0) {
                (&DAT_019d3b68)[DAT_018b6f3c * 100] = 1;
              }
              else {
                iVar12 = __stricmp(local_a8,"WAIT_FOR_AUDIO");
                if (iVar12 == 0) {
                  (&DAT_019d3b68)[DAT_018b6f3c * 100] = 7;
                }
                else {
                  iVar12 = __stricmp(local_a8,"LEGAL2");
                  if (iVar12 == 0) {
                    (&DAT_019d3b68)[DAT_018b6f3c * 100] = 2;
                  }
                  else {
                    iVar12 = __stricmp(local_a8,"START_INTRO");
                    if (iVar12 == 0) {
                      (&DAT_019d3b68)[DAT_018b6f3c * 100] = 3;
                    }
                    else {
                      iVar12 = __stricmp(local_a8,"END_INTRO");
                      if (iVar12 == 0) {
                        (&DAT_019d3b68)[DAT_018b6f3c * 100] = 4;
                      }
                      else {
                        iVar12 = __stricmp(local_a8,"START_EPISODE");
                        if (iVar12 == 0) {
                          (&DAT_019d3b68)[DAT_018b6f3c * 100] = 5;
                        }
                        else {
                          iVar12 = __stricmp(local_a8,"INITIAL_MAIN");
                          if (iVar12 == 0) {
                            if (DAT_018b6f2f == '\0') {
                              DAT_018b6f3c = 0;
                            }
                            (&DAT_019d3b68)[DAT_018b6f3c * 100] = 6;
                          }
                          else {
                            iVar12 = __stricmp(local_a8,"LAST_INGAME");
                            if ((iVar12 == 0) && (DAT_018b6f2f == '\0')) {
                              bVar4 = true;
                            }
                            (&DAT_019d3b68)[DAT_018b6f3c * 100] = 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            iVar12 = __stricmp(local_88,"FADE");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %*s %s",local_a8);
              iVar12 = __stricmp(local_a8,"IN_OUT");
              if (iVar12 == 0) {
                (&DAT_019d3b6c)[DAT_018b6f3c * 100] = 1;
              }
              else {
                iVar12 = __stricmp(local_a8,"IN");
                if (iVar12 == 0) {
                  (&DAT_019d3b6c)[DAT_018b6f3c * 100] = 2;
                }
                else {
                  iVar12 = __stricmp(local_a8,"OUT");
                  if (iVar12 == 0) {
                    (&DAT_019d3b6c)[DAT_018b6f3c * 100] = 3;
                  }
                  else {
                    (&DAT_019d3b6c)[DAT_018b6f3c * 100] = 0;
                  }
                }
              }
            }
            iVar12 = __stricmp(local_88,"TEXTURE");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %s %s",&local_dc,local_a8,local_2c);
              pcVar7 = local_a8;
              iVar12 = (DAT_018b6f3c * 400 + local_dc * 0x60) - (int)pcVar7;
              do {
                cVar1 = *pcVar7;
                pcVar7[(int)(&DAT_019d3b10 + iVar12)] = cVar1;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 != '\0');
              iVar12 = __stricmp(local_2c,"BEFORE");
              if (iVar12 == 0) {
                (&DAT_019d3b24)[local_dc * 0x60 + DAT_018b6f3c * 400] = 1;
              }
              else {
                (&DAT_019d3b24)[local_dc * 0x60 + DAT_018b6f3c * 400] = 0;
              }
            }
            iVar12 = __stricmp(local_88,"STARTTIME");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %d",&local_dc,&local_d4);
              (&DAT_019d3b28)[DAT_018b6f3c * 100 + local_dc * 0x18] = local_d4;
            }
            iVar12 = __stricmp(local_88,"ENDTIME");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %d",&local_dc,&local_d4);
              *(undefined4 *)(&DAT_019d3b2c + local_dc * 0x60 + DAT_018b6f3c * 400) = local_d4;
            }
            iVar12 = __stricmp(local_88,"MOVETIME");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %d",&local_dc,&local_d4);
              (&DAT_019d3b30)[DAT_018b6f3c * 100 + local_dc * 0x18] = local_d4;
            }
            iVar12 = __stricmp(local_88,"SCALETIME");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %d",&local_dc,&local_d4);
              (&DAT_019d3b34)[DAT_018b6f3c * 100 + local_dc * 0x18] = local_d4;
            }
            iVar12 = __stricmp(local_88,"STARTPOS");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %f %f",&local_dc,&local_d0,&local_cc);
              iVar12 = DAT_018b6f3c;
              local_c8 = local_d0;
              local_c4 = local_cc;
              (&DAT_019d3b40)[DAT_018b6f3c * 100 + local_dc * 0x18] = local_d0;
              (&DAT_019d3b44)[iVar12 * 100 + local_dc * 0x18] = local_cc;
            }
            iVar12 = __stricmp(local_88,"MOVEAMOUNT");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %f %f",&local_dc,&local_d0,&local_cc);
              iVar12 = DAT_018b6f3c;
              local_b8 = local_d0;
              local_b4 = local_cc;
              (&DAT_019d3b48)[DAT_018b6f3c * 100 + local_dc * 0x18] = local_d0;
              (&DAT_019d3b4c)[iVar12 * 100 + local_dc * 0x18] = local_cc;
            }
            iVar12 = __stricmp(local_88,"STARTSIZE");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %f %f",&local_dc,&local_d0,&local_cc);
              iVar12 = DAT_018b6f3c;
              local_c0 = local_d0;
              local_bc = local_cc;
              (&DAT_019d3b50)[DAT_018b6f3c * 100 + local_dc * 0x18] = local_d0;
              (&DAT_019d3b54)[iVar12 * 100 + local_dc * 0x18] = local_cc;
            }
            iVar11 = __stricmp(local_88,"SCALEAMOUNT");
            pbVar8 = extraout_ECX_01;
            iVar12 = extraout_EDX_00;
            if (iVar11 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %f %f",&local_dc,&local_d0,&local_cc);
              iVar12 = DAT_018b6f3c * 400;
              local_b0 = local_d0;
              pbVar8 = (byte *)(local_dc * 0x60);
              local_ac = local_cc;
              *(undefined4 *)(pbVar8 + (int)(&DAT_019d3b58 + DAT_018b6f3c * 200)) = local_d0;
              *(undefined4 *)(pbVar8 + (int)(&DAT_019d3b5c + iVar12)) = local_cc;
            }
          }
        }
      }
    }
LAB_005ceb3c:
    _Src = FUN_008c4e70(pbVar8,iVar12,(int)uVar14,'\x01');
    pbVar8 = extraout_ECX_02;
    iVar12 = extraout_EDX_01;
  }
  FUN_008c4650();
  __security_check_cookie(local_c ^ (uint)&local_dc);
  return;
}


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


/* 0x5C1270 */

void __fastcall InitializeAllDat(undefined4 param_1,byte *param_2)

{
  void *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_EDX;
  int extraout_EDX_00;
  
  FUN_00934480(DAT_01bb5624,param_2);
  FUN_008f6b00();
  FUN_008c1c60(extraout_ECX);
  FUN_00ae66d0(extraout_ECX_00,extraout_EDX);
  FUN_00b2ced0();
  FUN_00b02cd0();
  FUN_00b1e5e0();
  FUN_00af8e60();
  FUN_00c74090();
  FUN_00c72ee0();
  InitializeDefaultIde();
  unknownfunc_A6CC90(extraout_ECX_01,extraout_EDX_00);
  FUN_00c73a60();
  FUN_00c73bd0();
  InitializeShockingEventsdat();
  FUN_00939460();
  FUN_00c716d0();
  FUN_00c76a50();
  FUN_00d44f70();
  unknownfunc_CD2980();
  FUN_00c757f0();
  InitializeScenariosdat();
  FUN_00d3e160(0x17205a0);
  FUN_00c0fd20();
  Initializescrollbarsdat();
  InitializeGTA4PNG();
  return;
}


/* 0xB1E6F0 */

void InitializeDefaultIde()

{
  int iVar1;
  char extraout_CL;
  int extraout_ECX;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 uVar2;
  int extraout_EDX;
  byte *extraout_EDX_00;
  byte *extraout_EDX_01;
  byte *pbVar3;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  uint extraout_EDX_05;
  ulonglong uVar4;
  char *pcVar5;
  char *pcVar6;
  
  FUN_009dd630();
  FUN_00b85cb0();
  FUN_0093fc20();
  FUN_004016a0(-0x80,extraout_EDX);
  FUN_00a95d50();
  FUN_00b1e4c0(DAT_01bb5628);
  FUN_00ab6d00();
  pbVar3 = extraout_EDX_00;
  if (DAT_011d6fd0 == 2) {
    unknownfunc_9D61A0("common:/data/default.dat",2);
    pbVar3 = extraout_EDX_01;
  }
  FUN_00934df0(DAT_01bb5624,pbVar3);
  pcVar6 = (char *)0x0;
  iVar1 = FUN_0040b590(0x110c0a0,extraout_EDX_02);
  uVar2 = extraout_DX;
  if ((char)iVar1 != '\0') {
    FUN_00a96170(0xff);
    FUN_00a95aa0("update:/update.img",1,-1);
    FUN_00a96170(0);
    uVar2 = extraout_DX_00;
  }
  FUN_008c6290((int *)&DAT_0116bff0,uVar2,'\0');
  if (DAT_011d6fd0 != 2) {
    pcVar5 = "common:/data/default.dat";
  }
  else {
    pcVar5 = "common:/data/default.dat";
  }
  unknownfunc_9D61A0(pcVar5,(uint)(DAT_011d6fd0 == 2));
  unknownfunc_9D61A0(pcVar6,0);
  FUN_009d63f0((int)pcVar6);
  FUN_004016a0(extraout_CL,extraout_EDX_03);
  FUN_004016a0(-0x80,extraout_EDX_04);
  FUN_00d646a0();
  FUN_00aefeb0();
  FUN_00c0b6c0();
  uVar4 = FUN_00426e00(extraout_ECX,extraout_EDX_05);
  FUN_0042a560((int)uVar4,(undefined4 *)(uVar4 >> 0x20));
  FUN_00b86050();
  FUN_00a14530();
  return;
}


/* 0x5C2E60 */

void InitializeDefaultMaps()

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar2;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined1 auStack_168 [8];
  undefined4 local_160;
  float fStack_15c;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138 [2];
  char *local_130;
  char *local_12c;
  char *local_128;
  char *local_124;
  char *local_120;
  wchar_t *local_11c;
  int local_118;
  wchar_t *local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  char *local_100;
  char *local_fc;
  char *local_f8;
  char *local_f4;
  char *local_f0;
  wchar_t *local_ec;
  int local_e8;
  wchar_t *local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  char *InitializeNormalBRONX_E;
  char *local_cc;
  char *local_c8;
  char *local_c4;
  char *local_c0;
  wchar_t *local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  char *local_a0;
  char *local_9c;
  char *local_98;
  char *local_94;
  char *local_90;
  char *local_8c;
  char *local_88;
  char *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  char *local_70;
  char *local_6c;
  char *local_68;
  char *local_64;
  char *local_60;
  char *local_5c;
  wchar_t *local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  undefined *local_2c;
  char *local_28;
  int local_24;
  uint local_14;
  
  local_14 = DAT_01057fb4 ^ (uint)auStack_168;
  local_140 = 0;
  local_13c = 0;
  local_138[0] = 0;
  local_130 = "brook_s";
  local_12c = "brook_s2";
  local_128 = "brook_s3";
  local_124 = "brook_n";
  local_120 = "brook_n2";
  local_11c = L"";
  local_118 = (int)L"GTA IV: SCHWERWIEGENDER FEHLER: " + 0x43;
  local_114 = L"";
  local_110 = 0x445f0000;
  local_10c = 0xc3f98000;
  local_108 = 0x41900000;
  local_100 = "brook_s";
  local_fc = "brook_s2";
  local_f8 = "brook_s3";
  local_f4 = "brook_n";
  local_f0 = "brook_n2";
  local_ec = L"";
  local_e8 = (int)L"GTA IV FATAL ERROR: " + 0x2b;
  local_e4 = L"";
  local_e0 = 0x44164000;
  local_dc = 0x44b02000;
  local_d8 = 0x41800000;
  InitializeNormalBRONX_E = "bronx_e";
  local_cc = "bronx_e2";
  local_c8 = "bronx_w";
  local_c4 = "bronx_w2";
  local_c0 = "brook_n2";
  local_bc = L"";
  local_b8 = (int)L"GTA IV ERRORE FATALE: " + 0x2f;
  local_b4 = (int)L"GTA IV ERRORE FATALE: " + 0x2f;
  local_b0 = 0x42c60000;
  local_ac = 0x4454c000;
  local_a8 = 0x42300000;
  local_a0 = "manhat08";
  local_9c = "manhat06";
  local_98 = "manhat07";
  local_94 = "manhat09";
  local_90 = "manhat04";
  local_8c = "manhat03";
  local_88 = "manhat05";
  local_84 = "manhat12";
  local_80 = 0xc4724000;
  local_7c = 0x445dc000;
  local_78 = 0x41900000;
  local_70 = "nj_02";
  local_6c = "nj_01";
  local_68 = "nj_03";
  local_64 = "nj_docks";
  local_60 = "nj_04e";
  local_5c = "nj_04w";
  local_58 = L"";
  local_54 = (int)L"GTA IV: SCHWERWIEGENDER FEHLER: " + 0x43;
  local_50 = 0xc3d50000;
  local_4c = 0x44b6e000;
  local_48 = 0x42180000;
  local_40 = "manhat05";
  local_3c = "manhat12";
  local_38 = "manhat06";
  local_34 = "manhat04";
  local_30 = "manhat08";
  local_2c = &DAT_00f8e4e0;
  local_28 = "bronx_w";
  local_24 = (int)L"GTA IV FATAL ERROR: " + 0x2b;
  iVar1 = FUN_0093f050();
  if (iVar1 == 0) {
    FUN_005c2dc0((int *)&local_130);
    __security_check_cookie(local_14 ^ (uint)auStack_168);
    return;
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  puVar4 = local_138;
  local_150 = *(undefined4 *)(iVar1 + 0x30);
  local_160 = *(undefined4 *)(iVar1 + 0x34);
  local_158 = *(undefined4 *)(iVar1 + 0x38);
  iVar1 = 6;
  uVar2 = extraout_ECX;
  uVar3 = extraout_DX;
  do {
    fVar5 = (float10)FUN_0040e020(uVar2,uVar3);
    fStack_15c = (float)fVar5;
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_DX_00;
    if (fStack_15c < 50.0) {
      FUN_005c2dc0(puVar4 + 2);
      uVar2 = extraout_ECX_01;
      uVar3 = extraout_DX_01;
    }
    puVar4 = puVar4 + 0xc;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  __security_check_cookie(local_14 ^ (uint)auStack_168);
  return;
}


/* 0x8CA8F0 */

void InitializeGTA4PNG()

{
  undefined1 *puVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  DAT_01173218 = 0;
  DAT_0117321c = 0;
  iVar2 = 0;
  if (*(ushort *)(DAT_01bb5628 + 1) != 0) {
    piVar3 = (int *)(*DAT_01bb5628 + 0x80);
    do {
      if (*piVar3 == 0x28) {
        piVar3 = (int *)(iVar2 * 0x88 + *DAT_01bb5628);
        goto LAB_008ca939;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x22;
    } while (iVar2 < (int)(uint)*(ushort *)(DAT_01bb5628 + 1));
  }
  piVar3 = DAT_01bb5628 + 0x1a4;
LAB_008ca939:
  if ((((piVar3[0x21] == -1) ||
       (iVar2 = FUN_0040b590(0x110c0a0,(int)DAT_01bb5628), (char)iVar2 == '\0')) ||
      (puVar1 = (undefined1 *)Filemgr::Read((char *)piVar3,"r"), puVar1 == (undefined1 *)0x0)) &&
     (puVar1 = (undefined1 *)Filemgr::Read("platform:/data/gta4pc.png","r"),
     puVar1 == (undefined1 *)0x0)) {
    return;
  }
  uVar4 = FUN_008c4940();
  uVar5 = FUN_00401210(extraout_ECX,(byte *)((ulonglong)uVar4 >> 0x20));
  DAT_01173218 = (int)uVar5;
  DAT_0117321c = (int)uVar4;
  if (DAT_01173218 != 0) {
    FUN_008c4e50(extraout_ECX_00,(undefined1 *)((ulonglong)uVar5 >> 0x20),puVar1,DAT_01173218);
    func_0x004016c0(DAT_01173218,DAT_0117321c);
  }
  FUN_008c4650();
  return;
}



/* 0xC80ED0 */

void InitializeScenariosdat()

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *extraout_ECX;
  undefined4 *puVar5;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  int extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  byte *pbVar7;
  uint uVar8;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 extraout_EDX_02;
  byte *pbVar9;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  undefined4 uVar10;
  undefined4 extraout_EDX_06;
  int iVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar13 = Filemgr::Read("common:/DATA/Scenarios.dat","r");
  uVar4 = (undefined4)uVar13;
  iVar11 = 0;
  DAT_016f80b0 = 0;
  puVar5 = extraout_ECX;
  if (DAT_0104b990 != -1) {
    puVar5 = &DAT_0104b990;
    local_24 = uVar4;
    do {
      FUN_00c82120((int)puVar5);
      uVar13 = CONCAT44(extraout_EDX,local_24);
      iVar11 = iVar11 + 1;
      puVar5 = &DAT_0104b990 + iVar11 * 0x2c;
    } while ((&DAT_0104b990)[iVar11 * 0x2c] != -1);
  }
  local_24 = (undefined4)uVar13;
  pbVar2 = FUN_009d6a50(puVar5,(int)((ulonglong)uVar13 >> 0x20),uVar4);
  uVar6 = extraout_ECX_00;
  uVar10 = extraout_EDX_00;
  do {
    if (pbVar2 == (byte *)0x0) {
      FUN_008c4650();
      return;
    }
    bVar1 = *pbVar2;
    uVar6 = CONCAT31((int3)((uint)uVar6 >> 8),bVar1);
    if ((bVar1 != 0x23) && (bVar1 != 0)) {
      pcVar3 = (char *)FUN_00dfd258(pbVar2,(byte *)" ,\t()");
      puVar5 = (undefined4 *)_strncmp(pcVar3,"Version",7);
      if (puVar5 == (undefined4 *)0x0) {
        local_28 = puVar5;
        uVar13 = FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
        uVar10 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uVar6 = extraout_ECX_02;
        if ((char *)uVar13 != (char *)0x0) {
          FID_conflict__sscanf((char *)uVar13,"%d",&local_28);
          uVar6 = extraout_ECX_03;
          uVar10 = extraout_EDX_02;
        }
      }
      else {
        uVar13 = FUN_00c80ac0(extraout_ECX_01,extraout_EDX_01);
        uVar10 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uVar6 = extraout_ECX_04;
        if ((uint)uVar13 != 0xffffffff) {
          puVar5 = FUN_00c80990((uint)uVar13);
          local_28 = puVar5;
          uVar13 = FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
          iVar11 = (int)uVar13;
          uVar6 = extraout_ECX_05;
          while( true ) {
            uVar10 = (undefined4)((ulonglong)uVar13 >> 0x20);
            pbVar2 = (byte *)uVar13;
            if (iVar11 == 0) break;
            pcVar3 = "StartEnd";
            pbVar7 = pbVar2;
            do {
              bVar1 = *pbVar7;
              bVar12 = bVar1 < (byte)*pcVar3;
              if (bVar1 != *pcVar3) {
LAB_00c81007:
                uVar8 = -(uint)bVar12 | 1;
                goto LAB_00c8100c;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar12 = bVar1 < (byte)pcVar3[1];
              if (bVar1 != pcVar3[1]) goto LAB_00c81007;
              pbVar7 = pbVar7 + 2;
              pcVar3 = pcVar3 + 2;
            } while (bVar1 != 0);
            uVar8 = 0;
LAB_00c8100c:
            if (uVar8 == 0) {
              pcVar3 = (char *)FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
              FID_conflict__sscanf(pcVar3,"%d",puVar5 + 2);
              pcVar3 = (char *)FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
              FID_conflict__sscanf(pcVar3,"%d",puVar5 + 3);
            }
            else {
              pbVar9 = &DAT_00ed4d4c;
              pbVar7 = pbVar2;
              do {
                bVar1 = *pbVar7;
                bVar12 = bVar1 < *pbVar9;
                if (bVar1 != *pbVar9) {
LAB_00c81074:
                  uVar8 = -(uint)bVar12 | 1;
                  goto LAB_00c81079;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar7[1];
                bVar12 = bVar1 < pbVar9[1];
                if (bVar1 != pbVar9[1]) goto LAB_00c81074;
                pbVar7 = pbVar7 + 2;
                pbVar9 = pbVar9 + 2;
              } while (bVar1 != 0);
              uVar8 = 0;
LAB_00c81079:
              if (uVar8 == 0) {
                pcVar3 = (char *)FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
                FID_conflict__sscanf(pcVar3,"%f",puVar5 + 4);
              }
              else {
                pbVar9 = &DAT_00ed4d58;
                pbVar7 = pbVar2;
                do {
                  bVar1 = *pbVar7;
                  bVar12 = bVar1 < *pbVar9;
                  if (bVar1 != *pbVar9) {
LAB_00c810c6:
                    uVar8 = -(uint)bVar12 | 1;
                    goto LAB_00c810cb;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar12 = bVar1 < pbVar9[1];
                  if (bVar1 != pbVar9[1]) goto LAB_00c810c6;
                  pbVar7 = pbVar7 + 2;
                  pbVar9 = pbVar9 + 2;
                } while (bVar1 != 0);
                uVar8 = 0;
LAB_00c810cb:
                if (uVar8 == 0) {
                  pbVar7 = (byte *)FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
                  pcVar3 = "Stationary";
                  pbVar2 = pbVar7;
                  do {
                    bVar1 = *pbVar2;
                    bVar12 = bVar1 < (byte)*pcVar3;
                    if (bVar1 != *pcVar3) {
LAB_00c81108:
                      uVar8 = -(uint)bVar12 | 1;
                      goto LAB_00c8110d;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar2[1];
                    bVar12 = bVar1 < (byte)pcVar3[1];
                    if (bVar1 != pcVar3[1]) goto LAB_00c81108;
                    pbVar2 = pbVar2 + 2;
                    pcVar3 = pcVar3 + 2;
                  } while (bVar1 != 0);
                  uVar8 = 0;
LAB_00c8110d:
                  if (uVar8 == 0) {
                    puVar5[5] = 0;
                  }
                  else {
                    pcVar3 = "MoveBetween";
                    pbVar2 = pbVar7;
                    do {
                      bVar1 = *pbVar2;
                      bVar12 = bVar1 < (byte)*pcVar3;
                      if (bVar1 != *pcVar3) {
LAB_00c81140:
                        uVar8 = -(uint)bVar12 | 1;
                        goto LAB_00c81145;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar2[1];
                      bVar12 = bVar1 < (byte)pcVar3[1];
                      if (bVar1 != pcVar3[1]) goto LAB_00c81140;
                      pbVar2 = pbVar2 + 2;
                      pcVar3 = pcVar3 + 2;
                    } while (bVar1 != 0);
                    uVar8 = 0;
LAB_00c81145:
                    if (uVar8 == 0) {
                      puVar5[5] = 1;
                      pcVar3 = (char *)FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
                      FID_conflict__sscanf(pcVar3,"%f",puVar5 + 0x11);
                    }
                    else {
                      pcVar3 = "Group";
                      pbVar2 = pbVar7;
                      do {
                        bVar1 = *pbVar2;
                        bVar12 = bVar1 < (byte)*pcVar3;
                        if (bVar1 != *pcVar3) {
LAB_00c811a0:
                          uVar8 = -(uint)bVar12 | 1;
                          goto LAB_00c811a5;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar2[1];
                        bVar12 = bVar1 < (byte)pcVar3[1];
                        if (bVar1 != pcVar3[1]) goto LAB_00c811a0;
                        pbVar2 = pbVar2 + 2;
                        pcVar3 = pcVar3 + 2;
                      } while (bVar1 != 0);
                      uVar8 = 0;
LAB_00c811a5:
                      if (uVar8 == 0) {
                        puVar5[5] = 2;
                      }
                      else {
                        pcVar3 = "SeatedGroup";
                        pbVar2 = pbVar7;
                        do {
                          bVar1 = *pbVar2;
                          bVar12 = bVar1 < (byte)*pcVar3;
                          if (bVar1 != *pcVar3) {
LAB_00c811e0:
                            uVar8 = -(uint)bVar12 | 1;
                            goto LAB_00c811e5;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar2[1];
                          bVar12 = bVar1 < (byte)pcVar3[1];
                          if (bVar1 != pcVar3[1]) goto LAB_00c811e0;
                          pbVar2 = pbVar2 + 2;
                          pcVar3 = pcVar3 + 2;
                        } while (bVar1 != 0);
                        uVar8 = 0;
LAB_00c811e5:
                        if (uVar8 == 0) {
                          puVar5[5] = 3;
                        }
                        else {
                          pcVar3 = "Seated";
                          pbVar2 = pbVar7;
                          do {
                            bVar1 = *pbVar2;
                            bVar12 = bVar1 < (byte)*pcVar3;
                            if (bVar1 != *pcVar3) {
LAB_00c81220:
                              uVar8 = -(uint)bVar12 | 1;
                              goto LAB_00c81225;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar2[1];
                            bVar12 = bVar1 < (byte)pcVar3[1];
                            if (bVar1 != pcVar3[1]) goto LAB_00c81220;
                            pbVar2 = pbVar2 + 2;
                            pcVar3 = pcVar3 + 2;
                          } while (bVar1 != 0);
                          uVar8 = 0;
LAB_00c81225:
                          if (uVar8 == 0) {
                            puVar5[5] = 4;
                          }
                          else {
                            pcVar3 = "Wandering";
                            do {
                              bVar1 = *pbVar7;
                              bVar12 = bVar1 < (byte)*pcVar3;
                              if (bVar1 != *pcVar3) {
LAB_00c81260:
                                uVar8 = -(uint)bVar12 | 1;
                                goto LAB_00c81265;
                              }
                              if (bVar1 == 0) break;
                              bVar1 = pbVar7[1];
                              bVar12 = bVar1 < (byte)pcVar3[1];
                              if (bVar1 != pcVar3[1]) goto LAB_00c81260;
                              pbVar7 = pbVar7 + 2;
                              pcVar3 = pcVar3 + 2;
                            } while (bVar1 != 0);
                            uVar8 = 0;
LAB_00c81265:
                            if (uVar8 == 0) {
                              puVar5[5] = 5;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  pcVar3 = "MaxInRange";
                  pbVar7 = pbVar2;
                  do {
                    bVar1 = *pbVar7;
                    bVar12 = bVar1 < (byte)*pcVar3;
                    if (bVar1 != *pcVar3) {
LAB_00c812a0:
                      uVar8 = -(uint)bVar12 | 1;
                      goto LAB_00c812a5;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar7[1];
                    bVar12 = bVar1 < (byte)pcVar3[1];
                    if (bVar1 != pcVar3[1]) goto LAB_00c812a0;
                    pbVar7 = pbVar7 + 2;
                    pcVar3 = pcVar3 + 2;
                  } while (bVar1 != 0);
                  uVar8 = 0;
LAB_00c812a5:
                  if (uVar8 == 0) {
                    pcVar3 = (char *)FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
                    FID_conflict__sscanf(pcVar3,"%d",puVar5 + 6);
                    pcVar3 = (char *)FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
                    FID_conflict__sscanf(pcVar3,"%f",puVar5 + 7);
                  }
                  else {
                    pcVar3 = "Offset";
                    pbVar7 = pbVar2;
                    do {
                      bVar1 = *pbVar7;
                      bVar12 = bVar1 < (byte)*pcVar3;
                      if (bVar1 != *pcVar3) {
LAB_00c81310:
                        uVar8 = -(uint)bVar12 | 1;
                        goto LAB_00c81315;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar7[1];
                      bVar12 = bVar1 < (byte)pcVar3[1];
                      if (bVar1 != pcVar3[1]) goto LAB_00c81310;
                      pbVar7 = pbVar7 + 2;
                      pcVar3 = pcVar3 + 2;
                    } while (bVar1 != 0);
                    uVar8 = 0;
LAB_00c81315:
                    if (uVar8 == 0) {
                      pcVar3 = (char *)FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
                      FID_conflict__sscanf(pcVar3,"%f",&local_20);
                      pcVar3 = (char *)FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
                      FID_conflict__sscanf(pcVar3,"%f",&local_1c);
                      pcVar3 = (char *)FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
                      FID_conflict__sscanf(pcVar3,"%f",&local_18);
                      puVar5[0x28] = local_20;
                      puVar5[0x29] = local_1c;
                      puVar5[0x2a] = local_18;
                      puVar5[0x2b] = local_14;
                    }
                    else {
                      pcVar3 = "WillAttractPeds";
                      pbVar7 = pbVar2;
                      do {
                        bVar1 = *pbVar7;
                        bVar12 = bVar1 < (byte)*pcVar3;
                        if (bVar1 != *pcVar3) {
LAB_00c813d7:
                          uVar8 = -(uint)bVar12 | 1;
                          goto LAB_00c813dc;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar7[1];
                        bVar12 = bVar1 < (byte)pcVar3[1];
                        if (bVar1 != pcVar3[1]) goto LAB_00c813d7;
                        pbVar7 = pbVar7 + 2;
                        pcVar3 = pcVar3 + 2;
                      } while (bVar1 != 0);
                      uVar8 = 0;
LAB_00c813dc:
                      if (uVar8 == 0) {
                        *(undefined1 *)(puVar5 + 10) = 1;
                      }
                      else {
                        pcVar3 = "TimeTillPedLeaves";
                        pbVar7 = pbVar2;
                        do {
                          bVar1 = *pbVar7;
                          bVar12 = bVar1 < (byte)*pcVar3;
                          if (bVar1 != *pcVar3) {
LAB_00c81410:
                            uVar8 = -(uint)bVar12 | 1;
                            goto LAB_00c81415;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar7[1];
                          bVar12 = bVar1 < (byte)pcVar3[1];
                          if (bVar1 != pcVar3[1]) goto LAB_00c81410;
                          pbVar7 = pbVar7 + 2;
                          pcVar3 = pcVar3 + 2;
                        } while (bVar1 != 0);
                        uVar8 = 0;
LAB_00c81415:
                        if (uVar8 == 0) {
                          pcVar3 = (char *)FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
                          FID_conflict__sscanf(pcVar3,"%f",puVar5 + 9);
                        }
                        else {
                          pcVar3 = "SetSpecificModel";
                          pbVar7 = pbVar2;
                          do {
                            bVar1 = *pbVar7;
                            bVar12 = bVar1 < (byte)*pcVar3;
                            if (bVar1 != *pcVar3) {
LAB_00c81462:
                              uVar8 = -(uint)bVar12 | 1;
                              goto LAB_00c81467;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar7[1];
                            bVar12 = bVar1 < (byte)pcVar3[1];
                            if (bVar1 != pcVar3[1]) goto LAB_00c81462;
                            pbVar7 = pbVar7 + 2;
                            pcVar3 = pcVar3 + 2;
                          } while (bVar1 != 0);
                          uVar8 = 0;
LAB_00c81467:
                          if (uVar8 == 0) {
                            FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
                            iVar11 = FUN_009dc680(extraout_ECX_06,extraout_EDX_03);
                            puVar5[0xd] = iVar11;
                            *(bool *)(puVar5 + 0xc) = iVar11 != -1;
                          }
                          else {
                            pcVar3 = "SetSpecificPopcycleGroup";
                            pbVar7 = pbVar2;
                            do {
                              bVar1 = *pbVar7;
                              bVar12 = bVar1 < (byte)*pcVar3;
                              if (bVar1 != *pcVar3) {
LAB_00c814b7:
                                uVar8 = -(uint)bVar12 | 1;
                                goto LAB_00c814bc;
                              }
                              if (bVar1 == 0) break;
                              bVar1 = pbVar7[1];
                              bVar12 = bVar1 < (byte)pcVar3[1];
                              if (bVar1 != pcVar3[1]) goto LAB_00c814b7;
                              pbVar7 = pbVar7 + 2;
                              pcVar3 = pcVar3 + 2;
                            } while (bVar1 != 0);
                            uVar8 = 0;
LAB_00c814bc:
                            if (uVar8 == 0) {
                              pbVar2 = (byte *)FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
                              puVar5[0xf] = 0xffffffff;
                              iVar11 = 0;
                              do {
                                pbVar9 = (byte *)FUN_00c0b1c0(iVar11);
                                pbVar7 = pbVar2;
                                do {
                                  bVar1 = *pbVar9;
                                  bVar12 = bVar1 < *pbVar7;
                                  if (bVar1 != *pbVar7) {
LAB_00c81510:
                                    uVar8 = -(uint)bVar12 | 1;
                                    goto LAB_00c81515;
                                  }
                                  if (bVar1 == 0) break;
                                  bVar1 = pbVar9[1];
                                  bVar12 = bVar1 < pbVar7[1];
                                  if (bVar1 != pbVar7[1]) goto LAB_00c81510;
                                  pbVar9 = pbVar9 + 2;
                                  pbVar7 = pbVar7 + 2;
                                } while (bVar1 != 0);
                                uVar8 = 0;
LAB_00c81515:
                                if (uVar8 == 0) {
                                  local_28[0xf] = iVar11;
                                }
                                iVar11 = iVar11 + 1;
                              } while (iVar11 < 0x36);
                              *(bool *)(local_28 + 0xe) = local_28[0xf] != -1;
                              puVar5 = local_28;
                            }
                            else {
                              pcVar3 = "ForceModelLoad";
                              pbVar7 = pbVar2;
                              do {
                                bVar1 = *pbVar7;
                                bVar12 = bVar1 < (byte)*pcVar3;
                                if (bVar1 != *pcVar3) {
LAB_00c81560:
                                  uVar8 = -(uint)bVar12 | 1;
                                  goto LAB_00c81565;
                                }
                                if (bVar1 == 0) break;
                                bVar1 = pbVar7[1];
                                bVar12 = bVar1 < (byte)pcVar3[1];
                                if (bVar1 != pcVar3[1]) goto LAB_00c81560;
                                pbVar7 = pbVar7 + 2;
                                pcVar3 = pcVar3 + 2;
                              } while (bVar1 != 0);
                              uVar8 = 0;
LAB_00c81565:
                              if (uVar8 == 0) {
                                *(undefined1 *)(puVar5 + 0x10) = 1;
                              }
                              else {
                                pcVar3 = "LinkedScenario";
                                pbVar7 = pbVar2;
                                do {
                                  bVar1 = *pbVar7;
                                  bVar12 = bVar1 < (byte)*pcVar3;
                                  if (bVar1 != *pcVar3) {
LAB_00c815a0:
                                    uVar8 = -(uint)bVar12 | 1;
                                    goto LAB_00c815a5;
                                  }
                                  if (bVar1 == 0) break;
                                  bVar1 = pbVar7[1];
                                  bVar12 = bVar1 < (byte)pcVar3[1];
                                  if (bVar1 != pcVar3[1]) goto LAB_00c815a0;
                                  pbVar7 = pbVar7 + 2;
                                  pcVar3 = pcVar3 + 2;
                                } while (bVar1 != 0);
                                uVar8 = 0;
LAB_00c815a5:
                                if (uVar8 == 0) {
                                  FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
                                  uVar4 = FUN_00c80ac0(extraout_ECX_07,extraout_EDX_04);
                                  puVar5[8] = uVar4;
                                }
                                else {
                                  pcVar3 = "SetSpawnInterval";
                                  pbVar7 = pbVar2;
                                  do {
                                    bVar1 = *pbVar7;
                                    bVar12 = bVar1 < (byte)*pcVar3;
                                    if (bVar1 != *pcVar3) {
LAB_00c815f0:
                                      uVar8 = -(uint)bVar12 | 1;
                                      goto LAB_00c815f5;
                                    }
                                    if (bVar1 == 0) break;
                                    bVar1 = pbVar7[1];
                                    bVar12 = bVar1 < (byte)pcVar3[1];
                                    if (bVar1 != pcVar3[1]) goto LAB_00c815f0;
                                    pbVar7 = pbVar7 + 2;
                                    pcVar3 = pcVar3 + 2;
                                  } while (bVar1 != 0);
                                  uVar8 = 0;
LAB_00c815f5:
                                  if (uVar8 == 0) {
                                    pcVar3 = (char *)FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
                                    FID_conflict__sscanf(pcVar3,"%d",puVar5 + 0x12);
                                  }
                                  else {
                                    pcVar3 = "BlockModel";
                                    do {
                                      bVar1 = *pbVar2;
                                      bVar12 = bVar1 < (byte)*pcVar3;
                                      if (bVar1 != *pcVar3) {
LAB_00c81640:
                                        uVar8 = -(uint)bVar12 | 1;
                                        goto LAB_00c81645;
                                      }
                                      if (bVar1 == 0) break;
                                      bVar1 = pbVar2[1];
                                      bVar12 = bVar1 < (byte)pcVar3[1];
                                      if (bVar1 != pcVar3[1]) goto LAB_00c81640;
                                      pbVar2 = pbVar2 + 2;
                                      pcVar3 = pcVar3 + 2;
                                    } while (bVar1 != 0);
                                    uVar8 = 0;
LAB_00c81645:
                                    if ((uVar8 == 0) &&
                                       (FUN_00dfd258((byte *)0x0,(byte *)" ,\t()"),
                                       *(ushort *)(puVar5 + 0x25) < 0x10)) {
                                      uVar4 = FUN_009dc680(extraout_ECX_08,extraout_EDX_05);
                                      puVar5[*(ushort *)(puVar5 + 0x25) + 0x15] = uVar4;
                                      *(short *)(puVar5 + 0x25) = *(short *)(puVar5 + 0x25) + 1;
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
                }
              }
            }
            uVar13 = FUN_00dfd258((byte *)0x0,(byte *)" ,\t()");
            iVar11 = (int)uVar13;
            uVar6 = extraout_ECX_09;
            uVar4 = local_24;
          }
        }
      }
    }
    pbVar2 = FUN_009d6a50(uVar6,uVar10,uVar4);
    uVar6 = extraout_ECX_10;
    uVar10 = extraout_EDX_06;
  } while( true );
}


/* 0xC84C40 */

void Initializescrollbarsdat()

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (*(ushort *)(DAT_01bb5628 + 1) != 0) {
    piVar2 = (int *)(*DAT_01bb5628 + 0x80);
    do {
      if (*piVar2 == 0x2c) {
        piVar2 = (int *)(iVar1 * 0x88 + *DAT_01bb5628);
        goto LAB_00c84c76;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x22;
    } while (iVar1 < (int)(uint)*(ushort *)(DAT_01bb5628 + 1));
  }
  piVar2 = DAT_01bb5628 + 0x1a4;
LAB_00c84c76:
  if (piVar2[0x21] != -1) {
    FUN_00c84cd0((char *)piVar2);
    return;
  }
  FUN_00c84cd0("common:/data/scrollbars.dat");
  return;
}

/* 0xB31A90 */

void InitializeShockingEventsdat()

{
  byte bVar1;
  int iVar2;
  byte *_Src;
  uint uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  byte *pbVar5;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *pbVar6;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  bool bVar7;
  undefined8 uVar8;
  byte local_24 [32];
  uint local_4;
  
  local_4 = DAT_01057fb4 ^ (uint)local_24;
  FUN_008c5220();
  uVar8 = Filemgr::Read("common:/data/ShockingEvents.dat","rb");
  iVar2 = (int)uVar8;
  if (iVar2 != 0) {
    _Src = FUN_008c4e70(extraout_ECX,(int)((ulonglong)uVar8 >> 0x20),iVar2,'\x01');
    while (_Src != (byte *)0x0) {
      pbVar5 = (byte *)0xead124;
      pbVar6 = _Src;
      do {
        bVar1 = *pbVar6;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00b31b00:
          uVar3 = -(uint)bVar7 | 1;
          goto LAB_00b31b05;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00b31b00;
        pbVar6 = pbVar6 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_00b31b05:
      if (uVar3 == 0) break;
      if (*_Src != 0x3b) {
        FID_conflict__sscanf((char *)_Src,"%s",local_24);
        iVar4 = FUN_00b30d20(local_24);
        pbVar5 = extraout_ECX_00;
        pbVar6 = extraout_EDX;
        if (0 < iVar4) {
          FUN_00b31810(&DAT_01661410 + iVar4 * 0x34,_Src,iVar4);
          pbVar5 = extraout_ECX_01;
          pbVar6 = extraout_EDX_00;
        }
      }
      _Src = FUN_008c4e70(pbVar5,pbVar6,iVar2,'\x01');
    }
    FUN_008c4650();
  }
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

