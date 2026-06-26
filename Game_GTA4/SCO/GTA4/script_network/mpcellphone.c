void main()
{
    unknown uVar2;
    boolean bVar3;

    l_U0 = 225;
    l_U1 = -1;
    bVar3 = true;
    g_U91._fU496 = GET_IS_HIDEF();
    g_U555 = 9;
    g_U91._fU0 = 1000;
    g_U91._fU1484 = 0;
    g_U565 = 19;
    g_U566 = 19;
    g_U91._fU60 = -1;
    g_U91._fU636 = 33;
    g_U91._fU632 = 0;
    sub_135( "\n ======================" );
    sub_135( "\n TALKER FOCUS SET TO -1" );
    sub_135( "\n ======================" );
    NETWORK_SET_TALKER_FOCUS( -1 );
    THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    g_U91._fU568 = NETWORK_GET_NUM_UNACCEPTED_INVITES();
    if (g_U91._fU568 == 0)
    {
        g_U91._fU572 = 0;
    }
    else
    {
        g_U91._fU572 = 1;
    }
    while (true)
    {
        WAIT( 0 );
        if (NETWORK_HAVE_SUMMONS())
        {
            sub_135( "\n #### MPcellphone NETWORK_HAVE_SUMMONS" );
            if (NOT NETWORK_IS_OPERATION_PENDING())
            {
                g_U15 = GET_EPISODE_INDEX_FROM_SUMMONS();
                g_U10 = 1;
                sub_135( "\n #### MPcellphone setting g_bWantToShutdownForNetworkGame = TRUE as NETWORK_HAVE_SUMMONS" );
            }
            else
            {
                sub_135( "\n #### MPcellphone NETWORK_IS_OPERATION_PENDING is returning TRUE" );
            }
        }
        if (NOT g_U91._fU580)
        {
            if (IS_PLAYER_PLAYING( sub_586() ))
            {
                switch (g_U555)
                {
                    case 9:
                    if ((g_U91._fU48) || (g_U91._fU52))
                    {
                        if ((sub_673()) || (g_U91._fU376))
                        {
                            while (NOT (sub_1219( 5 )))
                            {
                                WAIT( 0 );
                            }
                        }
                    }
                    else if (g_U91._fU632 == 1)
                    {
                        if (sub_673())
                        {
                            while (NOT (sub_1219( 4 )))
                            {
                                WAIT( 0 );
                            }
                        }
                    }
                    else if ((sub_4592( 0 )) == 0)
                    {
                        if (NETWORK_IS_RENDEZVOUS())
                        {
                            if (IS_SCREEN_FADED_IN())
                            {
                                while (NOT (sub_1219( 7 )))
                                {
                                    WAIT( 0 );
                                }
                            }
                        }
                        else if ((sub_673()) AND (NOT CODE_WANTS_MOBILE_PHONE_REMOVED_FOR_WEAPON_SWITCHING()))
                        {
                            g_U91._fU376 = 0;
                            g_U91._fU380 = 1;
                            while (NOT (sub_1219( 4 )))
                            {
                                WAIT( 0 );
                            }
                        }
                    };;;
                    break;
                    default:
                    if (NOT (IS_THREAD_ACTIVE( g_U556[g_U555] )))
                    {
                        sub_8773();
                    }
                    break;
                }
                switch (g_U91._fU632)
                {
                    case 4:
                    NETWORK_SET_TALKER_FOCUS( -1 );
                    if (bVar3)
                    {
                        PLAY_SOUND_FRONTEND( -1, "PHONE_DEAD" );
                        SET_PHONE_HUD_ITEM( 7, "CP_INFO_DISCON", 1 );
                        bVar3 = false;
                    }
                    if (g_U91._fU0 != 1064)
                    {
                        sub_9376( 33, 0 );
                        bVar3 = true;
                    }
                    break;
                    case 6:
                    if (g_U91._fU0 != 1064)
                    {
                        sub_9376( 33, 0 );
                    }
                    break;
                    default:
                    SETTIMERB( 0 );
                    break;
                }
            }
        }
        if ((NOT (# -NULL-0xc27c84())) AND (NOT (# -NULL-0xc27bfa())))
        {
            if (IS_PLAYER_PLAYING( sub_586() ))
            {
                if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_586() ))
                {
                    if (NETWORK_CHECK_INVITE_ARRIVAL())
                    {
                        g_U91._fU572 = 1;
                        PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
                        SET_PHONE_HUD_ITEM( 10, "INVITE_REC", 0 );
                        NETWORK_CLEAR_INVITE_ARRIVAL();
                    }
                }
            }
            if (g_U91._fU572)
            {
                g_U91._fU568 = NETWORK_GET_NUM_UNACCEPTED_INVITES();
                if (g_U91._fU568 == 0)
                {
                    g_U91._fU572 = 0;
                }
            }
        }
    }
    return;
}

void sub_135(unknown uParam0)
{
    return;
}

void sub_586()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_673()
{
    if (NOT (IS_PLAYER_PLAYING( sub_586() )))
    {
        sub_135( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_135( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_135( "\n PHONE CHECK - .overrideCellphoneChecks is returning TRUE." );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_135( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_CONTROL_ON( sub_586() )))
    {
        sub_135( "\n PHONE CHECK - IS_PLAYER_CONTROL_ON is returning FALSE" );
        return 0;
    }
    if (IS_IN_SPECTATOR_MODE())
    {
        sub_135( "\n PHONE CHECK - player IS_IN_SPECTATOR_MODE" );
        return 0;
    }
    return 1;
}

int sub_1219(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    sub_1231( ref uVar3, uParam0 );
    REQUEST_SCRIPT( ref uVar3 );
    if (NOT (HAS_SCRIPT_LOADED( ref uVar3 )))
    {
        return 0;
    }
    g_U91._fU552 = USING_STANDARD_CONTROLS();
    sub_1596();
    SET_BITS_IN_RANGE( ref g_U91._fU96, 0, 15, 3 );
    g_U91._fU0 = 1000;
    g_U91._fU504 = 0;
    g_U91._fU1484 = 0;
    g_U555 = uParam0;
    g_U556[uParam0] = START_NEW_SCRIPT( ref uVar3, 16888 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref uVar3 );
    return 1;
}

void sub_1231(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        StrCopy( (uParam0^), "SPcellphoneMain", 32 );
        break;
        case 1:
        StrCopy( (uParam0^), "SPcellphoneCalling", 32 );
        break;
        case 2:
        StrCopy( (uParam0^), "SPcellphoneNetwork", 32 );
        break;
        case 3:
        StrCopy( (uParam0^), "SPcellphoneTutorial", 32 );
        break;
        case 4:
        StrCopy( (uParam0^), "MPcellphoneMain", 32 );
        break;
        case 5:
        StrCopy( (uParam0^), "MPcellphoneCalling", 32 );
        break;
        case 6:
        StrCopy( (uParam0^), "MPcellphoneNetwork", 32 );
        break;
        case 7:
        StrCopy( (uParam0^), "MPcellphoneParty", 32 );
        break;
    }
    return;
}

void sub_1596()
{
    sub_1605();
    return;
}

void sub_1605()
{
    char[16] cVar2;
    char[32] cVar6;
    boolean bVar14;

    StrCopy( ref cVar2, "phone3D_LQ", 16 );
    StrCopy( ref cVar6, "phone3D_dial", 32 );
    sub_1697( "\n Number of phone textures loaded is ", g_U481._fU160 );
    if (g_U481._fU160 == 0)
    {
        if (g_U91._fU40 == 2)
        {
            StrCopy( ref cVar2, "phone3D_HQ", 16 );
        }
        REQUEST_STREAMED_TXD( ref cVar2, 1 );
        sub_135( "\n requested streamed txd - " );
        sub_135( "mainTXD" );
        bVar14 = true;
        sub_1832( 1, ref g_U91._fU8 );
        sub_2462();
        CREATE_MOBILE_PHONE( 2 );
        if (NOT IS_NETWORK_SESSION())
        {
            REQUEST_STREAMED_TXD( ref cVar6, 1 );
            bVar14 = false;
        }
        while ((NOT (HAS_STREAMED_TXD_LOADED( ref cVar2 ))) || (NOT bVar14))
        {
            WAIT( 0 );
            if (NOT bVar14)
            {
                if (HAS_STREAMED_TXD_LOADED( ref cVar6 ))
                {
                    bVar14 = true;
                }
            }
        }
        g_U481._fU0[0] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "menuArrow" );
        g_U481._fU0[1] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad1" );
        g_U481._fU0[2] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad2" );
        g_U481._fU0[3] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad3" );
        g_U481._fU0[4] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad4" );
        g_U481._fU0[5] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad5" );
        g_U481._fU0[6] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad6" );
        g_U481._fU0[7] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad7" );
        g_U481._fU0[8] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad8" );
        g_U481._fU0[9] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad9" );
        g_U481._fU0[10] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypadStar" );
        g_U481._fU0[11] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad0" );
        g_U481._fU0[12] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypadHash" );
        g_U481._fU0[13] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypadPhoneLeft" );
        g_U481._fU0[14] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypadPhoneRight" );
        g_U481._fU0[15] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "alertMsg" );
        g_U481._fU0[16] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "alertBell" );
        g_U481._fU0[17] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "alertInvite" );
        g_U481._fU0[18] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "inGTA" );
        if (g_U91._fU40 == 2)
        {
            g_U481._fU0[19] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "envelope1" );
            g_U481._fU0[20] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "envelope2" );
            g_U481._fU160 = 21;
            sub_3270( 0 );
        }
        else
        {
            g_U481._fU0[19] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "background" );
            g_U481._fU160 = 20;
        }
        if ((NOT g_U481._fU164) AND (NOT IS_NETWORK_SESSION()))
        {
            g_U481._fU88[0] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad1" );
            g_U481._fU88[1] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad2" );
            g_U481._fU88[2] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad3" );
            g_U481._fU88[3] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad4" );
            g_U481._fU88[4] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad5" );
            g_U481._fU88[5] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad6" );
            g_U481._fU88[6] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad7" );
            g_U481._fU88[7] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad8" );
            g_U481._fU88[8] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad9" );
            g_U481._fU88[9] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypadStar" );
            g_U481._fU88[10] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad0" );
            g_U481._fU88[11] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypadHash" );
            g_U481._fU140 = GET_TXD( "buttons" );
            if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
            {
                g_U481._fU144[0] = GET_TEXTURE( g_U481._fU140, "A_butt" );
                g_U481._fU144[1] = GET_TEXTURE( g_U481._fU140, "X_butt" );
                g_U481._fU144[2] = GET_TEXTURE( g_U481._fU140, "B_butt" );
            }
            else
            {
                g_U481._fU144[0] = GET_TEXTURE( g_U481._fU140, "p_Cross" );
                g_U481._fU144[1] = GET_TEXTURE( g_U481._fU140, "p_Square" );
                g_U481._fU144[2] = GET_TEXTURE( g_U481._fU140, "p_Circle" );
            }
            g_U481._fU164 = 1;
        }
        sub_135( "\n streamed txd's loaded" );
    }
    return;
}

void sub_1697(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1832(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        if ((g_U91._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_1949( uParam1, 11.50000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        else
        {
            sub_1949( uParam1, 5.00000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        break;
        case 2:
        if ((g_U91._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_1949( uParam1, 11.50000000, -11.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        else
        {
            sub_1949( uParam1, 5.00000000, -7.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        break;
        case 3:
        if ((g_U91._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_1949( uParam1, 11.50000000, 4.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        else
        {
            sub_1949( uParam1, 5.00000000, 8.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        break;
        case 4:
        if ((g_U91._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_1949( uParam1, 11.50000000, -5.25000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        else
        {
            sub_1949( uParam1, 5.00000000, -0.75000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        break;
    }
    return;
}

void sub_1949(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    iParam0->_fU0 = {uParam1};
    iParam0->_fU12 = {uParam4};
    iParam0->_fU24 = uParam7;
    iParam0->_fU28 = uParam1._fU0;
    return;
}

void sub_2462()
{
    SET_MOBILE_PHONE_SCALE( g_U91._fU8._fU24 );
    SET_MOBILE_PHONE_POSITION( g_U91._fU8._fU0 );
    SET_MOBILE_PHONE_ROTATION( g_U91._fU8._fU12 );
    return;
}

void sub_3270(unknown uParam0)
{
    char[32] cVar3;

    StrCopy( ref cVar3, "phone3D_HQ_private", 32 );
    ConcatString(ref cVar3, g_U91._fU396, 32);
    REQUEST_STREAMED_TXD( ref cVar3, 1 );
    while (NOT (HAS_STREAMED_TXD_LOADED( ref cVar3 )))
    {
        WAIT( 0 );
    }
    sub_3353( uParam0 );
    g_U523._fU0[0] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar3, "background" );
    g_U523._fU0[1] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar3, "logo" );
    g_U523._fU0[2] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar3, "animated" );
    g_U523._fU16 = 1;
    return;
}

void sub_3353(boolean bParam0)
{
    int I;
    char[32] cVar4;

    StrCopy( ref cVar4, "phone3D_HQ_private", 32 );
    if (bParam0)
    {
        ConcatString(ref cVar4, g_U91._fU400, 32);
    }
    else
    {
        ConcatString(ref cVar4, g_U91._fU396, 32);
    }
    if (g_U523._fU16)
    {
        for ( I = 0; I <= 2; I++ )
        {
            RELEASE_TEXTURE( g_U523._fU0[I] );
        }
        MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( ref cVar4 );
        g_U523._fU16 = 0;
    }
    return;
}

void sub_4592(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int Result;
    unknown uVar6;
    int iVar7;
    int iVar8;

    iVar4 = uParam0;
    iVar7 = 19;
    iVar8 = 0;
    GET_MOUSE_WHEEL( ref iVar8 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        return 19;
    }
    switch (g_U565)
    {
        case 1:
        if ((((NOT (IS_BUTTON_PRESSED( 0, 9 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 )))) AND (iVar8 <= 0)) AND ((NOT (IS_CONTROL_PRESSED( 2, 22 ))) || (NOT IS_USING_CONTROLLER())))
        {
            Result = sub_4758( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if ((iVar3 >= g_U568) AND (g_U91._fU484))
            {
                g_U565 = 5;
                return 19;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 5:
        if (((NOT (IS_BUTTON_PRESSED( 0, 9 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 )))) AND (iVar8 <= 0))
        {
            Result = sub_4758( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if (iVar3 >= g_U91._fU488)
            {
                g_U91._fU488 = iVar3 + g_U91._fU492;
                return 1;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 0:
        if ((((NOT (IS_BUTTON_PRESSED( 0, 8 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 21 )))) AND (iVar8 >= 0))
        {
            Result = sub_4758( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if ((iVar3 >= g_U568) AND (g_U91._fU484))
            {
                g_U565 = 4;
                return 19;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 4:
        if (((NOT (IS_BUTTON_PRESSED( 0, 8 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 )))) AND (iVar8 >= 0))
        {
            Result = sub_4758( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if (iVar3 >= g_U91._fU488)
            {
                g_U91._fU488 = iVar3 + g_U91._fU492;
                return 0;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 2:
        if ((NOT (IS_BUTTON_PRESSED( 0, 10 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 1 ))))
        {
            Result = sub_4758( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 3:
        if ((NOT (IS_BUTTON_PRESSED( 0, 11 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 1 ))))
        {
            Result = sub_4758( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 18:
        if ((NOT (IS_CONTROL_PRESSED( 2, 22 ))) AND (NOT IS_USING_CONTROLLER()))
        {
            Result = sub_4758( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        Result = sub_4758( iVar4 );
        break;
    }
    if (Result != 19)
    {
        iVar4 = 0;
    }
    switch (g_U566)
    {
        case 6:
        if ((((NOT IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 77 )))) AND ((IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 181 ))))) AND (NOT (IS_MOUSE_BUTTON_PRESSED( 1 ))))
        {
            uVar6 = sub_7338( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 7:
        if ((((NOT IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND ((IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 182 ))))) AND (NOT (IS_MOUSE_BUTTON_PRESSED( 2 ))))
        {
            uVar6 = sub_7338( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        uVar6 = sub_7338( iVar4 );
        break;
    }
    if (IS_NUMLOCK_ENABLED())
    {
        switch (g_U567)
        {
            case 8:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 82 )))
            {
                iVar7 = sub_7800( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 9:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 79 )))
            {
                iVar7 = sub_7800( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 10:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 80 )))
            {
                iVar7 = sub_7800( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 11:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 81 )))
            {
                iVar7 = sub_7800( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 12:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 75 )))
            {
                iVar7 = sub_7800( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 13:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 76 )))
            {
                iVar7 = sub_7800( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 14:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 77 )))
            {
                iVar7 = sub_7800( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 15:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 71 )))
            {
                iVar7 = sub_7800( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 16:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 72 )))
            {
                iVar7 = sub_7800( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 17:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 73 )))
            {
                iVar7 = sub_7800( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            default:
            iVar7 = sub_7800( iVar4 );
            break;
        }
    }
    if (Result != 19)
    {
        return Result;
    }
    if (iVar7 != 19)
    {
        return iVar7;
    }
    return uVar6;
}

void sub_4758(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;

    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    GET_MOUSE_WHEEL( ref iVar11 );
    if (IS_CONTROL_PRESSED( 2, 21 ))
    {
        iVar9 = 1;
    }
    if (IS_CONTROL_PRESSED( 2, 22 ))
    {
        iVar10 = 1;
    }
    if ((IS_BUTTON_PRESSED( 0, 11 )) || (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 1 )))
    {
        bVar3 = true;
    }
    if ((IS_BUTTON_PRESSED( 0, 9 )) || (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 )))
    {
        bVar4 = true;
    }
    if (IS_BUTTON_PRESSED( 0, 8 ))
    {
        bVar5 = true;
    }
    if ((IS_BUTTON_PRESSED( 0, 10 )) || (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 1 )))
    {
        bVar6 = true;
    }
    if (((iVar11 > 0) AND (g_U91._fU0 != 1002)) AND (g_U91._fU0 != 1003))
    {
        iVar7 = 1;
    }
    if ((((IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 )) AND (g_U91._fU0 != 1000)) AND (g_U91._fU0 != 1002)) || ((((iVar11 < 0) AND (g_U91._fU0 != 1000)) AND (g_U91._fU0 != 1002)) AND (g_U91._fU0 != 1003)))
    {
        iVar8 = 1;
    }
    if ((iVar9) AND ((g_U91._fU0 == 1000) || (g_U91._fU0 == 1002)))
    {
        GET_GAME_TIMER( ref g_U568 );
        g_U568 += 500;
        g_U565 = 0;
        switch (g_U91._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_5159( 2, uParam0 );
            break;
        }
    }
    else if ((iVar10) AND (NOT IS_USING_CONTROLLER()))
    {
        GET_GAME_TIMER( ref g_U568 );
        g_U568 += 500;
        g_U565 = 18;
        switch (g_U91._fU0)
        {
            case 1005: break;
            default:
            sub_5159( 8, uParam0 );
            break;
        }
    }
    else if ((iVar10) AND (g_U91._fU0 == 1002))
    {
        GET_GAME_TIMER( ref g_U568 );
        g_U568 += 500;
        g_U565 = 1;
        switch (g_U91._fU0)
        {
            case 1005: break;
            default:
            sub_5159( 8, uParam0 );
            break;
        }
    }
    else if (((bVar3) AND (NOT bVar5)) AND (NOT bVar4))
    {
        g_U565 = 3;
        if ((g_U91._fU0 == 1003) || (g_U91._fU0 == 1009))
        {
            sub_5159( 7, uParam0 );
        }
    }
    else if ((((bVar4) || (iVar7)) AND (NOT bVar3)) AND (NOT bVar6))
    {
        GET_GAME_TIMER( ref g_U568 );
        g_U568 += 500;
        g_U91._fU488 = 0;
        g_U565 = 1;
        switch (g_U91._fU0)
        {
            case 1005: break;
            default:
            sub_5159( 8, uParam0 );
            break;
        }
    }
    else if ((((bVar5) || (iVar8)) AND (NOT bVar3)) AND (NOT bVar6))
    {
        GET_GAME_TIMER( ref g_U568 );
        g_U568 += 500;
        g_U91._fU488 = 0;
        g_U565 = 0;
        switch (g_U91._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_5159( 2, uParam0 );
            break;
        }
    }
    else if (((bVar6) AND (NOT bVar5)) AND (NOT bVar4))
    {
        g_U565 = 2;
        if ((g_U91._fU0 == 1003) || (g_U91._fU0 == 1009))
        {
            sub_5159( 3, uParam0 );
        }
    }
    else
    {
        g_U565 = 19;
    };;;;;;;
    return g_U565;
}

void sub_5159(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if ((uParam1) AND ((NOT g_U91._fU376) || (g_U91._fU0 == 1005)))
    {
        uVar4 = GET_SOUND_ID();
        if (g_U91._fU0 == 1005)
        {
            PLAY_SOUND_FRONTEND( uVar4, "PHONE_PRESS_KEY_SPEED" );
        }
        else
        {
            PLAY_SOUND_FRONTEND( uVar4, "PHONE_PRESS_KEY" );
        }
        switch (uParam0)
        {
            case 0:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 10.00000000 );
            sub_135( "\n playing keypadTone 10.0" );
            break;
            case 1:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 0.00000000 );
            sub_135( "\n playing keypadTone 0.0" );
            break;
            case 2:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 1.00000000 );
            sub_135( "\n playing keypadTone 1.0" );
            break;
            case 3:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 2.00000000 );
            sub_135( "\n playing keypadTone 2.0" );
            break;
            case 4:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 3.00000000 );
            sub_135( "\n playing keypadTone 3.0" );
            break;
            case 5:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 4.00000000 );
            sub_135( "\n playing keypadTone 4.0" );
            break;
            case 6:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 5.00000000 );
            sub_135( "\n playing keypadTone 5.0" );
            break;
            case 7:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 6.00000000 );
            sub_135( "\n playing keypadTone 6.0" );
            break;
            case 8:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 7.00000000 );
            sub_135( "\n playing keypadTone 7.0" );
            break;
            case 9:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 8.00000000 );
            sub_135( "\n playing keypadTone 8.0" );
            break;
            case 10:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 9.00000000 );
            sub_135( "\n playing keypadTone 9.0" );
            break;
            case 11:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 11.00000000 );
            sub_135( "\n playing keypadTone 11.0" );
            break;
        }
        RELEASE_SOUND_ID( uVar4 );
    }
    return;
}

void sub_7338(unknown uParam0)
{
    if ((((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 181 )))) || (IS_MOUSE_BUTTON_PRESSED( 1 )))
    {
        g_U566 = 6;
        switch (g_U91._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_5159( 6, uParam0 );
            break;
        }
    }
    else if ((((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 78 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 182 )))) || (IS_MOUSE_BUTTON_PRESSED( 2 )))
    {
        g_U566 = 7;
        if (g_U91._fU0 != 1007)
        {
            sub_5159( 4, uParam0 );
        }
    }
    else
    {
        g_U566 = 19;
    }
    return g_U566;
}

void sub_7800(unknown uParam0)
{
    g_U567 = 19;
    if (((g_U91._fU0 == 1003) || (g_U91._fU0 == 1009)) AND (IS_NUMLOCK_ENABLED()))
    {
        if (IS_GAME_KEYBOARD_KEY_PRESSED( 82 ))
        {
            g_U567 = 8;
            sub_5159( 0, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 79 ))
        {
            g_U567 = 9;
            sub_5159( 1, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 80 ))
        {
            g_U567 = 10;
            sub_5159( 2, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 81 ))
        {
            g_U567 = 11;
            sub_5159( 3, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 75 ))
        {
            g_U567 = 12;
            sub_5159( 4, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 76 ))
        {
            g_U567 = 13;
            sub_5159( 5, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 77 ))
        {
            g_U567 = 14;
            sub_5159( 6, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 71 ))
        {
            g_U567 = 15;
            sub_5159( 7, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 72 ))
        {
            g_U567 = 16;
            sub_5159( 8, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 73 ))
        {
            g_U567 = 17;
            sub_5159( 9, uParam0 );
        };;;;;;;;;;
    }
    return g_U567;
}

void sub_8773()
{
    g_U555 = 9;
    sub_8788();
    sub_8933();
    g_U91._fU100 = 0;
    return;
}

void sub_8788()
{
    int I;

    if (g_U555 == 9)
    {
        for ( I = 0; I <= (g_U556 - 1); I++ )
        {
            if (IS_THREAD_ACTIVE( g_U556[I] ))
            {
                DESTROY_THREAD( g_U556[I] );
            }
        }
        g_U91._fU124 = 0;
        g_U91._fU48 = 0;
        g_U91._fU52 = 0;
        g_U91._fU392 = 0;
        g_U91._fU484 = 1;
    }
    return;
}

void sub_8933()
{
    sub_8942();
    sub_3353( 0 );
    return;
}

void sub_8942()
{
    int I;

    if (g_U481._fU160 != 0)
    {
        for ( I = 0; I <= (g_U481._fU160 - 1); I++ )
        {
            RELEASE_TEXTURE( g_U481._fU0[I] );
        }
        MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "phone3D_LQ" );
        MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "phone3D_HQ" );
        g_U481._fU160 = 0;
        if (g_U481._fU164)
        {
            for ( I = 0; I <= 11; I++ )
            {
                RELEASE_TEXTURE( g_U481._fU88[I] );
            }
            MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "phone3D_dial" );
            RELEASE_TEXTURE( g_U481._fU144[0] );
            RELEASE_TEXTURE( g_U481._fU144[1] );
            RELEASE_TEXTURE( g_U481._fU144[2] );
            g_U481._fU164 = 0;
        }
    }
    return;
}

void sub_9376(unknown uParam0, unknown uParam1)
{
    g_U91._fU636 = uParam0;
    g_U91._fU632 = uParam1;
    return;
}
