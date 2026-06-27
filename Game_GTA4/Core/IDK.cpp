
// 0x5CE120

// IDK How to Name This File

void GetPropertiesLoadingScreen(void)

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
  char CLocateOptionalFlags [32];
  char CLocateEssentialFlags [32];
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
            CLocateOptionalFlags[0] = '\0';
            FID_conflict__sscanf((char *)_Src,"%s",CLocateEssentialFlags);
            iVar12 = __stricmp(CLocateEssentialFlags,"OBJECTS");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %*s %d",&local_dc);
              (&DAT_019d3b64)[DAT_018b6f3c * 100] = local_dc;
            }
            iVar12 = __stricmp(CLocateEssentialFlags,"DURATION");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %*s %d",&local_dc);
              (&DAT_019d3b60)[DAT_018b6f3c * 100] = local_dc;
            }
            iVar12 = __stricmp(CLocateEssentialFlags,"FLAG");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %*s %s",CLocateOptionalFlags);
              iVar12 = __stricmp(CLocateOptionalFlags,"LEGAL");
              if (iVar12 == 0) {
                (&DAT_019d3b68)[DAT_018b6f3c * 100] = 1;
              }
              else {
                iVar12 = __stricmp(CLocateOptionalFlags,"WAIT_FOR_AUDIO");
                if (iVar12 == 0) {
                  (&DAT_019d3b68)[DAT_018b6f3c * 100] = 7;
                }
                else {
                  iVar12 = __stricmp(CLocateOptionalFlags,"LEGAL2");
                  if (iVar12 == 0) {
                    (&DAT_019d3b68)[DAT_018b6f3c * 100] = 2;
                  }
                  else {
                    iVar12 = __stricmp(CLocateOptionalFlags,"START_INTRO");
                    if (iVar12 == 0) {
                      (&DAT_019d3b68)[DAT_018b6f3c * 100] = 3;
                    }
                    else {
                      iVar12 = __stricmp(CLocateOptionalFlags,"END_INTRO");
                      if (iVar12 == 0) {
                        (&DAT_019d3b68)[DAT_018b6f3c * 100] = 4;
                      }
                      else {
                        iVar12 = __stricmp(CLocateOptionalFlags,"START_EPISODE");
                        if (iVar12 == 0) {
                          (&DAT_019d3b68)[DAT_018b6f3c * 100] = 5;
                        }
                        else {
                          iVar12 = __stricmp(CLocateOptionalFlags,"INITIAL_MAIN");
                          if (iVar12 == 0) {
                            if (DAT_018b6f2f == '\0') {
                              DAT_018b6f3c = 0;
                            }
                            (&DAT_019d3b68)[DAT_018b6f3c * 100] = 6;
                          }
                          else {
                            iVar12 = __stricmp(CLocateOptionalFlags,"LAST_INGAME");
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
            iVar12 = __stricmp(CLocateEssentialFlags,"FADE");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %*s %s",CLocateOptionalFlags);
              iVar12 = __stricmp(CLocateOptionalFlags,"IN_OUT");
              if (iVar12 == 0) {
                (&DAT_019d3b6c)[DAT_018b6f3c * 100] = 1;
              }
              else {
                iVar12 = __stricmp(CLocateOptionalFlags,"IN");
                if (iVar12 == 0) {
                  (&DAT_019d3b6c)[DAT_018b6f3c * 100] = 2;
                }
                else {
                  iVar12 = __stricmp(CLocateOptionalFlags,"OUT");
                  if (iVar12 == 0) {
                    (&DAT_019d3b6c)[DAT_018b6f3c * 100] = 3;
                  }
                  else {
                    (&DAT_019d3b6c)[DAT_018b6f3c * 100] = 0;
                  }
                }
              }
            }
            iVar12 = __stricmp(CLocateEssentialFlags,"TEXTURE");
            if (iVar12 == 0) {
              FID_conflict__sscanf
                        ((char *)_Src,"%*s %d %*s %s %s",&local_dc,CLocateOptionalFlags,local_2c);
              pcVar7 = CLocateOptionalFlags;
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
            iVar12 = __stricmp(CLocateEssentialFlags,"STARTTIME");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %d",&local_dc,&local_d4);
              (&DAT_019d3b28)[DAT_018b6f3c * 100 + local_dc * 0x18] = local_d4;
            }
            iVar12 = __stricmp(CLocateEssentialFlags,"ENDTIME");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %d",&local_dc,&local_d4);
              *(undefined4 *)(&DAT_019d3b2c + local_dc * 0x60 + DAT_018b6f3c * 400) = local_d4;
            }
            iVar12 = __stricmp(CLocateEssentialFlags,"MOVETIME");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %d",&local_dc,&local_d4);
              (&DAT_019d3b30)[DAT_018b6f3c * 100 + local_dc * 0x18] = local_d4;
            }
            iVar12 = __stricmp(CLocateEssentialFlags,"SCALETIME");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %d",&local_dc,&local_d4);
              (&DAT_019d3b34)[DAT_018b6f3c * 100 + local_dc * 0x18] = local_d4;
            }
            iVar12 = __stricmp(CLocateEssentialFlags,"STARTPOS");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %f %f",&local_dc,&local_d0,&local_cc);
              iVar12 = DAT_018b6f3c;
              local_c8 = local_d0;
              local_c4 = local_cc;
              (&DAT_019d3b40)[DAT_018b6f3c * 100 + local_dc * 0x18] = local_d0;
              (&DAT_019d3b44)[iVar12 * 100 + local_dc * 0x18] = local_cc;
            }
            iVar12 = __stricmp(CLocateEssentialFlags,"MOVEAMOUNT");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %f %f",&local_dc,&local_d0,&local_cc);
              iVar12 = DAT_018b6f3c;
              local_b8 = local_d0;
              local_b4 = local_cc;
              (&DAT_019d3b48)[DAT_018b6f3c * 100 + local_dc * 0x18] = local_d0;
              (&DAT_019d3b4c)[iVar12 * 100 + local_dc * 0x18] = local_cc;
            }
            iVar12 = __stricmp(CLocateEssentialFlags,"STARTSIZE");
            if (iVar12 == 0) {
              FID_conflict__sscanf((char *)_Src,"%*s %d %*s %f %f",&local_dc,&local_d0,&local_cc);
              iVar12 = DAT_018b6f3c;
              local_c0 = local_d0;
              local_bc = local_cc;
              (&DAT_019d3b50)[DAT_018b6f3c * 100 + local_dc * 0x18] = local_d0;
              (&DAT_019d3b54)[iVar12 * 100 + local_dc * 0x18] = local_cc;
            }
            iVar11 = __stricmp(CLocateEssentialFlags,"SCALEAMOUNT");
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

