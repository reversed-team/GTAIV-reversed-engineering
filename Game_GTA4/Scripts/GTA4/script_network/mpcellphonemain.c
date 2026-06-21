void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    int iVar18;

    l_U0 = 225;
    l_U1 = -1;
    l_U2130 = 0;
    l_U2162 = -1;
    l_U2165 = GET_CURRENT_LANGUAGE();
    l_U2166 = -1;
    l_U2167 = -1;
    l_U2168 = -1;
    SETTIMERA( 0 );
    g_U91._fU380 = 1;
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 0 );
    SET_OVERRIDE_NO_SPRINTING_ON_PHONE_IN_MULTIPLAYER( 0 );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    switch (g_U826)
    {
        case 0:
        g_U91._fU496 = GET_IS_HIDEF();
        break;
        case 1:
        g_U91._fU496 = 1;
        break;
        case 2:
        g_U91._fU496 = 0;
        break;
    }
    sub_206( ref l_U2044, ref l_U2031 );
    iVar18 = 4;
    sub_1435( ref l_U2044 );
    if (g_U91._fU0 == 1000)
    {
        sub_2270( ref l_U2079, 1 );
        sub_2999();
        sub_3200();
        sub_3643( 1002 );
    }
    while (true)
    {
        WAIT( 0 );
        sub_3697( ref l_U2044, ref l_U2031 );
        if ((((NOT IS_PLAYER_ONLINE()) AND (IS_IN_LAN_MODE() == 0)) || ((IS_IN_LAN_MODE() == 1) AND (NOT NETWORK_IS_NETWORK_AVAILABLE()))) AND (g_U91._fU0 != 1001))
        {
            sub_3643( 1001 );
        }
        else if (NOT sub_3781())
        {
            if ((sub_4347( ref l_U2079 )) AND (NOT sub_4381()))
            {
                g_U91._fU0 = 1001;
                g_U91._fU100 = 0;
            }
        }
        else if ((g_U91._fU48) || (g_U91._fU52))
        {
            if ((sub_4347( ref l_U2079 )) AND (NOT sub_4381()))
            {
                STOP_MOBILE_PHONE_RINGING();
                if (g_U91._fU48)
                {
                    sub_3643( 1004 );
                }
                else
                {
                    sub_3643( 1005 );
                }
                sub_4551( 5 );
            }
        }
        else if (g_U91._fU632 == 1)
        {
            sub_3643( 1064 );
        };;;;
        if (sub_5027( iVar18 ))
        {
            switch (g_U91._fU0)
            {
                case 1002:
                sub_5305();
                if (sub_27549( ref l_U2079, 2 ))
                {
                    switch (sub_28583( g_U91._fU524 ))
                    {
                        case 6:
                        l_U2109 = -1;
                        sub_3643( 1058 );
                        break;
                        case 7:
                        case 1:
                        case 18:
                        sub_3643( 1001 );
                        break;
                    }
                }
                break;
                case 1058:
                case 1060:
                case 1062:
                case 1072:
                case 1075:
                case 1078:
                case 1084:
                sub_5305();
                switch (sub_28583( g_U91._fU524 ))
                {
                    case 0:
                    sub_32761( ref l_U3, ref l_U228, ref l_U41 );
                    break;
                    case 1:
                    sub_33597( ref l_U3, ref l_U228, ref l_U41 );
                    break;
                    case 7:
                    switch (g_U91._fU0)
                    {
                        case 1058:
                        sub_3643( 1002 );
                        break;
                        case 1060:
                        case 1075:
                        case 1084:
                        l_U2109 = g_U91._fU0;
                        sub_3643( 1058 );
                        break;
                        case 1078:
                        l_U2109 = 1078;
                        sub_3643( 1075 );
                        break;
                        case 1062:
                        l_U2109 = l_U2161;
                        sub_3643( 1060 );
                        break;
                    }
                    break;
                    case 6:
                    switch (g_U91._fU0)
                    {
                        case 1058:
                        switch (l_U3._fU60)
                        {
                            case 1047:
                            while (NOT (sub_4551( 6 )))
                            {
                                WAIT( 0 );
                                sub_5305();
                            }
                            break;
                            case 1060:
                            l_U2109 = -1;
                            l_U2110 = -1;
                            sub_3643( 1060 );
                            break;
                            default:
                            l_U2109 = -1;
                            sub_3643( l_U3._fU60 );
                            break;
                        }
                        break;
                        case 1060:
                        l_U2109 = -1;
                        if (l_U3._fU60 == 100)
                        {
                            sub_3643( 1097 );
                        }
                        else if (l_U3._fU60 == 20)
                        {
                            sub_3643( 1071 );
                        }
                        else
                        {
                            l_U2161 = l_U3._fU60;
                            StrCopy( ref l_U2137, 16, l_U228[l_U3._fU16[l_U3._fU44]]._fU4, 8);
                            sub_3643( 1062 );
                        }
                        break;
                        case 1062:
                        switch (l_U3._fU60)
                        {
                            case 0:
                            l_U2109 = -1;
                            if ((((NETWORK_IS_PLAYER_BLOCKED_BY_ME( l_U2161 )) || (NETWORK_AM_I_BLOCKED_BY_PLAYER( l_U2161 ))) || (NETWORK_IS_PLAYER_MUTED_BY_ME( l_U2161 ))) || (NETWORK_AM_I_MUTED_BY_PLAYER( l_U2161 )))
                            {
                                sub_3643( 1069 );
                                sub_3036( "/n ***************" );
                                sub_3036( " NOT GOT PRIV" );
                                sub_3036( "/n ***************" );
                            }
                            else if (NOT (NETWORK_PLAYER_HAS_HEADSET( GET_PLAYER_ID() )))
                            {
                                sub_3643( 1067 );
                            }
                            else if (NOT (NETWORK_PLAYER_HAS_HEADSET( l_U2161 )))
                            {
                                sub_3643( 1068 );
                            }
                            else
                            {
                                g_U91._fU636 = l_U2161;
                                g_U91._fU632 = 2;
                                StrCopy( ref g_U91._fU584, 8, l_U2137, 16);
                                sub_3643( 1064 );
                            };;;
                            break;
                            case 3:
                            g_U91._fU636 = 33;
                            g_U91._fU632 = 4;
                            sub_3643( 1062 );
                            break;
                            case 1:
                            NETWORK_SHOW_PLAYER_PROFILE_UI( l_U2161 );
                            break;
                            case 5:
                            if (NETWORK_IS_PLAYER_MUTED_BY_ME( l_U2161 ))
                            {
                                NETWORK_SET_PLAYER_MUTED( l_U2161, 0 );
                                if (NETWORK_IS_PLAYER_MUTED_BY_ME( l_U2161 ))
                                {
                                    sub_3643( 1090 );
                                }
                                else
                                {
                                    sub_5590( 5, "CP_MUTE", ref l_U3, ref l_U41, ref l_U228, 1 );
                                }
                            }
                            else
                            {
                                NETWORK_SET_PLAYER_MUTED( l_U2161, 1 );
                                sub_5590( 5, "CP_UNMUTE", ref l_U3, ref l_U41, ref l_U228, 1 );
                            }
                            break;
                            case 2:
                            l_U2109 = -1;
                            if (GET_NUMBER_OF_PLAYERS() > 2)
                            {
                                if (IS_NETWORK_PLAYER_ACTIVE( l_U2161 ))
                                {
                                    ProtectedSet(g_U91._fU668, l_U2161);
                                }
                                else
                                {
                                    ProtectedSet(g_U91._fU668, -1);
                                }
                                sub_3643( 1062 );
                            }
                            else
                            {
                                sub_3643( 1063 );
                            }
                            break;
                            case 4:
                            ProtectedSet(g_U91._fU668, -1);
                            l_U2109 = -1;
                            sub_3643( 1062 );
                            break;
                        }
                        break;
                        case 1075:
                        l_U2109 = -1;
                        sub_3643( l_U3._fU60 );
                        break;
                        case 1084:
                        switch (l_U3._fU60)
                        {
                            case 13:
                            case 14:
                            case 15: if (GET_NUMBER_OF_PLAYERS() > 4)
                            {
                                sub_3643( 1084 );
                                break;
                            }
                            default:
                            ProtectedSet(g_U91._fU660, l_U3._fU60);
                            sub_3643( 1085 );
                            break;
                        }
                        break;
                    }
                    break;
                    case 18:
                    l_U2109 = -1;
                    sub_3643( 1001 );
                    break;
                }
                break;
                case 1097:
                case 1098:
                sub_5305();
                if (sub_27549( ref l_U2079, 2 ))
                {
                    switch (sub_28583( g_U91._fU524 ))
                    {
                        case 0:
                        sub_35730( ref l_U3._fU52, ref l_U3._fU60, ref l_U2112, ref l_U2113 );
                        break;
                        case 1:
                        sub_35818( ref l_U3._fU52, ref l_U3._fU60, ref l_U2116, ref l_U2112, ref l_U2113 );
                        break;
                        case 7:
                        l_U2109 = 100;
                        sub_3643( 1012 );
                        break;
                        case 18:
                        l_U2109 = -1;
                        sub_3643( 1001 );
                        break;
                    }
                }
                if (g_U91._fU0 == 1097)
                {
                    if (TIMERA() >= 1500)
                    {
                        sub_3643( 1098 );
                    }
                }
                break;
                case 1091:
                sub_5305();
                if (sub_27549( ref l_U2079, 2 ))
                {
                    switch (sub_28583( g_U91._fU524 ))
                    {
                        case 0:
                        sub_32761( ref l_U3, ref l_U228, ref l_U41 );
                        break;
                        case 1:
                        sub_33597( ref l_U3, ref l_U228, ref l_U41 );
                        break;
                        case 7:
                        l_U2109 = 1091;
                        sub_3643( 1058 );
                        break;
                        case 6:
                        NETWORK_ACCEPT_INVITE( l_U3._fU60 );
                        sub_3643( 1001 );
                        break;
                        case 18:
                        l_U2109 = -1;
                        sub_3643( 1001 );
                        break;
                    }
                }
                break;
                case 1092:
                sub_5305();
                if (sub_27549( ref l_U2079, 2 ))
                {
                    switch (sub_28583( g_U91._fU524 ))
                    {
                        case 0:
                        sub_35730( ref l_U3._fU52, ref l_U3._fU60, ref l_U2112, ref l_U2113 );
                        break;
                        case 1:
                        sub_35818( ref l_U3._fU52, ref l_U3._fU60, ref l_U2116, ref l_U2112, ref l_U2113 );
                        break;
                        case 7:
                        l_U2109 = 1091;
                        sub_3643( 1058 );
                        break;
                        case 18:
                        l_U2109 = -1;
                        sub_3643( 1001 );
                        break;
                    }
                }
                break;
                case 1079:
                sub_5305();
                switch (sub_28583( g_U91._fU524 ))
                {
                    case 0:
                    sub_32761( ref l_U3, ref l_U228, ref l_U41 );
                    break;
                    case 1:
                    sub_33597( ref l_U3, ref l_U228, ref l_U41 );
                    break;
                    case 7:
                    l_U2109 = 1079;
                    sub_3643( 1058 );
                    break;
                    case 6:
                    l_U2153 = {l_U41[l_U3._fU44]._fU8};
                    if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
                    {
                        sub_3643( 1081 );
                    }
                    else if (NETWORK_IS_FRIEND_IN_SAME_TITLE( ref l_U2153 ))
                    {
                        sub_36555( ref l_U2153, ref l_U2169, 1 );
                        sub_3643( 1082 );
                    }
                    break;
                    case 18:
                    l_U2109 = -1;
                    sub_3643( 1001 );
                    break;
                }
                break;
                case 1080:
                case 1082:
                sub_5305();
                switch (sub_28583( g_U91._fU524 ))
                {
                    case 0:
                    sub_35730( ref l_U3._fU52, ref l_U3._fU60, ref l_U2112, ref l_U2113 );
                    break;
                    case 1:
                    sub_35818( ref l_U3._fU52, ref l_U3._fU60, ref l_U2116, ref l_U2112, ref l_U2113 );
                    break;
                    case 7:
                    switch (g_U91._fU0)
                    {
                        case 1080:
                        l_U2109 = 1079;
                        sub_3643( 1058 );
                        break;
                        case 1082:
                        if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
                        {
                            l_U2109 = 0;
                            sub_3643( 1081 );
                        }
                        else
                        {
                            l_U2109 = GET_HASH_KEY( ref l_U2153 );
                            sub_3643( 1079 );
                        }
                        break;
                    }
                    break;
                    case 18:
                    l_U2109 = -1;
                    sub_3643( 1001 );
                    break;
                }
                break;
                case 1081:
                sub_5305();
                switch (sub_28583( g_U91._fU524 ))
                {
                    case 0:
                    sub_32761( ref l_U3, ref l_U228, ref l_U41 );
                    break;
                    case 1:
                    sub_33597( ref l_U3, ref l_U228, ref l_U41 );
                    break;
                    case 7:
                    l_U2109 = GET_HASH_KEY( ref l_U2153 );
                    sub_3643( 1079 );
                    break;
                    case 6:
                    switch (l_U3._fU60)
                    {
                        case 0:
                        sub_36555( ref l_U2153, ref l_U2169, 1 );
                        sub_3643( 1082 );
                        break;
                        case 1:
                        NETWORK_SHOW_FRIEND_PROFILE_UI( ref l_U2153 );
                        break;
                    }
                    break;
                    case 18:
                    l_U2109 = -1;
                    sub_3643( 1001 );
                    break;
                }
                break;
                case 1061:
                case 1086:
                case 1076:
                case 1077:
                case 1085:
                case 1067:
                case 1068:
                case 1069:
                case 1063:
                case 1090:
                sub_5305();
                switch (sub_28583( g_U91._fU524 ))
                {
                    case 0:
                    sub_35730( ref l_U3._fU52, ref l_U3._fU60, ref l_U2112, ref l_U2113 );
                    break;
                    case 1:
                    sub_35818( ref l_U3._fU52, ref l_U3._fU60, ref l_U2116, ref l_U2112, ref l_U2113 );
                    break;
                    case 7:
                    switch (g_U91._fU0)
                    {
                        case 1061:
                        case 1086:
                        l_U2109 = g_U91._fU0;
                        sub_3643( 1058 );
                        break;
                        case 1076:
                        case 1077:
                        l_U2109 = g_U91._fU0;
                        sub_3643( 1075 );
                        break;
                        case 1085:
                        l_U2109 = 1084;
                        sub_3643( 1058 );
                        break;
                        case 1067:
                        case 1068:
                        case 1069:
                        l_U2109 = 0;
                        sub_3643( 1062 );
                        break;
                        case 1082:
                        l_U2109 = 0;
                        sub_3643( 1081 );
                        break;
                        case 1063:
                        l_U2109 = -1;
                        sub_3643( 1062 );
                        break;
                        case 1090:
                        l_U2109 = 5;
                        sub_3643( 1062 );
                        break;
                    }
                    break;
                    case 6:
                    switch (g_U91._fU0)
                    {
                        case 1086:
                        g_U12 = 1;
                        while (true)
                        {
                            WAIT( 0 );
                            sub_5305();
                        }
                        break;
                        case 1085:
                        sub_3643( 1001 );
                        break;
                    }
                    break;
                }
                break;
                case 1064:
                sub_5305();
                if (sub_27549( ref l_U2079, 2 ))
                {
                    sub_6945( "\n The net state is ", g_U91._fU632 );
                    switch (sub_28583( g_U91._fU524 ))
                    {
                        case 7:
                        STOP_MOBILE_PHONE_RINGING();
                        switch (g_U91._fU632)
                        {
                            case 2:
                            case 3:
                            case 1:
                            g_U91._fU636 = 33;
                            g_U91._fU632 = 4;
                            break;
                            case 4:
                            case 9:
                            l_U2109 = -1;
                            sub_3643( 1060 );
                            break;
                            case 6:
                            STOP_SOUND( l_U2162 );
                            RELEASE_SOUND_ID( l_U2162 );
                            l_U2109 = -1;
                            sub_3643( 1060 );
                            break;
                        }
                        break;
                        case 6:
                        switch (g_U91._fU632)
                        {
                            case 1:
                            g_U91._fU632 = 9;
                            sub_3643( 1064 );
                            break;
                            default:
                        }
                        break;
                    }
                }
                break;
                case 1001:
                if (sub_27549( ref l_U2079, 1 ))
                {
                    g_U91._fU0 = 1000;
                    SET_TEXT_TO_USE_TEXT_FILE_COLOURS( 1 );
                    DESTROY_MOBILE_PHONE();
                    STOP_MOBILE_PHONE_RINGING();
                    UNREGISTER_SCRIPT_WITH_AUDIO();
                    TERMINATE_THIS_SCRIPT();
                }
                break;
                default:
                l_U2109 = g_U91._fU0;
                sub_3643( 1058 );
                break;
            }
        }
        else
        {
            SET_TEXT_TO_USE_TEXT_FILE_COLOURS( 1 );
            UNREGISTER_SCRIPT_WITH_AUDIO();
            TERMINATE_THIS_SCRIPT();
        }
    }
    return;
}

void sub_206(int iParam0, int iParam1)
{
    sub_219( iParam0, iParam1 );
    if ((NOT (# -NULL-0xc27c84())) AND (NOT (# -NULL-0xc27bfa())))
    {
        g_U91._fU564 = 2;
    }
    switch (g_U91._fU40)
    {
        case 2:
        sub_326( iParam1 + 0, 90, 110, 110, 255 );
        sub_326( iParam1 + 4, 0, 0, 0, 205 );
        sub_326( iParam1 + 8, 0, 0, 0, 140 );
        sub_326( iParam1 + 12, 0, 0, 0, 140 );
        sub_326( iParam1 + 16, 0, 0, 0, 255 );
        sub_326( iParam1 + 20, 0, 0, 0, 255 );
        sub_326( iParam1 + 24, 0, 0, 0, 255 );
        sub_326( iParam1 + 28, 0, 0, 0, 255 );
        sub_326( iParam1 + 40, 0, 0, 0, 255 );
        sub_326( iParam1 + 44, 255, 255, 255, 255 );
        sub_326( iParam1 + 48, 255, 255, 255, 255 );
        sub_326( ref iParam0->_fU0[0]._fU8, 255, 255, 255, 230 );
        sub_326( ref iParam0->_fU0[3]._fU8, 255, 255, 255, 230 );
        sub_326( ref iParam0->_fU0[4]._fU8, 0, 0, 0, 230 );
        sub_326( ref iParam0->_fU0[5]._fU8, 255, 255, 255, 230 );
        sub_326( ref iParam0->_fU0[6]._fU8, 0, 0, 0, 230 );
        sub_326( ref iParam0->_fU0[7]._fU8, 255, 255, 255, 230 );
        break;
        default:
        sub_326( iParam1 + 0, 90, 110, 110, 255 );
        sub_326( iParam1 + 4, 20, 30, 30, 255 );
        sub_326( iParam1 + 8, 40, 60, 60, 255 );
        sub_326( iParam1 + 12, 30, 50, 50, 255 );
        sub_326( iParam1 + 16, 40, 60, 60, 255 );
        sub_326( iParam1 + 20, 40, 60, 60, 255 );
        sub_326( iParam1 + 24, 40, 60, 60, 255 );
        sub_326( iParam1 + 28, 40, 60, 60, 255 );
        sub_326( iParam1 + 32, 80, 100, 100, 255 );
        sub_326( iParam1 + 36, 40, 60, 60, 255 );
        sub_326( iParam1 + 40, 0, 0, 0, 255 );
        sub_326( iParam1 + 44, 255, 255, 255, 255 );
        sub_326( iParam1 + 48, 255, 255, 255, 255 );
        sub_326( ref iParam0->_fU0[0]._fU8, 0, 0, 0, 200 );
        sub_326( ref iParam0->_fU0[3]._fU8, 255, 255, 255, 200 );
        sub_326( ref iParam0->_fU0[4]._fU8, 0, 0, 0, 200 );
        sub_326( ref iParam0->_fU0[5]._fU8, 255, 255, 255, 200 );
        sub_326( ref iParam0->_fU0[6]._fU8, 0, 0, 0, 200 );
        sub_326( ref iParam0->_fU0[7]._fU8, 255, 255, 255, 200 );
        break;
    }
    return;
}

void sub_219(int iParam0, unknown uParam1)
{
    sub_228();
    switch (g_U91._fU40)
    {
        case 2:
        if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
        {
            sub_326( ref iParam0->_fU0[2]._fU8, 200, 0, 0, 230 );
            sub_326( ref iParam0->_fU0[1]._fU8, 0, 200, 0, 230 );
        }
        else
        {
            sub_326( ref iParam0->_fU0[2]._fU8, 204, 43, 71, 230 );
            sub_326( ref iParam0->_fU0[1]._fU8, 108, 130, 187, 230 );
        }
        break;
        default:
        if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
        {
            sub_326( ref iParam0->_fU0[2]._fU8, 200, 0, 0, 200 );
            sub_326( ref iParam0->_fU0[1]._fU8, 0, 200, 0, 200 );
        }
        else
        {
            sub_326( ref iParam0->_fU0[2]._fU8, 204, 43, 71, 200 );
            sub_326( ref iParam0->_fU0[1]._fU8, 108, 130, 187, 200 );
        }
        break;
    }
    return;
}

void sub_228()
{
    g_U91._fU560 = 17;
    g_U91._fU556 = 16;
    return;
}

void sub_326(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam0, 0, 7, uParam1 );
    SET_BITS_IN_RANGE( uParam0, 8, 15, uParam2 );
    SET_BITS_IN_RANGE( uParam0, 16, 23, uParam3 );
    SET_BITS_IN_RANGE( uParam0, 24, 31, uParam4 );
    return;
}

void sub_1435(int iParam0)
{
    float fVar3;

    fVar3 = 1.85000000;
    switch (g_U91._fU40)
    {
        case 2:
        if (g_U91._fU500)
        {
            fVar3 = 1.55000000;
            sub_1509( ref iParam0->_fU0[3]._fU0, fVar3, fVar3 );
            sub_1509( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
            sub_1509( iParam0 + 100, 0.05000000, 0.89000000 );
            sub_1509( iParam0 + 108, 0.95000000, 0.89000000 );
        }
        else
        {
            sub_1509( ref iParam0->_fU0[3]._fU0, 1.68000000, 1.68000000 );
            sub_1509( ref iParam0->_fU0[0]._fU0, 1.75000000, 1.75000000 );
            sub_1509( iParam0 + 100, 0.05000000, 0.87500000 );
            sub_1509( iParam0 + 108, 0.95000000, 0.87500000 );
        }
        sub_1509( ref iParam0->_fU0[1]._fU0, fVar3, fVar3 );
        sub_1509( ref iParam0->_fU0[2]._fU0, fVar3, fVar3 );
        iParam0->_fU116 = 1678728908;
        sub_1509( iParam0 + 120, fVar3, fVar3 );
        iParam0->_fU128 = 1678728908;
        sub_1509( iParam0 + 132, fVar3, fVar3 );
        sub_1509( ref iParam0->_fU0[4]._fU0, fVar3, fVar3 );
        sub_1509( ref iParam0->_fU0[5]._fU0, fVar3, fVar3 );
        sub_1509( ref iParam0->_fU0[6]._fU0, fVar3, fVar3 );
        sub_1509( ref iParam0->_fU0[7]._fU0, fVar3, fVar3 );
        break;
        default:
        if (g_U91._fU500)
        {
            fVar3 = 1.55000000;
            sub_1509( ref iParam0->_fU0[3]._fU0, fVar3, fVar3 );
            sub_1509( iParam0 + 100, 0.05000000, 0.89000000 );
            sub_1509( iParam0 + 108, 0.95000000, 0.89000000 );
            sub_1509( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
        }
        else
        {
            sub_1509( ref iParam0->_fU0[3]._fU0, 1.75000000, 1.75000000 );
            sub_1509( ref iParam0->_fU0[0]._fU0, 1.75000000, 1.75000000 );
            sub_1509( iParam0 + 100, 0.05000000, 0.87500000 );
            sub_1509( iParam0 + 108, 0.95000000, 0.87500000 );
        }
        sub_1509( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
        sub_1509( ref iParam0->_fU0[1]._fU0, fVar3, fVar3 );
        sub_1509( ref iParam0->_fU0[2]._fU0, fVar3, fVar3 );
        iParam0->_fU116 = 1678728908;
        sub_1509( iParam0 + 120, fVar3, fVar3 );
        iParam0->_fU128 = 1678728908;
        sub_1509( iParam0 + 132, fVar3, fVar3 );
        sub_1509( ref iParam0->_fU0[4]._fU0, fVar3, fVar3 );
        sub_1509( ref iParam0->_fU0[5]._fU0, fVar3, fVar3 );
        sub_1509( ref iParam0->_fU0[6]._fU0, fVar3, fVar3 );
        sub_1509( ref iParam0->_fU0[7]._fU0, fVar3, fVar3 );
        break;
    }
    return;
}

void sub_1509(int iParam0, unknown uParam1, unknown uParam2)
{
    iParam0->_fU0 = uParam1;
    iParam0->_fU4 = uParam2;
    return;
}

void sub_2270(int iParam0, unknown uParam1)
{
    iParam0->_fU0 = uParam1;
    sub_2294( uParam1, ref g_U91._fU8 );
    sub_2924();
    return;
}

void sub_2294(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        if ((g_U91._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_2411( uParam1, 11.50000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        else
        {
            sub_2411( uParam1, 5.00000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        break;
        case 2:
        if ((g_U91._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_2411( uParam1, 11.50000000, -11.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        else
        {
            sub_2411( uParam1, 5.00000000, -7.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        break;
        case 3:
        if ((g_U91._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_2411( uParam1, 11.50000000, 4.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        else
        {
            sub_2411( uParam1, 5.00000000, 8.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        break;
        case 4:
        if ((g_U91._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_2411( uParam1, 11.50000000, -5.25000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        else
        {
            sub_2411( uParam1, 5.00000000, -0.75000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U91._fU8._fU24 );
        }
        break;
    }
    return;
}

void sub_2411(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    iParam0->_fU0 = {uParam1};
    iParam0->_fU12 = {uParam4};
    iParam0->_fU24 = uParam7;
    iParam0->_fU28 = uParam1._fU0;
    return;
}

void sub_2924()
{
    SET_MOBILE_PHONE_SCALE( g_U91._fU8._fU24 );
    SET_MOBILE_PHONE_POSITION( g_U91._fU8._fU0 );
    SET_MOBILE_PHONE_ROTATION( g_U91._fU8._fU12 );
    return;
}

void sub_2999()
{
    sub_3036( "\n == Mobile Phone Created" );
    GET_MOBILE_PHONE_RENDER_ID( ref g_U91._fU44 );
    while (g_U91._fU44 == -1)
    {
        WAIT( 0 );
        GET_MOBILE_PHONE_RENDER_ID( ref g_U91._fU44 );
        sub_3036( "\n == Getting Render Target" );
    }
    sub_3036( "\n == Mobile Phone Loaded" );
    g_U91._fU8._fU24 = 324.00000000;
    return;
}

void sub_3036(unknown uParam0)
{
    return;
}

void sub_3200()
{
    int I;

    g_U523._fU124 = 255;
    for ( I = 0; I <= 4; I++ )
    {
        sub_3236( I, 0 );
    }
    return;
}

void sub_3236(int iParam0, boolean bParam1)
{
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref uVar4 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref uVar5 );
    switch (iParam0 / 2)
    {
        case 0:
        fVar6 = 0.10000000 + (uVar4 * 0.20000000);
        fVar8 = 0.20000000 + (uVar5 * 0.05000000);
        fVar9 = -0.01400000 + (uVar5 * 0.00050000);
        break;
        case 1:
        fVar6 = 0.20000000 + (uVar4 * 0.15000000);
        fVar8 = 0.50000000 + (uVar5 * 0.05000000);
        fVar9 = -0.01100000 + (uVar5 * 0.00050000);
        break;
        case 2:
        fVar6 = 0.40000000 + (uVar4 * 0.05000000);
        fVar8 = 0.90000000 + (uVar5 * 0.05000000);
        fVar9 = -0.00800000 + (uVar5 * 0.00050000);
        break;
    }
    if (bParam1)
    {
        fVar7 = 1.00000000 + (fVar8 * 0.50000000);
    }
    else
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.20000000, 0.81000000, ref fVar7 );
    }
    sub_3539( iParam0, fVar6, fVar7, fVar8, fVar8, fVar9 );
    return;
}

void sub_3539(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_1509( ref g_U523._fU20[uParam0]._fU0, uParam1, uParam2 );
    sub_1509( ref g_U523._fU20[uParam0]._fU8, uParam3, uParam4 );
    g_U523._fU20[uParam0]._fU16 = uParam5;
    return;
}

void sub_3643(unknown uParam0)
{
    l_U2029 = 1;
    g_U91._fU0 = uParam0;
    return;
}

void sub_3697(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_3781()
{
    if (NOT (IS_PLAYER_PLAYING( sub_3790() )))
    {
        sub_3036( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_3036( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_3036( "\n PHONE CHECK - .overrideCellphoneChecks is returning TRUE." );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_3036( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_CONTROL_ON( sub_3790() )))
    {
        sub_3036( "\n PHONE CHECK - IS_PLAYER_CONTROL_ON is returning FALSE" );
        return 0;
    }
    if (IS_IN_SPECTATOR_MODE())
    {
        sub_3036( "\n PHONE CHECK - player IS_IN_SPECTATOR_MODE" );
        return 0;
    }
    return 1;
}

void sub_3790()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_4347(int iParam0)
{
    if (iParam0->_fU0 < 5)
    {
        return 1;
    }
    return 0;
}

int sub_4381()
{
    if ((g_U91._fU0 == 1010) || (g_U91._fU0 == 1001))
    {
        return 1;
    }
    return 0;
}

int sub_4551(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (iParam0 != g_U555)
    {
        sub_4576( ref uVar3, iParam0 );
        REQUEST_SCRIPT( ref uVar3 );
        if (NOT (HAS_SCRIPT_LOADED( ref uVar3 )))
        {
            REQUEST_SCRIPT( ref uVar3 );
        }
        else
        {
            g_U555 = iParam0;
            g_U556[g_U555] = START_NEW_SCRIPT( ref uVar3, 16888 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref uVar3 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_4576(unknown uParam0, unknown uParam1)
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

int sub_5027(int iParam0)
{
    if (iParam0 == g_U555)
    {
        return 1;
    }
    return 0;
}

void sub_5305()
{
    char[16] cVar2;
    char[16] cVar6;

    SET_TEXT_RENDER_ID( g_U91._fU44 );
    SET_TEXT_TO_USE_TEXT_FILE_COLOURS( 0 );
    switch (g_U91._fU0)
    {
        case 1058:
        if (sub_5420( ref l_U2168 ))
        {
            sub_5482( ref l_U2173, 0 );
            sub_5590( 1091, ref l_U2173, ref l_U3, ref l_U41, ref l_U228, 1 );
        }
        break;
        case 1062:
        if ((l_U2161 >= 0) AND (l_U2161 < 32))
        {
            if (IS_NETWORK_PLAYER_ACTIVE( l_U2161 ))
            {
                if (COMPARE_STRING( ref l_U2137, GET_PLAYER_NAME( sub_8209( l_U2161 ) ) ))
                {
                    break;
                }
            }
        }
        l_U2110 = -1;
        case 1060:
        case 1061:
        if (l_U2110 != GET_NUMBER_OF_PLAYERS())
        {
            l_U2110 = GET_NUMBER_OF_PLAYERS();
            if ((l_U2110 <= 1) AND (NOT g_U91._fU1488))
            {
                l_U2109 = -1;
                g_U91._fU0 = 1061;
            }
            else
            {
                l_U2109 = -1;
                if ((l_U3._fU60 >= 0) AND (l_U3._fU60 < 32))
                {
                    if (g_U91._fU0 == 1060)
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( l_U3._fU60 ))
                        {
                            l_U2109 = l_U3._fU60;
                        }
                    }
                }
                g_U91._fU0 = 1060;
            }
            l_U2029 = 1;
        }
        break;
        case 1079:
        case 1080:
        if (sub_8447( ref l_U2166, ref l_U2167 ))
        {
            l_U2109 = l_U3._fU60;
            sub_3643( 1079 );
        }
        break;
        case 1091:
        case 1092:
        if (sub_5420( ref l_U2168 ))
        {
            l_U2109 = l_U3._fU60;
            sub_3643( 1091 );
        }
        break;
    }
    switch (g_U91._fU0)
    {
        case 1064:
        case 1062:
        if (l_U2164 != g_U91._fU632)
        {
            if ((l_U2164 != 2) AND (g_U91._fU632 != 3))
            {
                l_U2029 = 1;
            }
            l_U2164 = g_U91._fU632;
        }
        break;
    }
    if ((l_U2029) || (g_U91._fU92))
    {
        sub_8685();
    }
    if (sub_17593( ref l_U2165 ))
    {
        sub_5771( ref l_U3, ref l_U41, -1 );
        l_U2044._fU116 = 1678728908;
        l_U2044._fU128 = 1678728908;
    }
    switch (g_U91._fU0)
    {
        case 1002:
        sub_17917( 1, l_U2031, 1, 1 );
        if (g_U91._fU572)
        {
            sub_17989( 0, g_U481._fU0[17], 0.84500000, 0.25000000, 0.45000000, 0.20000000 );
        }
        sub_20156( ref l_U2044, "CP_NAV_EXIT", "CP_NAV_MENU", ref l_U2031 );
        sub_21144( ref l_U2044._fU0[3], ref l_U2031 );
        break;
        case 1064:
        sub_17917( 1, l_U2031, 1, 0 );
        switch (g_U91._fU632)
        {
            case 4:
            case 9:
            StrCopy( ref cVar2, "CP_NAV_BACK", 16 );
            StrCopy( ref cVar6, "BLANK", 16 );
            break;
            case 1:
            StrCopy( ref cVar2, "CP_NAV_HANG_UP", 16 );
            StrCopy( ref cVar6, "CP_ANSWER", 16 );
            break;
            case 3:
            case 2:
            StrCopy( ref cVar2, "CP_NAV_HANG_UP", 16 );
            StrCopy( ref cVar6, "BLANK", 16 );
            break;
            case 6:
            if (TIMERB() > 4000)
            {
                if (l_U2163)
                {
                    l_U2163 = 0;
                    STOP_MOBILE_PHONE_RINGING();
                    PLAY_SOUND_FRONTEND( l_U2162, "PHONE_ENGAGED_TONES" );
                    sub_8927( ref l_U3, 1, 0, 1 );
                    sub_9011( ref l_U3, ref l_U228, 0, ref g_U91._fU584, "", 1, 1, 0, 0, 0 );
                    sub_9011( ref l_U3, ref l_U228, 1, "CP_BUSY", "", 1, 0, 0, 0, 0 );
                    sub_9622( ref l_U3, ref l_U228, ref l_U41, 1, 1, 0 );
                }
            }
            StrCopy( ref cVar2, "CP_NAV_BACK", 16 );
            StrCopy( ref cVar6, "BLANK", 16 );
            break;
        }
        sub_22896( ref l_U3, ref l_U41, ref l_U2044, ref l_U2031, 0 );
        sub_20156( ref l_U2044, ref cVar2, ref cVar6, ref l_U2031 );
        sub_21144( ref l_U2044._fU0[3], ref l_U2031 );
        break;
        case 1079:
        if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
        {
            sub_17917( 1, l_U2031, 1, 0 );
            sub_22896( ref l_U3, ref l_U41, ref l_U2044, ref l_U2031, 0 );
            sub_20156( ref l_U2044, "CP_NAV_BACK", "CP_NAV_SELECT", ref l_U2031 );
        }
        else
        {
            sub_25788( ref l_U3, ref l_U41, ref l_U2044, ref l_U2031 );
        }
        sub_21144( ref l_U2044._fU0[3], ref l_U2031 );
        break;
        case 1058:
        case 1060:
        case 1062:
        case 1075:
        case 1078:
        case 1081:
        case 1091:
        case 1084:
        sub_17917( 1, l_U2031, 1, 0 );
        sub_22896( ref l_U3, ref l_U41, ref l_U2044, ref l_U2031, 0 );
        switch (g_U91._fU0)
        {
            case 1078:
            StrCopy( ref cVar6, "BLANK", 16 );
            break;
            case 1091:
            StrCopy( ref cVar6, "CP_OPT_ACCEPT", 16 );
            break;
            case 1084:
            StrCopy( ref cVar6, "CP_NAV_VOTE", 16 );
            break;
            default:
            StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
            break;
        }
        sub_20156( ref l_U2044, "CP_NAV_BACK", ref cVar6, ref l_U2031 );
        sub_21144( ref l_U2044._fU0[3], ref l_U2031 );
        break;
        case 1061:
        case 1067:
        case 1068:
        case 1069:
        case 1086:
        case 1076:
        case 1077:
        case 1080:
        case 1082:
        case 1092:
        case 1063:
        case 1085:
        case 1097:
        case 1098:
        case 1090:
        sub_17917( 1, l_U2031, 1, 0 );
        sub_26303( ref l_U2044._fU0[0], ref l_U2031, ref l_U2097, ref l_U2117, 0, ref l_U2112, ref l_U2113, l_U2116 );
        sub_25207( ref l_U3, ref l_U2031, l_U3._fU60 );
        switch (g_U91._fU0)
        {
            case 1086:
            StrCopy( ref cVar6, "CP_NAV_LEAVE", 16 );
            break;
            case 1085:
            StrCopy( ref cVar6, "CP_NAV_EXIT", 16 );
            break;
            default:
            StrCopy( ref cVar6, "BLANK", 16 );
            break;
        }
        sub_20156( ref l_U2044, "CP_NAV_BACK", ref cVar6, ref l_U2031 );
        sub_21144( ref l_U2044._fU0[3], ref l_U2031 );
        break;
    }
    SET_TEXT_TO_USE_TEXT_FILE_COLOURS( 1 );
    return;
}

int sub_5420(unknown uParam0)
{
    if (g_U91._fU568 != (uParam0^))
    {
        (uParam0^) = g_U91._fU568;
        return 1;
    }
    return 0;
}

void sub_5482(unknown uParam0, boolean bParam1)
{
    StrCopy( (uParam0^), GET_STRING_FROM_TEXT_FILE( "CP_OPT_INVIT" ), 32 );
    ConcatString((uParam0^), " (", 32);
    if (bParam1)
    {
        ConcatString((uParam0^), 0, 32);
    }
    else
    {
        ConcatString((uParam0^), g_U91._fU568, 32);
    }
    ConcatString((uParam0^), ")", 32);
    return;
}

void sub_5590(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
{
    int I;

    for ( I = 0; I <= ((uParam4^) - 1); I++ )
    {
        if ((uParam4^)[I]._fU0 == iParam0)
        {
            if (bParam5)
            {
                StrCopy( ref (uParam4^)[I]._fU4, uParam1, 32 );
            }
            else
            {
                StrCopy( ref (uParam4^)[I]._fU48, uParam1, 16 );
            }
        }
    }
    for ( I = 0; I <= ((uParam3^) - 1); I++ )
    {
        if ((uParam3^)[I]._fU4 == iParam0)
        {
            if (bParam5)
            {
                StrCopy( ref (uParam3^)[I]._fU8, uParam1, 32 );
            }
            else
            {
                StrCopy( ref (uParam3^)[I]._fU52, uParam1, 16 );
            }
            sub_5771( uParam2, uParam3, I );
        }
    }
    return;
}

void sub_5771(int iParam0, unknown uParam1, int iParam2)
{
    int I;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    unknown uVar12;
    char[32] cVar13;

    iVar6 = 0;
    iVar7 = (uParam1^) - 1;
    if (iParam2 != -1)
    {
        iVar6 = iParam2;
        iVar7 = iParam2;
    }
    if ((g_U91._fU496) AND (g_U91._fU500))
    {
        fVar8 = 1.55000000;
        fVar9 = 1.40000000;
    }
    else
    {
        fVar8 = 1.90000000;
        fVar9 = 1.80000000;
    }
    fVar10 = (ref iParam0->_fU84->_fU4) - (ref iParam0->_fU84->_fU0);
    fVar11 = (ref iParam0->_fU92->_fU4) - (ref iParam0->_fU92->_fU0);
    for ( I = iVar6; I <= iVar7; I++ )
    {
        sub_5932( ref (uParam1^)[I] );
        if ((uParam1^)[I]._fU0)
        {
            if ((sub_6215( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU40, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48, fVar8, fVar8 )) > fVar10)
            {
                if ((sub_6215( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU40, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48, fVar9, fVar9 )) > fVar10)
                {
                    (uParam1^)[I]._fU92 = 1;
                    if ((uParam1^)[I]._fU40)
                    {
                        (uParam1^)[I]._fU96 = GET_LENGTH_OF_LITERAL_STRING( ref (uParam1^)[I]._fU8 );
                    }
                    else
                    {
                        (uParam1^)[I]._fU96 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL_INS_NUM( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
                    }
                    (uParam1^)[I]._fU100 = 0;
                    (uParam1^)[I]._fU104 = 4;
                    if ((uParam1^)[I]._fU40)
                    {
                        StrCopy( ref cVar13, GET_STRING_FROM_STRING( ref (uParam1^)[I]._fU8, 0, (uParam1^)[I]._fU104 ), 32 );
                        while ((sub_6215( ref cVar13, 1, 0, 0, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU104++;
                            StrCopy( ref cVar13, GET_STRING_FROM_STRING( ref (uParam1^)[I]._fU8, 0, (uParam1^)[I]._fU104 ), 32 );
                            sub_6716( "\n The following is the cutdown label ", ref cVar13 );
                        }
                    }
                    else
                    {
                        while ((sub_6791( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48, 0, (uParam1^)[I]._fU104, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU104++;
                            sub_6945( "\n Cutdown label end = ", (uParam1^)[I]._fU104 );
                        }
                    }
                    (uParam1^)[I]._fU104--;
                    if (I == iParam0->_fU44)
                    {
                        iParam0->_fU124 = (uParam1^)[I]._fU100;
                        iParam0->_fU128 = (uParam1^)[I]._fU104;
                        iParam0->_fU132 = 1;
                    }
                    sub_6716( "\n The following string is going to scroll ", ref (uParam1^)[I]._fU8 );
                    sub_6945( " starting at ", (uParam1^)[I]._fU100 );
                    sub_6945( " and ending at ", (uParam1^)[I]._fU104 );
                    sub_3036( "." );
                }
                else
                {
                    sub_6716( "\n The following string is using the RetryScale ", ref (uParam1^)[I]._fU8 );
                    (uParam1^)[I]._fU76._fU0 = fVar9;
                    (uParam1^)[I]._fU76._fU4 = fVar9;
                }
            }
            if ((sub_6215( ref (uParam1^)[I]._fU52, (uParam1^)[I]._fU68, 0, 0, fVar8, fVar8 )) > fVar11)
            {
                if ((sub_6215( ref (uParam1^)[I]._fU52, (uParam1^)[I]._fU68, 0, 0, fVar9, fVar9 )) > fVar11)
                {
                    (uParam1^)[I]._fU108 = 1;
                    if ((uParam1^)[I]._fU68)
                    {
                        (uParam1^)[I]._fU112 = GET_LENGTH_OF_LITERAL_STRING( ref (uParam1^)[I]._fU52 );
                    }
                    else
                    {
                        (uParam1^)[I]._fU112 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( ref (uParam1^)[I]._fU52 );
                    }
                    (uParam1^)[I]._fU116 = 0;
                    (uParam1^)[I]._fU120 = 4;
                    if ((uParam1^)[I]._fU68)
                    {
                        StrCopy( ref cVar13, GET_STRING_FROM_STRING( ref (uParam1^)[I]._fU52, 0, (uParam1^)[I]._fU120 ), 32 );
                        while ((sub_6215( ref cVar13, 1, 0, 0, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU120++;
                            StrCopy( ref cVar13, GET_STRING_FROM_STRING( ref (uParam1^)[I]._fU52, 0, (uParam1^)[I]._fU120 ), 32 );
                            sub_6716( "\n The following is the cutdown label ", ref cVar13 );
                        }
                    }
                    else
                    {
                        while ((sub_6791( ref (uParam1^)[I]._fU52, 0, 0, 0, (uParam1^)[I]._fU120, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU120++;
                            sub_6945( "\n Cutdown label end = ", (uParam1^)[I]._fU120 );
                        }
                    }
                    (uParam1^)[I]._fU120--;
                    if (I == iParam0->_fU44)
                    {
                        iParam0->_fU140 = (uParam1^)[I]._fU116;
                        iParam0->_fU144 = (uParam1^)[I]._fU120;
                        iParam0->_fU148 = 1;
                    }
                    sub_6716( "\n The following string is going to scroll ", ref (uParam1^)[I]._fU52 );
                    sub_6945( " starting at ", (uParam1^)[I]._fU116 );
                    sub_6945( " and ending at ", (uParam1^)[I]._fU120 );
                    sub_3036( "." );
                }
                else
                {
                    sub_6716( "\n The following string is using the RetryScale ", ref (uParam1^)[I]._fU52 );
                    (uParam1^)[I]._fU84._fU0 = fVar9;
                    (uParam1^)[I]._fU84._fU4 = fVar9;
                }
            }
        }
    }
    return;
}

void sub_5932(int iParam0)
{
    iParam0->_fU92 = 0;
    iParam0->_fU96 = 0;
    iParam0->_fU100 = 0;
    iParam0->_fU104 = 0;
    iParam0->_fU108 = 0;
    iParam0->_fU112 = 0;
    iParam0->_fU116 = 0;
    iParam0->_fU120 = 0;
    if ((g_U91._fU496) AND (g_U91._fU500))
    {
        ref iParam0->_fU76->_fU0 = 1.55000000;
        ref iParam0->_fU76->_fU4 = 1.55000000;
        ref iParam0->_fU84->_fU0 = 1.55000000;
        ref iParam0->_fU84->_fU4 = 1.55000000;
    }
    else
    {
        ref iParam0->_fU76->_fU0 = 1.90000000;
        ref iParam0->_fU76->_fU4 = 1.90000000;
        ref iParam0->_fU84->_fU0 = 1.90000000;
        ref iParam0->_fU84->_fU4 = 1.90000000;
    }
    return;
}

void sub_6215(unknown uParam0, boolean bParam1, boolean bParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    SET_TEXT_FONT( 0 );
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_FONT( 2 );
    }
    SET_TEXT_SCALE( uParam4, uParam5 * 0.65000000 );
    if (bParam1)
    {
        return GET_STRING_WIDTH_WITH_STRING( "STRING", uParam0 );
    }
    else if (bParam2)
    {
        return GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam3 );
    }
    return GET_STRING_WIDTH( uParam0 );
}

void sub_6716(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6791(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SET_TEXT_FONT( 0 );
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_FONT( 2 );
    }
    SET_TEXT_SCALE( uParam5, uParam6 * 0.65000000 );
    return GET_WIDTH_OF_SUBSTRING_GIVEN_TEXT_LABEL( uParam0, uParam1, uParam2, uParam3, uParam4 );
}

void sub_6945(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8209(unknown uParam0)
{
    return CONVERT_INT_TO_PLAYERINDEX( uParam0 );
}

int sub_8447(unknown uParam0, unknown uParam1)
{
    (uParam0^) = NETWORK_GET_FRIEND_COUNT();
    if ((uParam0^) != (uParam1^))
    {
        (uParam1^) = (uParam0^);
        return 1;
    }
    return 0;
}

void sub_8685()
{
    int I;
    unknown uVar3;
    char[16] cVar4;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    g_U91._fU528 = 0;
    switch (g_U91._fU0)
    {
        case 1058:
        sub_8927( ref l_U3, 1, l_U2109, 0 );
        sub_9011( ref l_U3, ref l_U228, 1060, "CP_OPT_PBOOK", "", 1, 0, 0, 0, 0 );
        sub_9011( ref l_U3, ref l_U228, 1086, "CP_OPT_LEAVE", "", 1, 0, 0, 0, 0 );
        sub_9011( ref l_U3, ref l_U228, 1075, "CP_NET_GINFO", "", 1, 0, 0, 0, 0 );
        sub_9011( ref l_U3, ref l_U228, 1047, "CP_OPT_NETWORK", "", 1, 0, 0, 0, 0 );
        if (((NETWORK_IS_SESSION_INVITABLE()) || (# -NULL-0xc27c84())) || (# -NULL-0xc27bfa()))
        {
            sub_9011( ref l_U3, ref l_U228, 1079, "CP_OPT_FRIENDS", "", 1, 0, 0, 0, 0 );
        }
        if ((NOT (# -NULL-0xc27c84())) AND (NOT (# -NULL-0xc27bfa())))
        {
            sub_5482( ref l_U2173, 0 );
            sub_9011( ref l_U3, ref l_U228, 1091, ref l_U2173, "", 1, 1, 0, 0, 0 );
        }
        if ((NOT NETWORK_IS_GAME_RANKED()) AND (g_U91._fU664))
        {
            sub_9011( ref l_U3, ref l_U228, 1084, "CP_OPT_GVOTE", "", 1, 0, 0, 0, 0 );
        }
        sub_9622( ref l_U3, ref l_U228, ref l_U41, 1, 1, 0 );
        l_U2110 = -1;
        break;
        case 1060:
        l_U2110 = GET_NUMBER_OF_PLAYERS();
        if ((l_U2110 <= 1) AND (NOT g_U91._fU1488))
        {
            ;
        }
        else
        {
            sub_8927( ref l_U3, 1, l_U2109, 0 );
            for ( I = 0; I <= 31; I++ )
            {
                if ((I != GET_PLAYER_ID()) AND (IS_NETWORK_PLAYER_ACTIVE( I )))
                {
                    sub_9011( ref l_U3, ref l_U228, I, GET_PLAYER_NAME( sub_8209( I ) ), "", 1, 1, 0, 0, 0 );
                }
            }
            if (g_U91._fU1488)
            {
                sub_9011( ref l_U3, ref l_U228, 100, "CP_ZIT", "", 1, 0, 0, 0, 0 );
            }
            sub_9622( ref l_U3, ref l_U228, ref l_U41, 1, 1, 0 );
        }
        break;
        case 1097:
        SETTIMERA( 0 );
        l_U2181 = GET_AUDIBLE_MUSIC_TRACK_TEXT_ID();
        StrCopy( ref l_U2117[0], "CP_ZIT_CONNECT", 16 );
        StrCopy( ref l_U2117[1], "", 16 );
        StrCopy( ref l_U2117[2], "", 16 );
        sub_11633( ref l_U2044._fU0[0], ref l_U2117, 0, ref l_U2116, ref l_U2114, ref l_U2112, ref l_U2113, ref l_U3._fU44, ref l_U3._fU60, ref l_U3._fU56, ref l_U3._fU52 );
        break;
        case 1098:
        if (IS_GAME_IN_CONTROL_OF_MUSIC())
        {
            l_U2181 = GET_AUDIBLE_MUSIC_TRACK_TEXT_ID();
            StrCopy( ref l_U2117[0], "TM_82_", 16 );
            ConcatString(ref l_U2117[0], l_U2181, 16);
            if (l_U2181 > 1)
            {
                if (DOES_TEXT_LABEL_EXIST( ref l_U2117[0] ))
                {
                    REPORT_TAGGED_RADIO_TRACK( l_U2181 );
                }
                else
                {
                    sub_6945( "\n setting Zit! ID to 1 as no text exists for ", l_U2181 );
                    sub_3036( "\n" );
                    l_U2181 = 1;
                }
            }
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 290, 295, ref l_U2181 );
        }
        StrCopy( ref l_U2117[0], "TM_82_", 16 );
        ConcatString(ref l_U2117[0], l_U2181, 16);
        StrCopy( ref l_U2117[1], "", 16 );
        StrCopy( ref l_U2117[2], "", 16 );
        sub_11633( ref l_U2044._fU0[0], ref l_U2117, 0, ref l_U2116, ref l_U2114, ref l_U2112, ref l_U2113, ref l_U3._fU44, ref l_U3._fU60, ref l_U3._fU56, ref l_U3._fU52 );
        break;
        case 1061:
        StrCopy( ref l_U2117[0], "EMPTY_PHONEBOOK", 16 );
        StrCopy( ref l_U2117[1], "", 16 );
        StrCopy( ref l_U2117[2], "", 16 );
        sub_11633( ref l_U2044._fU0[0], ref l_U2117, 0, ref l_U2116, ref l_U2114, ref l_U2112, ref l_U2113, ref l_U3._fU44, ref l_U3._fU60, ref l_U3._fU56, ref l_U3._fU52 );
        break;
        case 1063:
        StrCopy( ref l_U2117[0], "CP_KICK_MSG", 16 );
        StrCopy( ref l_U2117[1], "", 16 );
        StrCopy( ref l_U2117[2], "", 16 );
        sub_11633( ref l_U2044._fU0[0], ref l_U2117, 0, ref l_U2116, ref l_U2114, ref l_U2112, ref l_U2113, ref l_U3._fU44, ref l_U3._fU60, ref l_U3._fU56, ref l_U3._fU52 );
        break;
        case 1062:
        sub_8927( ref l_U3, 1, l_U2109, 0 );
        if (g_U91._fU632 != 9)
        {
            sub_9011( ref l_U3, ref l_U228, 0, "CP_NET_CALL", "", 1, 0, 0, 0, 0 );
        }
        else
        {
            sub_9011( ref l_U3, ref l_U228, 3, "CP_NAV_HANG_UP", "", 1, 0, 0, 0, 0 );
        }
        if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
        {
            sub_9011( ref l_U3, ref l_U228, 1, "CP_NET_GAMERC", "", 1, 0, 0, 0, 0 );
        }
        if (g_U91._fU636 != l_U2161)
        {
            if (NETWORK_IS_PLAYER_MUTED_BY_ME( l_U2161 ))
            {
                sub_9011( ref l_U3, ref l_U228, 5, "CP_UNMUTE", "", 1, 0, 0, 0, 0 );
            }
            else
            {
                sub_9011( ref l_U3, ref l_U228, 5, "CP_MUTE", "", 1, 0, 0, 0, 0 );
            }
        }
        if (NOT NETWORK_IS_GAME_RANKED())
        {
            if (GET_NUMBER_OF_PLAYERS() > 2)
            {
                if (ProtectedGet(g_U91._fU668) == l_U2161)
                {
                    sub_9011( ref l_U3, ref l_U228, 4, "CP_UNKICKPLAYER", "", 1, 0, 0, 0, 0 );
                }
                else
                {
                    sub_9011( ref l_U3, ref l_U228, 2, "CP_KICKPLAYER", "", 1, 0, 0, 0, 0 );
                }
            }
            else
            {
                ProtectedSet(g_U91._fU668, -1);
            }
        }
        sub_9622( ref l_U3, ref l_U228, ref l_U41, 1, 1, 0 );
        break;
        case 1067:
        case 1068:
        case 1069:
        switch (g_U91._fU0)
        {
            case 1067:
            if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
            {
                StrCopy( ref l_U2117[0], "CP_TP_HEADSET", 16 );
            }
            else
            {
                StrCopy( ref l_U2117[0], "CP_TP_HEADPS3", 16 );
            }
            break;
            case 1068:
            if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
            {
                StrCopy( ref l_U2117[0], "CP_OP_HEADSET", 16 );
            }
            else
            {
                StrCopy( ref l_U2117[0], "CP_OP_HEADPS3", 16 );
            }
            break;
            case 1069:
            if ((NETWORK_IS_PLAYER_BLOCKED_BY_ME( l_U2161 )) || (NETWORK_IS_PLAYER_MUTED_BY_ME( l_U2161 )))
            {
                StrCopy( ref l_U2117[0], "CP_NOT_GOT_PRI2", 16 );
            }
            else
            {
                StrCopy( ref l_U2117[0], "CP_NOT_GOT_PRIV", 16 );
            }
            break;
        }
        StrCopy( ref l_U2117[1], "", 16 );
        StrCopy( ref l_U2117[2], "", 16 );
        sub_11633( ref l_U2044._fU0[0], ref l_U2117, 0, ref l_U2116, ref l_U2114, ref l_U2112, ref l_U2113, ref l_U3._fU44, ref l_U3._fU60, ref l_U3._fU56, ref l_U3._fU52 );
        break;
        case 1064:
        SETTIMERB( 0 );
        switch (g_U91._fU632)
        {
            case 9:
            STOP_MOBILE_PHONE_RINGING();
            NETWORK_SET_TALKER_FOCUS( g_U91._fU636 );
            sub_8927( ref l_U3, 1, 0, 1 );
            sub_9011( ref l_U3, ref l_U228, 0, ref g_U91._fU584, "", 1, 1, 0, 0, 0 );
            sub_9622( ref l_U3, ref l_U228, ref l_U41, 1, 1, 0 );
            break;
            case 1:
            switch (g_U91._fU112)
            {
                case 0:
                case 1:
                case 4:
                START_CUSTOM_MOBILE_PHONE_RINGING( g_U91._fU108 );
                break;
            }
            sub_8927( ref l_U3, 1, 0, 1 );
            sub_9011( ref l_U3, ref l_U228, 0, ref g_U91._fU584, "", 1, 1, 0, 0, 0 );
            sub_9011( ref l_U3, ref l_U228, 1, "CP_INFO_CALLING", "", 1, 0, 0, 0, 0 );
            sub_9622( ref l_U3, ref l_U228, ref l_U41, 1, 1, 0 );
            break;
            case 2:
            case 3:
            START_MOBILE_PHONE_CALLING();
            sub_8927( ref l_U3, 1, 1, 1 );
            sub_9011( ref l_U3, ref l_U228, 0, "CP_INFO_CALLING", "", 1, 0, 0, 0, 0 );
            sub_9011( ref l_U3, ref l_U228, 1, ref g_U91._fU584, "", 1, 1, 0, 0, 0 );
            sub_9622( ref l_U3, ref l_U228, ref l_U41, 1, 1, 0 );
            break;
            case 4:
            STOP_MOBILE_PHONE_RINGING();
            sub_8927( ref l_U3, 1, 0, 1 );
            sub_9011( ref l_U3, ref l_U228, 0, ref g_U91._fU584, "", 1, 1, 0, 0, 0 );
            sub_9011( ref l_U3, ref l_U228, 1, "CP_INFO_DISCON", "", 1, 0, 0, 0, 0 );
            sub_9622( ref l_U3, ref l_U228, ref l_U41, 1, 1, 0 );
            break;
            case 6:
            STOP_MOBILE_PHONE_RINGING();
            l_U2163 = 1;
            l_U2162 = GET_SOUND_ID();
            sub_8927( ref l_U3, 1, 1, 1 );
            sub_9011( ref l_U3, ref l_U228, 0, "CP_INFO_CALLING", "", 1, 0, 0, 0, 0 );
            sub_9011( ref l_U3, ref l_U228, 1, ref g_U91._fU584, "", 1, 1, 0, 0, 0 );
            sub_9622( ref l_U3, ref l_U228, ref l_U41, 1, 1, 0 );
            break;
        }
        break;
        case 1086:
        StrCopy( ref l_U2117[0], "CP_INFO_LEAVE", 16 );
        StrCopy( ref l_U2117[1], "", 16 );
        StrCopy( ref l_U2117[2], "", 16 );
        sub_11633( ref l_U2044._fU0[0], ref l_U2117, 0, ref l_U2116, ref l_U2114, ref l_U2112, ref l_U2113, ref l_U3._fU44, ref l_U3._fU60, ref l_U3._fU56, ref l_U3._fU52 );
        break;
        case 1075:
        sub_8927( ref l_U3, 1, l_U2109, 0 );
        StrCopy( ref cVar4, "NTGT_", 16 );
        sub_14862( ref cVar4, "NTGT", NETWORK_GET_GAME_MODE(), -1, -1 );
        sub_9011( ref l_U3, ref l_U228, 1076, ref cVar4, "", 1, 0, 0, 0, 0 );
        if (NOT (COMPARE_STRING( ref g_U91._fU640, "" )))
        {
            sub_9011( ref l_U3, ref l_U228, 1077, "CP_NET_CBRIEF", "", 1, 0, 0, 0, 0 );
        }
        sub_9011( ref l_U3, ref l_U228, 1078, "CP_NET_OPTION", "", 1, 0, 0, 0, 0 );
        sub_9622( ref l_U3, ref l_U228, ref l_U41, 1, 1, 0 );
        break;
        case 1076:
        sub_14862( ref l_U2117[0], "CP_MAX", NETWORK_GET_GAME_MODE(), -1, -1 );
        sub_14862( ref l_U2117[1], "CP_DESCRP", NETWORK_GET_GAME_MODE(), -1, -1 );
        StrCopy( ref l_U2117[2], "", 16 );
        sub_11633( ref l_U2044._fU0[0], ref l_U2117, 0, ref l_U2116, ref l_U2114, ref l_U2112, ref l_U2113, ref l_U3._fU44, ref l_U3._fU60, ref l_U3._fU56, ref l_U3._fU52 );
        break;
        case 1077:
        l_U2117[0] = {g_U91._fU640};
        StrCopy( ref l_U2117[1], "", 16 );
        StrCopy( ref l_U2117[2], "", 16 );
        sub_11633( ref l_U2044._fU0[0], ref l_U2117, 0, ref l_U2116, ref l_U2114, ref l_U2112, ref l_U2113, ref l_U3._fU44, ref l_U3._fU60, ref l_U3._fU56, ref l_U3._fU52 );
        break;
        case 1078:
        sub_8927( ref l_U3, 2, l_U2109, 0 );
        for ( I = 0; I <= (g_U91._fU676 - 1); I++ )
        {
            if (NOT (COMPARE_STRING( ref g_U91._fU676[I], "" )))
            {
                sub_9011( ref l_U3, ref l_U228, 1, ref g_U91._fU676[I], ref g_U91._fU1080[I], 1, 0, 0, 0, 0 );
            }
            else
            {
                I = g_U91._fU676;
            }
        }
        sub_9622( ref l_U3, ref l_U228, ref l_U41, 1, 1, 0 );
        break;
        case 1079:
        l_U2166 = NETWORK_GET_FRIEND_COUNT();
        l_U2167 = l_U2166;
        if (l_U2166 != 0)
        {
            sub_15551( ref l_U3, ref l_U41, ref l_U228, l_U2109, 0 );
            break;
        }
        case 1080:
        g_U91._fU0 = 1080;
        StrCopy( ref l_U2117[0], "CP_NO_FRIENDS", 16 );
        StrCopy( ref l_U2117[1], "", 16 );
        StrCopy( ref l_U2117[2], "", 16 );
        sub_11633( ref l_U2044._fU0[0], ref l_U2117, 0, ref l_U2116, ref l_U2114, ref l_U2112, ref l_U2113, ref l_U3._fU44, ref l_U3._fU60, ref l_U3._fU56, ref l_U3._fU52 );
        break;
        case 1081:
        sub_8927( ref l_U3, 1, l_U2109, 0 );
        if (NETWORK_IS_SESSION_INVITABLE())
        {
            sub_9011( ref l_U3, ref l_U228, 0, "CP_OPT_INVITE", "", 1, 0, 0, 0, 0 );
        }
        sub_9011( ref l_U3, ref l_U228, 1, "CP_NET_GAMERC", "", 1, 0, 0, 0, 0 );
        sub_9622( ref l_U3, ref l_U228, ref l_U41, 1, 1, 0 );
        break;
        case 1082:
        l_U2117[0] = {l_U2169};
        StrCopy( ref l_U2117[1], "", 16 );
        StrCopy( ref l_U2117[2], "", 16 );
        sub_11633( ref l_U2044._fU0[0], ref l_U2117, 0, ref l_U2116, ref l_U2114, ref l_U2112, ref l_U2113, ref l_U3._fU44, ref l_U3._fU60, ref l_U3._fU56, ref l_U3._fU52 );
        break;
        case 1091:
        l_U2168 = g_U91._fU568;
        if (g_U91._fU568 != 0)
        {
            sub_16222( ref l_U3, ref l_U41, ref l_U228, l_U2109 );
            break;
        }
        case 1092:
        g_U91._fU0 = 1092;
        StrCopy( ref l_U2117[0], "NO_INVITES", 16 );
        StrCopy( ref l_U2117[1], "", 16 );
        StrCopy( ref l_U2117[2], "", 16 );
        l_U2115 = 0;
        sub_11633( ref l_U2044._fU0[0], ref l_U2117, l_U2115, ref l_U2116, ref l_U2114, ref l_U2112, ref l_U2113, ref l_U3._fU44, ref l_U3._fU60, ref l_U3._fU56, ref l_U3._fU52 );
        break;
        case 1084:
        sub_16484( ref l_U3, ref l_U41, ref l_U228, l_U2109, NETWORK_IS_GAME_RANKED(), 1, 0 );
        break;
        case 1085:
        StrCopy( ref l_U2117[0], "CP_INFO_VOTE", 16 );
        StrCopy( ref l_U2117[1], "NTGT_", 16 );
        ConcatString(ref l_U2117[1], ProtectedGet(g_U91._fU660), 16);
        StrCopy( ref l_U2117[2], "", 16 );
        sub_11633( ref l_U2044._fU0[0], ref l_U2117, 0, ref l_U2116, ref l_U2114, ref l_U2112, ref l_U2113, ref l_U3._fU44, ref l_U3._fU60, ref l_U3._fU56, ref l_U3._fU52 );
        break;
        case 1090:
        if (# -NULL-0xc27bfa())
        {
            StrCopy( ref l_U2117[0], "CP_MUTE_WARN_PC", 16 );
        }
        else
        {
            StrCopy( ref l_U2117[0], "CP_MUTE_WARN", 16 );
        }
        StrCopy( ref l_U2117[1], "", 16 );
        StrCopy( ref l_U2117[2], "", 16 );
        sub_11633( ref l_U2044._fU0[0], ref l_U2117, 0, ref l_U2116, ref l_U2114, ref l_U2112, ref l_U2113, ref l_U3._fU44, ref l_U3._fU60, ref l_U3._fU56, ref l_U3._fU52 );
        break;
    }
    l_U2029 = 0;
    g_U91._fU92 = 0;
    return;
}

void sub_8927(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    iParam0->_fU4 = 0;
    iParam0->_fU0 = uParam1;
    iParam0->_fU12 = 0;
    iParam0->_fU8 = uParam2;
    iParam0->_fU64 = uParam3;
    return;
}

void sub_9011(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    if (iParam0->_fU4 < (uParam1^))
    {
        if (NOT iParam0->_fU12)
        {
            if (iParam2 == iParam0->_fU8)
            {
                iParam0->_fU8 = iParam0->_fU4;
                iParam0->_fU12 = 1;
            }
        }
        (uParam1^)[iParam0->_fU4]._fU0 = iParam2;
        StrCopy( ref (uParam1^)[iParam0->_fU4]._fU4, uParam3, 32 );
        (uParam1^)[iParam0->_fU4]._fU36 = uParam6;
        (uParam1^)[iParam0->_fU4]._fU40 = uParam8;
        (uParam1^)[iParam0->_fU4]._fU44 = uParam9;
        StrCopy( ref (uParam1^)[iParam0->_fU4]._fU48, uParam4, 16 );
        (uParam1^)[iParam0->_fU4]._fU64 = uParam7;
        (uParam1^)[iParam0->_fU4]._fU68 = uParam5;
        iParam0->_fU4++;
    }
    else
    {
        sub_3036( "\n SIMPLE OPTIONS ARRAY TO SMALL TO ADD " );
        sub_3036( uParam3 );
        sub_3036( " TO THE PHONE OPTIONS." );
    }
    return;
}

void sub_9622(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int I;
    int iVar9;
    float fVar10;
    float fVar11;

    fVar10 = 0.49500000;
    fVar11 = 0.93000000;
    g_U91._fU492 = 1000 / iParam0->_fU4;
    sub_9679( ref g_U91._fU492, 100, 500 );
    if (g_U91._fU500)
    {
        iVar9 = 6;
    }
    else
    {
        iVar9 = 4;
    }
    if (iParam0->_fU0 == 2)
    {
        iVar9 = iVar9 / 2;
    }
    if (((iParam0->_fU4 < iVar9) || (NOT iParam0->_fU12)) || ((iParam0->_fU12) AND (iParam0->_fU8 < iVar9)))
    {
        for ( I = 0; I <= (iVar9 - 1); I++ )
        {
            iParam0->_fU16[I] = I;
        }
        if (iParam0->_fU12)
        {
            iParam0->_fU44 = iParam0->_fU8;
        }
        else
        {
            iParam0->_fU44 = 0;
        }
    }
    else if ((iParam0->_fU4 - iParam0->_fU8) < iVar9)
    {
        sub_6945( "\n menuStruct.total is ", iParam0->_fU4 );
        sub_6945( "\n menuStruct.memory is ", iParam0->_fU8 );
        for ( I = 0; I <= (iVar9 - 1); I++ )
        {
            iParam0->_fU16[I] = iParam0->_fU4 - (iVar9 - I);
            if (I == (iVar9 - (iParam0->_fU4 - iParam0->_fU8)))
            {
                iParam0->_fU44 = I;
            }
        }
    }
    else
    {
        iParam0->_fU16[0] = iParam0->_fU8;
        iParam0->_fU44 = 0;
        for ( I = 1; I <= (iVar9 - 1); I++ )
        {
            iParam0->_fU16[I] = iParam0->_fU16[0] + I;
            if (iParam0->_fU16[I] >= iParam0->_fU4)
            {
                iParam0->_fU16[I] -= iParam0->_fU4;
            }
        }
    }
    if (iParam0->_fU4 < iVar9)
    {
        iParam0->_fU48 = iParam0->_fU4;
        iParam0->_fU52 = 0;
        iVar9 = iParam0->_fU4;
    }
    else
    {
        iParam0->_fU48 = iVar9;
        iParam0->_fU52 = 1;
        if (g_U91._fU40 == 2)
        {
            iParam0->_fU56 = 0.72000000 / (TO_FLOAT( iParam0->_fU4 ));
        }
        else
        {
            iParam0->_fU56 = 0.75000000 / (TO_FLOAT( iParam0->_fU4 ));
        }
    }
    for ( I = 0; I <= 5; I++ )
    {
        sub_10397( ref (uParam2^)[I] );
    }
    for ( I = 0; I <= (iVar9 - 1); I++ )
    {
        sub_10472( ref (uParam1^)[iParam0->_fU16[I]], ref (uParam2^)[I] );
    }
    iParam0->_fU60 = (uParam2^)[iParam0->_fU44]._fU4;
    if (g_U91._fU40 != 2)
    {
        if (iParam0->_fU52)
        {
            fVar10 = 0.47500000;
            fVar11 = 0.95000000;
        }
        else
        {
            fVar10 = 0.50000000;
            fVar11 = 1.00000000;
        }
    }
    if (g_U91._fU500)
    {
        if (iParam0->_fU0 == 1)
        {
            sub_1509( iParam0 + 68, fVar10, 0.19000000 );
            if (g_U91._fU40 == 2)
            {
                sub_1509( iParam0 + 76, fVar11, 0.12000000 );
            }
            else
            {
                sub_1509( iParam0 + 76, fVar11, 0.75000000 / 6 );
            }
            iParam0->_fU100 = -0.04500000;
        }
        else
        {
            sub_1509( iParam0 + 68, fVar10, 0.25000000 );
            if (g_U91._fU40 == 2)
            {
                sub_1509( iParam0 + 76, fVar11, 0.24000000 );
            }
            else
            {
                sub_1509( iParam0 + 76, fVar11, 0.75000000 / 3 );
            }
            iParam0->_fU100 = -0.09000000;
            iParam0->_fU104 = 0.01000000;
        }
    }
    else if (iParam0->_fU0 == 1)
    {
        sub_1509( iParam0 + 68, fVar10, 0.22000000 );
        if (g_U91._fU40 == 2)
        {
            sub_1509( iParam0 + 76, fVar11, 0.18000000 );
        }
        else
        {
            sub_1509( iParam0 + 76, fVar11, 0.75000000 / 4 );
        }
        iParam0->_fU100 = -0.05500000;
    }
    else
    {
        sub_1509( iParam0 + 68, fVar10, 0.31000000 );
        if (g_U91._fU40 == 2)
        {
            sub_1509( iParam0 + 76, fVar11, 0.36000000 );
        }
        else
        {
            sub_1509( iParam0 + 76, fVar11, 0.75000000 / 2 );
        }
        iParam0->_fU100 = -0.14500000;
        iParam0->_fU104 = 0.03500000;
    }
    ref iParam0->_fU84->_fU0 = 0.05000000 + uParam5;
    ref iParam0->_fU84->_fU4 = 0.95000000;
    ref iParam0->_fU92->_fU0 = 0.05000000 + uParam5;
    ref iParam0->_fU92->_fU4 = 0.95000000;
    iParam0->_fU120 = uParam3;
    iParam0->_fU136 = uParam4;
    iParam0->_fU132 = 1;
    iParam0->_fU148 = 1;
    iParam0->_fU108 = -5;
    iParam0->_fU112 = -5;
    iParam0->_fU116 = -5;
    sub_5771( iParam0, uParam2, -1 );
    return;
}

int sub_9679(unknown uParam0, int iParam1, int iParam2)
{
    if (iParam2 < iParam1)
    {
        (uParam0^) = iParam1;
        return 1;
    }
    else if ((uParam0^) < iParam1)
    {
        (uParam0^) = iParam1;
        return 1;
    }
    else if ((uParam0^) > iParam2)
    {
        (uParam0^) = iParam2;
        return 1;
    };;;
    return 0;
}

void sub_10397(int iParam0)
{
    iParam0->_fU0 = 0;
    return;
}

void sub_10472(int iParam0, int iParam1)
{
    iParam1->_fU4 = iParam0->_fU0;
    iParam1->_fU8 = {iParam0->_fU4};
    iParam1->_fU40 = iParam0->_fU36;
    iParam1->_fU44 = iParam0->_fU40;
    iParam1->_fU48 = iParam0->_fU44;
    iParam1->_fU52 = {iParam0->_fU48};
    iParam1->_fU68 = iParam0->_fU64;
    iParam1->_fU72 = iParam0->_fU68;
    iParam1->_fU0 = 1;
    return;
}

void sub_11633(unknown uParam0, unknown uParam1, boolean bParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    int iVar17;

    if (g_U91._fU500)
    {
        uVar13._fU0 = 0.08000000;
        uVar13._fU4 = 0.10000000;
        uVar15._fU0 = 0.08000000;
        uVar15._fU4 = 0.92000000;
        iVar17 = 6;
    }
    else if (g_U91._fU40 == 2)
    {
        uVar13._fU0 = 0.10000000;
        uVar15._fU0 = 0.10000000;
    }
    else
    {
        uVar13._fU0 = 0.05000000;
        uVar15._fU0 = 0.05000000;
    }
    uVar13._fU4 = 0.10000000;
    uVar15._fU4 = 0.90000000;
    iVar17 = 5;;
    sub_11823( 0, 7, uParam0, "", uVar13._fU0, uVar13._fU4, uVar15._fU0, uVar15._fU4, 0, 0, 0, 0, 0, 1 );
    (uParam4^) = GET_NUMBER_LINES_WITH_SUBSTRINGS( uVar13._fU0, uVar13._fU4, ref (uParam1^)[0], ref (uParam1^)[1], ref (uParam1^)[2] );
    (uParam5^) = 0;
    (uParam7^) = 0;
    (uParam8^) = 0;
    if (bParam2)
    {
        g_U91._fU528 = 1;
        (uParam3^) = (uParam4^) + iVar17;
    }
    else
    {
        (uParam3^) = (uParam4^);
    }
    if ((uParam3^) <= iVar17)
    {
        (uParam6^) = (uParam4^) - 1;
        (uParam10^) = 0;
    }
    else
    {
        (uParam6^) = iVar17 - 1;
        (uParam10^) = 1;
        (uParam9^) = 0.72000000 / ((uParam3^) - (iVar17 - 1));
    }
    return;
}

void sub_11823(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, float fParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, int iParam13)
{
    float fVar16;
    float fVar17;

    fVar16 = ref iParam2->_fU0->_fU0;
    fVar17 = ref iParam2->_fU0->_fU4;
    if ((IS_JAPANESE_VERSION()) AND (iParam13 == 1))
    {
        SET_TEXT_FONT( 2 );
    }
    else
    {
        SET_TEXT_FONT( 0 );
    }
    if (IS_JAPANESE_VERSION())
    {
        fVar16 *= 0.70000000;
    }
    switch (uParam0)
    {
        case 0:
        if (sub_11942( uParam3 ))
        {
            fVar16 *= 0.80000000;
            fVar17 *= 0.80000000;
        }
        SET_TEXT_SCALE( fVar16, fVar17 * 0.65000000 );
        fParam5 *= 0.65000000;
        break;
        case 1:
        SET_TEXT_SCALE( ref iParam2->_fU0->_fU0, (ref iParam2->_fU0->_fU4) * 0.35000000 );
        fParam5 *= 0.35000000;
        break;
    }
    switch (uParam8)
    {
        case 1:
        SET_TEXT_RIGHT_JUSTIFY( 1 );
        break;
        case 2:
        SET_TEXT_CENTRE( 1 );
        break;
    }
    SET_TEXT_WRAP( uParam6, uParam7 );
    SET_TEXT_COLOUR( sub_12178( iParam2 + 8, 0 ), sub_12178( iParam2 + 8, 1 ), sub_12178( iParam2 + 8, 2 ), sub_12178( iParam2 + 8, 3 ) );
    SET_TEXT_DROPSHADOW( uParam12, 0, 0, 0, 255 );
    switch (uParam1)
    {
        case 2:
        case 1: SET_TEXT_LINE_DISPLAY( 0, 0 );
        case 0:
        DISPLAY_TEXT( uParam4, fParam5, uParam3 );
        break;
        case 4:
        SET_TEXT_LINE_DISPLAY( uParam9, uParam10 );
        DISPLAY_TEXT( uParam4, fParam5, uParam3 );
        break;
        case 5:
        SET_TEXT_LINE_DISPLAY( 0, 0 );
        SET_TEXT_USE_UNDERSCORE( 1 );
        DISPLAY_TEXT_WITH_LITERAL_STRING( uParam4, fParam5, "STRING", uParam3 );
        SET_TEXT_USE_UNDERSCORE( 0 );
        break;
        case 6:
        DISPLAY_TEXT_WITH_NUMBER( uParam4, fParam5, uParam3, uParam11 );
        break;
    }
    return;
}

int sub_11942(unknown uParam0)
{
    if ((GET_LENGTH_OF_LITERAL_STRING( uParam0 )) >= 6)
    {
        return COMPARE_STRING( GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( uParam0, 6 ), "TM_82_" );
    }
    return 0;
}

void sub_12178(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( (uParam0^), 0, 7 );
        case 1: return GET_BITS_IN_RANGE( (uParam0^), 8, 15 );
        case 2: return GET_BITS_IN_RANGE( (uParam0^), 16, 23 );
    }
    return GET_BITS_IN_RANGE( (uParam0^), 24, 31 );
}

void sub_14862(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    if (iParam2 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam2, 16);
        if (iParam3 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam3, 16);
            if (iParam4 != -1)
            {
                ConcatString((uParam0^), "_", 16);
                ConcatString((uParam0^), iParam4, 16);
            }
        }
    }
    return;
}

void sub_15551(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int I;
    char[32] cVar8;
    float fVar16;

    fVar16 = 0.00000000;
    if (NOT (# -NULL-0xc27c84()))
    {
        fVar16 = 0.15000000;
    }
    sub_8927( uParam0, 1, uParam3, 0 );
    if ((uParam4) AND ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa())))
    {
        sub_9011( uParam0, uParam2, -2, "CP_MARK_FRIEND", "", 0, 0, 0, 0, 0 );
    }
    for ( I = 0; I <= (NETWORK_GET_FRIEND_COUNT() - 1); I++ )
    {
        StrCopy( ref cVar8, NETWORK_GET_FRIEND_NAME( I ), 32 );
        sub_9011( uParam0, uParam2, GET_HASH_KEY( ref cVar8 ), ref cVar8, "", 0, 1, 0, 0, 0 );
    }
    if ((uParam4) AND ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa())))
    {
        if (NETWORK_GET_FRIEND_COUNT() <= 15)
        {
            sub_9011( uParam0, uParam2, -3, "CP_INVITE_ALL", "", 0, 0, 0, 0, 0 );
        }
    }
    sub_9622( uParam0, uParam2, uParam1, 1, 0, fVar16 );
    return;
}

void sub_16222(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int I;

    sub_8927( uParam0, 1, uParam3, 0 );
    for ( I = 0; I <= (g_U91._fU568 - 1); I++ )
    {
        sub_9011( uParam0, uParam2, I, NETWORK_GET_UNACCEPTED_INVITER_NAME( I ), "", 0, 1, 0, 0, 0 );
    }
    sub_9622( uParam0, uParam2, uParam1, 1, 0, 0 );
    return;
}

void sub_16484(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_8927( uParam0, 1, uParam3, 0 );
    if ((uParam6) AND (uParam4))
    {
        sub_16518( uParam0, uParam2 );
    }
    else
    {
        sub_16714( uParam0, uParam2, uParam4, uParam5, uParam6 );
    }
    sub_9622( uParam0, uParam2, uParam1, 1, 1, 0 );
    return;
}

void sub_16518(unknown uParam0, unknown uParam1)
{
    switch (GET_CURRENT_EPISODE())
    {
        case 0:
        sub_9011( uParam0, uParam1, 1, "NTGT_1", "", 1, 0, 0, 0, 0 );
        sub_9011( uParam0, uParam1, 3, "NTGT_3", "", 1, 0, 0, 0, 0 );
        sub_9011( uParam0, uParam1, 4, "NTGT_4", "", 1, 0, 0, 0, 0 );
        sub_9011( uParam0, uParam1, 10, "NTGT_10", "", 1, 0, 0, 0, 0 );
        sub_9011( uParam0, uParam1, 12, "NTGT_12", "", 1, 0, 0, 0, 0 );
        break;
        default:
    }
    return;
}

void sub_16714(unknown uParam0, unknown uParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    switch (GET_CURRENT_EPISODE())
    {
        case 0:
        sub_9011( uParam0, uParam1, 0, "NTGT_0", "", 1, 0, 0, 0, 0 );
        sub_9011( uParam0, uParam1, 2, "NTGT_2", "", 1, 0, 0, 0, 0 );
        sub_9011( uParam0, uParam1, 5, "NTGT_5", "", 1, 0, 0, 0, 0 );
        sub_9011( uParam0, uParam1, 6, "NTGT_6", "", 1, 0, 0, 0, 0 );
        sub_9011( uParam0, uParam1, 7, "NTGT_7", "", 1, 0, 0, 0, 0 );
        sub_9011( uParam0, uParam1, 1, "NTGT_1", "", 1, 0, 0, 0, 0 );
        sub_9011( uParam0, uParam1, 3, "NTGT_3", "", 1, 0, 0, 0, 0 );
        sub_9011( uParam0, uParam1, 4, "NTGT_4", "", 1, 0, 0, 0, 0 );
        sub_9011( uParam0, uParam1, 10, "NTGT_10", "", 1, 0, 0, 0, 0 );
        sub_9011( uParam0, uParam1, 12, "NTGT_12", "", 1, 0, 0, 0, 0 );
        if ((NOT bParam3) || (GET_NUMBER_OF_PLAYERS() <= 4))
        {
            sub_9011( uParam0, uParam1, 13, "NTGT_13", "", 1, 0, 0, 0, 0 );
            sub_9011( uParam0, uParam1, 14, "NTGT_14", "", 1, 0, 0, 0, 0 );
            sub_9011( uParam0, uParam1, 15, "NTGT_15", "", 1, 0, 0, 0, 0 );
        }
        if (NOT bParam2)
        {
            sub_9011( uParam0, uParam1, 16, "NTGT_16", "", 1, 0, 0, 0, 0 );
        }
        if (bParam2 == 1)
        {
            SET_ONLINE_LAN( 0 );
            g_U90 = 0;
        }
        if ((NOT IS_PARTY_MODE()) AND (NOT GET_ONLINE_LAN()))
        {
            sub_9011( uParam0, uParam1, 8, "CP_PARTY_MODE", "", 1, 0, 0, 0, 0 );
        }
        break;
        default:
    }
    return;
}

int sub_17593(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_17917(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, boolean bParam14, boolean bParam15)
{
    switch (g_U91._fU40)
    {
        case 2:
        if (bParam14)
        {
            sub_17989( 0, g_U523._fU0[0], 0.50000000, 0.50000000, 1.00000000, 1.00000000 );
            sub_18147( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, g_U828 );
        }
        sub_18258( uParam0 );
        if (bParam15)
        {
            if (NOT g_U91._fU540)
            {
                sub_17989( 0, g_U523._fU0[1], 0.50000000, 0.50000000, 0.85000000, 0.41000000 );
            }
        }
        break;
        default:
        sub_18952( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, uParam1._fU0 );
        if ((g_U91._fU0 == 1002) AND (NOT g_U91._fU540))
        {
            sub_18678( 0, g_U481._fU0[19], 0.50000000, 0.60000000, 0.80000000, 0.40000000, uParam1._fU12 );
        }
        break;
    }
    switch (g_U91._fU0)
    {
        case 1003:
        case 1009: break;
        default:
        if (NOT g_U91._fU528)
        {
            sub_19222( 0 );
        }
        break;
    }
    return;
}

void sub_17989(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, 0.00000000, 255, 255, 255, 255 );
    }
    return;
}

void sub_18147(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if (iParam0 == 0)
    {
        DRAW_RECT( uParam1, uParam2 * 0.65000000, uParam3, uParam4 * 0.65000000, uParam5, uParam6, uParam7, uParam8 );
    }
    else
    {
        DRAW_RECT( uParam1, 0.65000000 + (uParam2 * 0.35000000), uParam3, uParam4 * 0.35000000, uParam5, uParam6, uParam7, uParam8 );
    }
    return;
}

void sub_18258(int iParam0)
{
    int I;
    unknown uVar4;

    switch (iParam0)
    {
        case 2:
        if (g_U523._fU124 > 0)
        {
            g_U523._fU124 -= 25;
            sub_9679( ref g_U523._fU124, 0, 255 );
            break;
        }
        break;
        case 1: sub_18364();
        case 0:
        if (iParam0 != 2)
        {
            if (g_U523._fU124 < 255)
            {
                g_U523._fU124 += 25;
                sub_9679( ref g_U523._fU124, 0, 255 );
            }
        }
        sub_326( ref uVar4, 255, 255, 255, g_U523._fU124 );
        for ( I = 0; I <= 4; I++ )
        {
            sub_18678( 0, g_U523._fU0[2], g_U523._fU20[I]._fU0._fU0, g_U523._fU20[I]._fU0._fU4, g_U523._fU20[I]._fU8._fU0, g_U523._fU20[I]._fU8._fU4, uVar4 );
        }
        break;
    }
    return;
}

void sub_18364()
{
    int I;

    for ( I = 0; I <= 4; I++ )
    {
        g_U523._fU20[I]._fU0._fU4 += g_U523._fU20[I]._fU16;
        if ((g_U523._fU20[I]._fU0._fU4 + (g_U523._fU20[I]._fU8._fU4 * 0.50000000)) < 0.00000000)
        {
            sub_3236( I, 1 );
        }
    }
    return;
}

void sub_18678(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, 0.00000000, sub_12178( ref uParam6, 0 ), sub_12178( ref uParam6, 1 ), sub_12178( ref uParam6, 2 ), sub_12178( ref uParam6, 3 ) );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, 0.00000000, sub_12178( ref uParam6, 0 ), sub_12178( ref uParam6, 1 ), sub_12178( ref uParam6, 2 ), sub_12178( ref uParam6, 3 ) );
    }
    return;
}

void sub_18952(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (iParam0 == 0)
    {
        DRAW_RECT( uParam1, uParam2 * 0.65000000, uParam3, uParam4 * 0.65000000, sub_12178( ref uParam5, 0 ), sub_12178( ref uParam5, 1 ), sub_12178( ref uParam5, 2 ), sub_12178( ref uParam5, 3 ) );
    }
    else
    {
        DRAW_RECT( uParam1, 0.65000000 + (uParam2 * 0.35000000), uParam3, uParam4 * 0.35000000, sub_12178( ref uParam5, 0 ), sub_12178( ref uParam5, 1 ), sub_12178( ref uParam5, 2 ), sub_12178( ref uParam5, 3 ) );
    }
    return;
}

void sub_19222(int iParam0)
{
    int I;

    sub_18147( 1, 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    if ((NOT IS_USING_CONTROLLER()) AND (iParam0 > 0))
    {
        iParam0 = 0;
    }
    for ( I = 1; I <= 12; I++ )
    {
        if (iParam0 != I)
        {
            if (g_U91._fU496)
            {
                sub_19392( 1, g_U481._fU0[I], 0.25000000 + (((I - 1) mod 3) * 0.25000000), 0.25000000 + (((I - 1) / 3) * 0.20000000), 0.24500000, 0.18500000, 200, 200, 200, 255 );
            }
            else
            {
                sub_17989( 1, g_U481._fU0[I], 0.25000000 + (((I - 1) mod 3) * 0.25000000), 0.25000000 + (((I - 1) / 3) * 0.20000000), 0.24500000, 0.18500000 );
            }
        }
    }
    if ((NOT (# -NULL-0xc27c84())) AND (NOT (# -NULL-0xc27bfa())))
    {
        if (iParam0 != -1)
        {
            sub_19392( 1, g_U481._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 108, 130, 187, 255 );
        }
        else
        {
            sub_19392( 1, g_U481._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 100, 169, 249, 255 );
        }
        if (iParam0 != -2)
        {
            sub_19392( 1, g_U481._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 204, 43, 71, 255 );
        }
        else
        {
            sub_19392( 1, g_U481._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 250, 105, 141, 255 );
        }
    }
    else if (iParam0 != -1)
    {
        sub_19392( 1, g_U481._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 0, 100, 0, 255 );
    }
    else
    {
        sub_19392( 1, g_U481._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 0, 200, 0, 255 );
    }
    if (iParam0 != -2)
    {
        sub_19392( 1, g_U481._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 100, 0, 0, 255 );
    }
    else
    {
        sub_19392( 1, g_U481._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 200, 0, 0, 255 );
    }
    return;
}

void sub_19392(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, 0.00000000, uParam6, uParam7, uParam8, uParam9 );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, 0.00000000, uParam6, uParam7, uParam8, uParam9 );
    }
    return;
}

void sub_20156(int iParam0, unknown uParam1, unknown uParam2, int iParam3)
{
    int iVar6;
    int iVar7;
    unknown uVar8;

    iVar6 = GET_HASH_KEY( uParam2 );
    iVar7 = GET_HASH_KEY( uParam1 );
    if ((iVar6 != iParam0->_fU116) || (iVar7 != iParam0->_fU128))
    {
        iParam0->_fU116 = iVar6;
        iParam0->_fU128 = iVar7;
        sub_20237( iParam0, uParam2, uParam1 );
    }
    uVar8 = sub_20426( uParam1, 0, iParam0->_fU0[2]._fU0._fU0, iParam0->_fU0[2]._fU0._fU4 );
    switch (g_U91._fU40)
    {
        case 2:
        if (g_U91._fU528)
        {
            sub_18147( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, 0, 0, 0, 255 );
        }
        else
        {
            sub_18952( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, iParam3->_fU4 );
        }
        break;
        default:
        sub_18952( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, iParam3->_fU4 );
        sub_18952( 0, 0.50000000, 0.88000000, 1.00000000, 0.01000000, iParam3->_fU16 );
        sub_18952( 0, 0.50000000, 0.94000000, 0.01000000, 0.12000000, iParam3->_fU20 );
        break;
    }
    if (iParam0->_fU116 != 1678728908)
    {
        sub_11823( 0, 0, ref iParam0->_fU0[1], uParam2, ref iParam0->_fU100->_fU0, ref iParam0->_fU100->_fU4, 0.00000000, 1.00000000, 0, 0, 0, 0, g_U91._fU564, 1 );
    }
    if (iParam0->_fU128 != 1678728908)
    {
        sub_11823( 0, 0, ref iParam0->_fU0[2], uParam1, (ref iParam0->_fU108->_fU0) - uVar8, ref iParam0->_fU108->_fU4, 0.00000000, ref iParam0->_fU108->_fU0, 0, 0, 0, 0, g_U91._fU564, 1 );
    }
    return;
}

void sub_20237(int iParam0, string sParam1, string sParam2)
{
    boolean bVar5;
    int[2] iVar6;

    bVar5 = true;
    array(ref iVar6, 2);
    sub_20268( ref iParam0->_fU0[1]._fU0, iParam0 + 120 );
    sub_20268( ref iParam0->_fU0[2]._fU0, iParam0 + 132 );
    if (iParam0->_fU116 == 1678728908)
    {
        sParam1 = "A";
        iVar6[0] = 1;
    }
    if (iParam0->_fU128 == 1678728908)
    {
        sParam2 = "A";
        iVar6[1] = 1;
    }
    bVar5 = true;
    while (bVar5)
    {
        if (((sub_20426( sParam1, iVar6[0], iParam0->_fU0[1]._fU0._fU0, iParam0->_fU0[1]._fU0._fU4 )) + (sub_20426( sParam2, iVar6[1], iParam0->_fU0[2]._fU0._fU0, iParam0->_fU0[2]._fU0._fU4 ))) > 0.90000000)
        {
            iParam0->_fU0[1]._fU0._fU0 *= 0.80000000;
            iParam0->_fU0[1]._fU0._fU4 *= 0.80000000;
            iParam0->_fU0[2]._fU0._fU0 *= 0.80000000;
            iParam0->_fU0[2]._fU0._fU4 *= 0.80000000;
        }
        else
        {
            bVar5 = false;
        }
    }
    return;
}

void sub_20268(int iParam0, int iParam1)
{
    iParam0->_fU0 = iParam1->_fU0;
    iParam0->_fU4 = iParam1->_fU4;
    return;
}

void sub_20426(unknown uParam0, boolean bParam1, unknown uParam2, unknown uParam3)
{
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_FONT( 2 );
    }
    else
    {
        SET_TEXT_FONT( 0 );
    }
    SET_TEXT_SCALE( uParam2, uParam3 * 0.65000000 );
    if (bParam1)
    {
        return GET_STRING_WIDTH_WITH_STRING( "STRING", uParam0 );
    }
    return GET_STRING_WIDTH( uParam0 );
}

void sub_21144(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    char[16] cVar7;

    iVar5 = GET_BITS_IN_RANGE( g_U91._fU96, 0, 15 );
    iVar6 = GET_BITS_IN_RANGE( g_U91._fU96, 16, 31 );
    iVar6++;
    if (iVar6 >= 120)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 301, ref iVar4 );
        if (iVar4 < 70)
        {
            if (iVar5 > 1)
            {
                iVar5--;
                SET_BITS_IN_RANGE( ref g_U91._fU96, 0, 15, iVar5 );
            }
        }
        else if (iVar4 > 200)
        {
            if (iVar5 < 4)
            {
                iVar5++;
                SET_BITS_IN_RANGE( ref g_U91._fU96, 0, 15, iVar5 );
            }
        }
        SET_BITS_IN_RANGE( ref g_U91._fU96, 16, 31, 0 );
    }
    else
    {
        SET_BITS_IN_RANGE( ref g_U91._fU96, 16, 31, iVar6 );
    }
    switch (g_U91._fU40)
    {
        case 2:
        sub_18952( 0, 0.50000000, 0.06000000, 1.00000000, 0.12000000, iParam1->_fU12 );
        if (NOT g_U91._fU540)
        {
            switch (iVar5)
            {
                case 4: sub_18147( 0, 0.20000000, 0.06000000, 0.02500000, 0.08000000, 255, 255, 255, 255 );
                case 3: sub_18147( 0, 0.16000000, 0.07000000, 0.02500000, 0.06000000, 255, 255, 255, 255 );
                case 2: sub_18147( 0, 0.12000000, 0.08000000, 0.02500000, 0.04000000, 255, 255, 255, 255 );
                case 1:
                sub_18147( 0, 0.08000000, 0.09000000, 0.02500000, 0.02000000, 255, 255, 255, 255 );
                break;
            }
        }
        StrCopy( ref cVar7, "DOW_SHORT_DAY_", 16 );
        ConcatString(ref cVar7, GET_CURRENT_DAY_OF_WEEK(), 16);
        if (g_U91._fU500)
        {
            sub_11823( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01500000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_21733( uParam0, 0.79000000, 0.01500000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        else
        {
            sub_11823( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01000000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_21733( uParam0, 0.79000000, 0.01000000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        break;
        default:
        sub_18952( 0, 0.50000000, 0.06500000, 1.00000000, 0.13000000, iParam1->_fU12 );
        if (NOT g_U91._fU540)
        {
            switch (iVar5)
            {
                case 4: sub_18147( 0, 0.20000000, 0.06500000, 0.02500000, 0.08000000, 255, 255, 255, 255 );
                case 3: sub_18147( 0, 0.16000000, 0.07500000, 0.02500000, 0.06000000, 255, 255, 255, 255 );
                case 2: sub_18147( 0, 0.12000000, 0.08500000, 0.02500000, 0.04000000, 255, 255, 255, 255 );
                case 1:
                sub_18147( 0, 0.08000000, 0.09500000, 0.02500000, 0.02000000, 255, 255, 255, 255 );
                break;
            }
        }
        StrCopy( ref cVar7, "DOW_SHORT_DAY_", 16 );
        ConcatString(ref cVar7, GET_CURRENT_DAY_OF_WEEK(), 16);
        if (g_U91._fU500)
        {
            sub_11823( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01500000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_21733( uParam0, 0.79000000, 0.01500000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        else
        {
            sub_11823( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01000000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_21733( uParam0, 0.79000000, 0.01000000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        break;
    }
    return;
}

void sub_21733(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    char[16] cVar7;

    if (iParam3 < 10)
    {
        StrCopy( ref cVar7, "CP_TIME_ZERO", 16 );
    }
    else
    {
        StrCopy( ref cVar7, "CP_TIME_NOZERO", 16 );
    }
    sub_11823( 0, 6, uParam0, ref cVar7, uParam1 - 0.02000000, uParam2, 0.00000000, uParam1 - 0.02000000, 1, 0, 0, iParam3, 0, 1 );
    sub_11823( 0, 0, uParam0, "CP_TIME_SEP", uParam1, uParam2 - 0.01000000, 0.00000000, 1.00000000, 2, 0, 0, 0, 0, 1 );
    if (iParam4 < 10)
    {
        StrCopy( ref cVar7, "CP_TIME_ZERO", 16 );
    }
    else
    {
        StrCopy( ref cVar7, "CP_TIME_NOZERO", 16 );
    }
    sub_11823( 0, 6, uParam0, ref cVar7, uParam1 + 0.02000000, uParam2, 0.00000000, 1.00000000, 0, 0, 0, iParam4, 0, 1 );
    return;
}

void sub_22896(int iParam0, unknown uParam1, int iParam2, int iParam3, boolean bParam4)
{
    int I;
    float fVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;

    iVar10 = 0;
    iParam0->_fU112++;
    iParam0->_fU116++;
    if ((iParam0->_fU64) AND (g_U91._fU40 == 2))
    {
        sub_18952( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, iParam3->_fU8 );
    }
    for ( I = 0; I <= (iParam0->_fU48 - 1); I++ )
    {
        fVar8 = (ref iParam0->_fU68->_fU4) + ((ref iParam0->_fU76->_fU4) * I);
        iVar9 = 0;
        if (bParam4)
        {
            if ((uParam1^)[I]._fU0)
            {
                if (g_U91._fU0 == 1083)
                {
                    if ((uParam1^)[I]._fU4 != 1000)
                    {
                        iVar9 = 1;
                    }
                    else if (NOT (COMPARE_STRING( ref (uParam1^)[I]._fU8, "CP_OPT_INVITE" )))
                    {
                        iVar9 = 1;
                    }
                }
                else if ((uParam1^)[I]._fU72)
                {
                    iVar9 = 1;
                }
            }
        }
        if ((iParam0->_fU44 == I) || (iParam0->_fU64))
        {
            if (NOT iParam0->_fU64)
            {
                sub_18952( 0, ref iParam0->_fU68->_fU0, fVar8, ref iParam0->_fU76->_fU0, ref iParam0->_fU76->_fU4, iParam3->_fU8 );
            }
            iVar11 = 5;
            iVar12 = 7;
            iVar10 = 1;
        }
        else
        {
            iVar11 = 4;
            iVar12 = 6;
            iVar10 = 0;
        }
        if ((uParam1^)[I]._fU92)
        {
            if ((iParam0->_fU44 == I) AND (iParam0->_fU120))
            {
                if (iParam0->_fU112 >= 5)
                {
                    sub_23379( ref (uParam1^)[I]._fU8, iParam0, 1, (uParam1^)[I]._fU40, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
                }
                sub_23924( ref (uParam1^)[I]._fU8, iParam0->_fU124, iParam0->_fU128, ref iParam0->_fU84->_fU0, fVar8 + iParam0->_fU100, (uParam1^)[I]._fU76._fU0, (uParam1^)[I]._fU76._fU4, ref iParam2->_fU0[iVar11], ref iParam0->_fU84->_fU0, ref iParam0->_fU84->_fU4, (uParam1^)[I]._fU40, iVar9, iVar10, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
            }
            else
            {
                sub_23924( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU100, (uParam1^)[I]._fU104, ref iParam0->_fU84->_fU0, fVar8 + iParam0->_fU100, (uParam1^)[I]._fU76._fU0, (uParam1^)[I]._fU76._fU4, ref iParam2->_fU0[iVar11], ref iParam0->_fU84->_fU0, ref iParam0->_fU84->_fU4, (uParam1^)[I]._fU40, iVar9, iVar10, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
            }
        }
        else
        {
            iVar13 = 0;
            if ((uParam1^)[I]._fU40)
            {
                iVar13 = GET_LENGTH_OF_LITERAL_STRING( ref (uParam1^)[I]._fU8 );
            }
            else
            {
                iVar13 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL_INS_NUM( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
            }
            sub_23924( ref (uParam1^)[I]._fU8, 0, iVar13, ref iParam0->_fU84->_fU0, fVar8 + iParam0->_fU100, (uParam1^)[I]._fU76._fU0, (uParam1^)[I]._fU76._fU4, ref iParam2->_fU0[iVar11], ref iParam0->_fU84->_fU0, ref iParam0->_fU84->_fU4, (uParam1^)[I]._fU40, iVar9, iVar10, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
        }
        if (iParam0->_fU0 == 2)
        {
            if ((uParam1^)[I]._fU108)
            {
                if ((iParam0->_fU44 == I) AND (iParam0->_fU136))
                {
                    if (iParam0->_fU116 >= 5)
                    {
                        sub_23379( ref (uParam1^)[I]._fU52, iParam0, 0, (uParam1^)[I]._fU68, 0, 0 );
                    }
                    sub_23924( ref (uParam1^)[I]._fU52, iParam0->_fU140, iParam0->_fU144, ref iParam0->_fU92->_fU0, fVar8 + iParam0->_fU104, (uParam1^)[I]._fU84._fU0, (uParam1^)[I]._fU84._fU4, ref iParam2->_fU0[iVar12], ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, (uParam1^)[I]._fU68, 0, 0, 0, 0 );
                }
                else
                {
                    sub_23924( ref (uParam1^)[I]._fU52, (uParam1^)[I]._fU116, (uParam1^)[I]._fU120, ref iParam0->_fU92->_fU0, fVar8 + iParam0->_fU104, (uParam1^)[I]._fU84._fU0, (uParam1^)[I]._fU84._fU4, ref iParam2->_fU0[iVar12], ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, (uParam1^)[I]._fU68, 0, 0, 0, 0 );
                }
            }
            else
            {
                iVar14 = 0;
                if ((uParam1^)[I]._fU68)
                {
                    iVar14 = GET_LENGTH_OF_LITERAL_STRING( ref (uParam1^)[I]._fU52 );
                }
                else
                {
                    iVar14 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( ref (uParam1^)[I]._fU52 );
                }
                sub_23924( ref (uParam1^)[I]._fU52, 0, iVar14, ref iParam0->_fU92->_fU0, fVar8 + iParam0->_fU104, (uParam1^)[I]._fU84._fU0, (uParam1^)[I]._fU84._fU4, ref iParam2->_fU0[iVar12], ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, (uParam1^)[I]._fU68, 0, 0, 0, 0 );
            }
        }
    }
    sub_25207( iParam0, iParam3, -1 );
    return;
}

void sub_23379(unknown uParam0, int iParam1, boolean bParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    iVar8 = 0;
    if (bParam3)
    {
        iVar8 = GET_LENGTH_OF_LITERAL_STRING( uParam0 );
    }
    else
    {
        iVar8 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL_INS_NUM( uParam0, uParam4, uParam5 );
    }
    if (bParam2)
    {
        if (iParam1->_fU132)
        {
            if (iParam1->_fU128 < iVar8)
            {
                iParam1->_fU124++;
                iParam1->_fU128++;
                iParam1->_fU112 = 0;
            }
            else
            {
                iParam1->_fU132 = 0;
                iParam1->_fU112 = -10;
            }
        }
        else if (iParam1->_fU124 > 0)
        {
            iParam1->_fU124--;
            iParam1->_fU128--;
            iParam1->_fU112 = 0;
        }
        else
        {
            iParam1->_fU132 = 1;
            iParam1->_fU112 = -10;
        }
    }
    else if (iParam1->_fU148)
    {
        if (iParam1->_fU144 < iVar8)
        {
            iParam1->_fU140++;
            iParam1->_fU144++;
            iParam1->_fU116 = 0;
        }
        else
        {
            iParam1->_fU148 = 0;
            iParam1->_fU116 = -10;
        }
    }
    else if (iParam1->_fU140 > 0)
    {
        iParam1->_fU140--;
        iParam1->_fU144--;
        iParam1->_fU116 = 0;
    }
    else
    {
        iParam1->_fU148 = 1;
        iParam1->_fU116 = -10;
    };;;
    return;
}

void sub_23924(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, float fParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8, unknown uParam9, boolean bParam10, boolean bParam11, unknown uParam12, unknown uParam13, unknown uParam14)
{
    SET_TEXT_FONT( 0 );
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_FONT( 2 );
    }
    SET_TEXT_SCALE( uParam5, uParam6 * 0.65000000 );
    SET_TEXT_WRAP( uParam8, uParam9 );
    if (bParam11)
    {
        if (NETWORK_IS_FRIEND_ONLINE( uParam0 ))
        {
            SET_TEXT_COLOUR( sub_12178( iParam7 + 8, 0 ), sub_12178( iParam7 + 8, 1 ), sub_12178( iParam7 + 8, 2 ), sub_12178( iParam7 + 8, 3 ) );
        }
        else if ((g_U91._fU40 == 2) || (uParam12))
        {
            SET_TEXT_COLOUR( 130, 130, 130, sub_12178( iParam7 + 8, 3 ) );
        }
        else
        {
            SET_TEXT_COLOUR( 70, 70, 70, sub_12178( iParam7 + 8, 3 ) );
        }
    }
    else
    {
        SET_TEXT_COLOUR( sub_12178( iParam7 + 8, 0 ), sub_12178( iParam7 + 8, 1 ), sub_12178( iParam7 + 8, 2 ), sub_12178( iParam7 + 8, 3 ) );
    }
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 0 );
    fParam4 *= 0.65000000;
    if (bParam10)
    {
        SET_TEXT_USE_UNDERSCORE( 1 );
        DISPLAY_TEXT_WITH_LITERAL_SUBSTRING( uParam3, fParam4, "STRING", uParam0, uParam1, uParam2 );
        SET_TEXT_USE_UNDERSCORE( 0 );
    }
    else
    {
        DISPLAY_TEXT_SUBSTRING( uParam3, fParam4, uParam0, uParam13, uParam14, uParam1, uParam2 );
    }
    return;
}

void sub_25207(int iParam0, int iParam1, int iParam2)
{
    int iVar5;

    if (iParam2 != -1)
    {
        iVar5 = iParam2;
    }
    else
    {
        iVar5 = iParam0->_fU16[iParam0->_fU44];
    }
    if (iParam0->_fU52)
    {
        if (g_U91._fU40 == 1)
        {
            sub_18952( 0, 0.95000000, 0.50500000, 0.01000000, 0.75000000, iParam1->_fU28 );
            sub_18952( 0, 0.95000000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.05000000, iParam0->_fU56, iParam1->_fU36 );
            sub_18952( 0, 0.95000000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.05000000 * 0.70000000, iParam0->_fU56 * 0.70000000, iParam1->_fU32 );
        }
        else
        {
            sub_18952( 0, 0.97000000, 0.49000000, 0.00700000, 0.72000000, iParam1->_fU28 );
            sub_18952( 0, 0.98500000, 0.13000000, 0.03000000, 0.00700000, iParam1->_fU28 );
            sub_18952( 0, 0.98500000, 0.85000000, 0.03000000, 0.00700000, iParam1->_fU28 );
            sub_18952( 0, 0.98500000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.03000000, iParam0->_fU56, iParam1->_fU28 );
        }
    }
    return;
}

void sub_25788(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int I;
    float fVar7;
    char[16] cVar8;

    sub_17917( 1, (uParam3^), 1, 0 );
    sub_22896( iParam0, uParam1, uParam2, uParam3, 0 );
    StrCopy( ref cVar8, "BLANK", 16 );
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        if ((uParam1^)[I]._fU0)
        {
            if (NETWORK_IS_FRIEND_IN_SAME_TITLE( ref (uParam1^)[I]._fU8 ))
            {
                fVar7 = (ref iParam0->_fU68->_fU4) + ((ref iParam0->_fU76->_fU4) * I);
                sub_17989( 0, g_U481._fU0[18], 0.11000000, fVar7, 0.20000000, 0.10000000 );
                if (I == iParam0->_fU44)
                {
                    StrCopy( ref cVar8, "CP_OPT_INVITE", 16 );
                }
            }
        }
    }
    sub_20156( uParam2, "CP_NAV_BACK", ref cVar8, uParam3 );
    return;
}

void sub_26303(unknown uParam0, int iParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7)
{
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    int iVar15;
    int iVar16;

    iVar15 = 5;
    switch (g_U91._fU40)
    {
        case 2:
        if ((uParam4) AND ((uParam6^) != (iParam7 - 1)))
        {
            sub_18952( 0, 0.50000000, 0.50500000, 0.90000000, 0.75000000, iParam1->_fU8 );
        }
        else
        {
            sub_18952( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, iParam1->_fU8 );
        }
        break;
        default:
        sub_18952( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, iParam1->_fU0 );
        break;
    }
    if (g_U91._fU500)
    {
        uVar10._fU0 = 0.08000000;
        uVar10._fU4 = 0.10000000;
        uVar12._fU0 = 0.08000000;
        uVar12._fU4 = 0.92000000;
        iVar15 = 6;
    }
    else if (g_U91._fU40 == 2)
    {
        uVar10._fU0 = 0.10000000;
        uVar12._fU0 = 0.10000000;
    }
    else
    {
        uVar10._fU0 = 0.05000000;
        uVar12._fU0 = 0.05000000;
    }
    uVar10._fU4 = 0.10000000;
    uVar12._fU4 = 0.90000000;
    iVar15 = 5;;
    fVar14 = 0.67000000 / (TO_FLOAT( iVar15 ));
    iVar16 = (uParam6^) - iParam7;
    if ((uParam4) AND (iVar16 < iVar15))
    {
        if (sub_26657( iParam2 ))
        {
            sub_17989( 0, iParam2->_fU36, 0.50000000, 0.49000000 - ((iVar16 + 1) * fVar14), 0.85000000, 0.67000000 );
        }
        else
        {
            sub_26938( uParam0, 0.49000000 - ((iVar16 + 1) * fVar14), iVar16 );
        }
        sub_11823( 0, 7, uParam0, "", uVar10._fU0, uVar10._fU4, uVar12._fU0, uVar12._fU4, 0, 0, 0, 0, 0, 1 );
        SET_TEXT_LINE_DISPLAY( (uParam5^), (uParam6^) );
    }
    else
    {
        sub_11823( 0, 7, uParam0, "", uVar10._fU0, uVar10._fU4, uVar12._fU0, uVar12._fU4, 0, 0, 0, 0, 0, 1 );
        SET_TEXT_LINE_DISPLAY( (uParam5^), (uParam6^) );
    }
    DISPLAY_TEXT_WITH_TWO_STRINGS( uVar10._fU0, uVar10._fU4, ref (uParam3^)[0], ref (uParam3^)[1], ref (uParam3^)[2] );
    if (g_U91._fU528)
    {
        sub_19222( 0 );
    }
    return;
}

int sub_26657(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (iParam0->_fU40)
    {
        return 1;
    }
    if (iParam0->_fU44)
    {
        if (HAS_STREAMED_TXD_LOADED( iParam0 + 0 ))
        {
            sub_26718( ref uVar3, iParam0->_fU32 );
            iParam0->_fU36 = GET_TEXTURE_FROM_STREAMED_TXD( iParam0 + 0, ref uVar3 );
            iParam0->_fU40 = 1;
            return 1;
        }
    }
    else
    {
        SCRIPT_ASSERT( "CELLPHONE - photo texture now loaded for some reason" );
    }
    return 0;
}

void sub_26718(unknown uParam0, int iParam1)
{
    StrCopy( (uParam0^), "photo_", 16 );
    ConcatString((uParam0^), iParam1 mod 5, 16);
    return;
}

void sub_26938(unknown uParam0, unknown uParam1, int iParam2)
{
    sub_18147( 0, 0.50000000, uParam1 - 0.33500000, 0.85000000, 0.01000000, 255, 255, 255, 150 );
    sub_18147( 0, 0.50000000, uParam1 + 0.33500000, 0.85000000, 0.01000000, 255, 255, 255, 150 );
    sub_18147( 0, 0.07500000, uParam1, 0.01000000, 0.67000000, 255, 255, 255, 150 );
    sub_18147( 0, 0.92500000, uParam1, 0.01000000, 0.67000000, 255, 255, 255, 150 );
    if (iParam2 >= -6)
    {
        sub_11823( 0, 0, uParam0, "PHOTO_LOADING", 0.09000000, uParam1 - 0.32000000, 0.10000000, 0.90000000, 0, 0, 0, 0, 0, 1 );
    }
    else
    {
        sub_6945( "\n photo sections", iParam2 );
    }
    return;
}

void sub_27549(int iParam0, int iParam1)
{
    boolean Result;
    int iVar5;

    if (g_U91._fU380)
    {
        Result = false;
        iVar5 = 0;
        if (g_U91._fU0 == 1004)
        {
            if ((g_U91._fU112 == 3) || (g_U91._fU112 == 4))
            {
                iVar5 = 1;
                if (g_U91._fU116)
                {
                    SHAKE_PAD( 0, 100, 256 );
                    g_U91._fU8._fU0._fU0 += 0.25000000;
                    if (g_U91._fU8._fU0._fU0 >= (g_U91._fU8._fU28 + 0.50000000))
                    {
                        g_U91._fU116 = 0;
                    }
                }
                else
                {
                    SHAKE_PAD( 0, 100, 128 );
                    g_U91._fU8._fU0._fU0 -= 0.25000000;
                    if (g_U91._fU8._fU0._fU0 <= (g_U91._fU8._fU28 - 0.50000000))
                    {
                        g_U91._fU116 = 1;
                    }
                }
            }
        }
        if (iParam0->_fU0 == iParam1)
        {
            sub_27829( iParam0, iVar5 );
            if (iParam1 == 1)
            {
                SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 0 );
            }
            Result = true;
        }
        else if (iParam1 == 1)
        {
            SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 1 );
        }
        if ((iParam0->_fU0 < 5) AND (iParam1 < 5))
        {
            sub_28273( iParam0, iParam0->_fU0, iParam1 );
            iParam0->_fU0 = (iParam0->_fU0 * 10) + iParam1;
        }
        else
        {
            sub_27829( iParam0, iVar5 );
        }
        if ((NOT Result) || (iVar5))
        {
            sub_2924();
        }
    }
    else
    {
        Result = true;
    }
    return Result;
}

void sub_27829(int iParam0, boolean bParam1)
{
    unknown uVar4;

    GET_FRAME_TIME( ref uVar4 );
    if (iParam0->_fU0 > 5)
    {
        sub_27902( ref g_U91._fU8._fU0, (ref ref iParam0->_fU4->_fU0->_fU0) * uVar4, (ref ref iParam0->_fU4->_fU0->_fU4) * uVar4, (ref ref iParam0->_fU4->_fU0->_fU8) * uVar4 );
        sub_27902( ref g_U91._fU8._fU12, (ref ref iParam0->_fU4->_fU12->_fU0) * uVar4, (ref ref iParam0->_fU4->_fU12->_fU4) * uVar4, (ref ref iParam0->_fU4->_fU12->_fU8) * uVar4 );
        if (sub_28009( iParam0 ))
        {
            iParam0->_fU0 = iParam0->_fU0 mod 10;
            if (NOT bParam1)
            {
                sub_2270( iParam0, iParam0->_fU0 );
            }
        }
    }
    return;
}

void sub_27902(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    iParam0->_fU0 -= uParam1;
    iParam0->_fU4 -= uParam2;
    iParam0->_fU8 -= uParam3;
    return;
}

int sub_28009(int iParam0)
{
    if ((ref ref iParam0->_fU4->_fU0->_fU4) >= 0.00000000)
    {
        if (g_U91._fU8._fU0._fU4 <= (ref ref iParam0->_fU36->_fU0->_fU4))
        {
            g_U91._fU8._fU0._fU4 = ref ref iParam0->_fU36->_fU0->_fU4;
            return 1;
        }
    }
    else if (g_U91._fU8._fU0._fU4 >= (ref ref iParam0->_fU36->_fU0->_fU4))
    {
        g_U91._fU8._fU0._fU4 = ref ref iParam0->_fU36->_fU0->_fU4;
        return 1;
    }
    return 0;
}

void sub_28273(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    sub_2294( uParam1, ref uVar5 );
    sub_2294( uParam2, iParam0 + 36 );
    iParam0->_fU68 = 0;
    ref iParam0->_fU4->_fU0 = {(uVar5._fU0._fU0 - (ref ref iParam0->_fU36->_fU0->_fU0)) / 0.18000000, (uVar5._fU0._fU4 - (ref ref iParam0->_fU36->_fU0->_fU4)) / 0.18000000, (uVar5._fU0._fU8 - (ref ref iParam0->_fU36->_fU0->_fU8)) / 0.18000000};
    ref iParam0->_fU4->_fU12 = {(uVar5._fU12._fU0 - (ref ref iParam0->_fU36->_fU12->_fU0)) / 0.18000000, (uVar5._fU12._fU4 - (ref ref iParam0->_fU36->_fU12->_fU4)) / 0.18000000, (uVar5._fU12._fU8 - (ref ref iParam0->_fU36->_fU12->_fU8)) / 0.18000000};
    ref iParam0->_fU4->_fU24 = (uVar5._fU24 - (ref iParam0->_fU36->_fU24)) / 0.18000000;
    return;
}

void sub_28583(unknown uParam0)
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
            Result = sub_28749( iVar4 );
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
            Result = sub_28749( iVar4 );
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
            Result = sub_28749( iVar4 );
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
            Result = sub_28749( iVar4 );
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
            Result = sub_28749( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 3:
        if ((NOT (IS_BUTTON_PRESSED( 0, 11 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 1 ))))
        {
            Result = sub_28749( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 18:
        if ((NOT (IS_CONTROL_PRESSED( 2, 22 ))) AND (NOT IS_USING_CONTROLLER()))
        {
            Result = sub_28749( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        Result = sub_28749( iVar4 );
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
            uVar6 = sub_31329( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 7:
        if ((((NOT IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND ((IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 182 ))))) AND (NOT (IS_MOUSE_BUTTON_PRESSED( 2 ))))
        {
            uVar6 = sub_31329( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        uVar6 = sub_31329( iVar4 );
        break;
    }
    if (IS_NUMLOCK_ENABLED())
    {
        switch (g_U567)
        {
            case 8:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 82 )))
            {
                iVar7 = sub_31791( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 9:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 79 )))
            {
                iVar7 = sub_31791( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 10:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 80 )))
            {
                iVar7 = sub_31791( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 11:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 81 )))
            {
                iVar7 = sub_31791( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 12:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 75 )))
            {
                iVar7 = sub_31791( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 13:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 76 )))
            {
                iVar7 = sub_31791( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 14:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 77 )))
            {
                iVar7 = sub_31791( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 15:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 71 )))
            {
                iVar7 = sub_31791( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 16:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 72 )))
            {
                iVar7 = sub_31791( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 17:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 73 )))
            {
                iVar7 = sub_31791( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            default:
            iVar7 = sub_31791( iVar4 );
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

void sub_28749(unknown uParam0)
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
            sub_29150( 2, uParam0 );
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
            sub_29150( 8, uParam0 );
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
            sub_29150( 8, uParam0 );
            break;
        }
    }
    else if (((bVar3) AND (NOT bVar5)) AND (NOT bVar4))
    {
        g_U565 = 3;
        if ((g_U91._fU0 == 1003) || (g_U91._fU0 == 1009))
        {
            sub_29150( 7, uParam0 );
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
            sub_29150( 8, uParam0 );
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
            sub_29150( 2, uParam0 );
            break;
        }
    }
    else if (((bVar6) AND (NOT bVar5)) AND (NOT bVar4))
    {
        g_U565 = 2;
        if ((g_U91._fU0 == 1003) || (g_U91._fU0 == 1009))
        {
            sub_29150( 3, uParam0 );
        }
    }
    else
    {
        g_U565 = 19;
    };;;;;;;
    return g_U565;
}

void sub_29150(unknown uParam0, unknown uParam1)
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
            sub_3036( "\n playing keypadTone 10.0" );
            break;
            case 1:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 0.00000000 );
            sub_3036( "\n playing keypadTone 0.0" );
            break;
            case 2:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 1.00000000 );
            sub_3036( "\n playing keypadTone 1.0" );
            break;
            case 3:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 2.00000000 );
            sub_3036( "\n playing keypadTone 2.0" );
            break;
            case 4:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 3.00000000 );
            sub_3036( "\n playing keypadTone 3.0" );
            break;
            case 5:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 4.00000000 );
            sub_3036( "\n playing keypadTone 4.0" );
            break;
            case 6:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 5.00000000 );
            sub_3036( "\n playing keypadTone 5.0" );
            break;
            case 7:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 6.00000000 );
            sub_3036( "\n playing keypadTone 6.0" );
            break;
            case 8:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 7.00000000 );
            sub_3036( "\n playing keypadTone 7.0" );
            break;
            case 9:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 8.00000000 );
            sub_3036( "\n playing keypadTone 8.0" );
            break;
            case 10:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 9.00000000 );
            sub_3036( "\n playing keypadTone 9.0" );
            break;
            case 11:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 11.00000000 );
            sub_3036( "\n playing keypadTone 11.0" );
            break;
        }
        RELEASE_SOUND_ID( uVar4 );
    }
    return;
}

void sub_31329(unknown uParam0)
{
    if ((((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 181 )))) || (IS_MOUSE_BUTTON_PRESSED( 1 )))
    {
        g_U566 = 6;
        switch (g_U91._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_29150( 6, uParam0 );
            break;
        }
    }
    else if ((((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 78 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 182 )))) || (IS_MOUSE_BUTTON_PRESSED( 2 )))
    {
        g_U566 = 7;
        if (g_U91._fU0 != 1007)
        {
            sub_29150( 4, uParam0 );
        }
    }
    else
    {
        g_U566 = 19;
    }
    return g_U566;
}

void sub_31791(unknown uParam0)
{
    g_U567 = 19;
    if (((g_U91._fU0 == 1003) || (g_U91._fU0 == 1009)) AND (IS_NUMLOCK_ENABLED()))
    {
        if (IS_GAME_KEYBOARD_KEY_PRESSED( 82 ))
        {
            g_U567 = 8;
            sub_29150( 0, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 79 ))
        {
            g_U567 = 9;
            sub_29150( 1, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 80 ))
        {
            g_U567 = 10;
            sub_29150( 2, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 81 ))
        {
            g_U567 = 11;
            sub_29150( 3, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 75 ))
        {
            g_U567 = 12;
            sub_29150( 4, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 76 ))
        {
            g_U567 = 13;
            sub_29150( 5, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 77 ))
        {
            g_U567 = 14;
            sub_29150( 6, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 71 ))
        {
            g_U567 = 15;
            sub_29150( 7, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 72 ))
        {
            g_U567 = 16;
            sub_29150( 8, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 73 ))
        {
            g_U567 = 17;
            sub_29150( 9, uParam0 );
        };;;;;;;;;;
    }
    return g_U567;
}

void sub_32761(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int iVar6;

    if (iParam0->_fU44 > 0)
    {
        iParam0->_fU44--;
        iParam0->_fU108 = -5;
        iParam0->_fU112 = -5;
        iParam0->_fU116 = -5;
        iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
        iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
        iParam0->_fU132 = 1;
        iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
        iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
        iParam0->_fU148 = 1;
    }
    else if (iParam0->_fU52)
    {
        if ((iParam0->_fU16[iParam0->_fU44] - 1) >= 0)
        {
            iVar6 = iParam0->_fU16[iParam0->_fU44] - 1;
            for ( I = iParam0->_fU48 - 1; I >= 1; I += -1 )
            {
                iParam0->_fU16[I] = iParam0->_fU16[I - 1];
            }
            sub_33043( uParam2 );
            iParam0->_fU16[iParam0->_fU44] = iVar6;
            sub_10472( ref (uParam1^)[iVar6], ref (uParam2^)[iParam0->_fU44] );
            sub_5771( iParam0, uParam2, iParam0->_fU44 );
            iParam0->_fU108 = -5;
            iParam0->_fU112 = -5;
            iParam0->_fU116 = -5;
            iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
            iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
            iParam0->_fU132 = 1;
            iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
            iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
            iParam0->_fU148 = 1;
        }
        else
        {
            iParam0->_fU44 = iParam0->_fU48 - 1;
            for ( I = 0; I <= (iParam0->_fU48 - 1); I++ )
            {
                iParam0->_fU16[I] = iParam0->_fU4 - (iParam0->_fU48 - I);
                sub_10472( ref (uParam1^)[iParam0->_fU16[I]], ref (uParam2^)[I] );
            }
            sub_5771( iParam0, uParam2, -1 );
        }
    }
    else
    {
        iParam0->_fU44 = iParam0->_fU4 - 1;
        iParam0->_fU108 = -5;
        iParam0->_fU112 = -5;
        iParam0->_fU116 = -5;
        iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
        iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
        iParam0->_fU132 = 1;
        iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
        iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
        iParam0->_fU148 = 1;
    }
    iParam0->_fU60 = (uParam2^)[iParam0->_fU44]._fU4;
    return;
}

void sub_33043(unknown uParam0)
{
    int I;

    for ( I = (uParam0^) - 2; I >= 0; I += -1 )
    {
        (uParam0^)[I + 1] = {(uParam0^)[I]};
    }
    return;
}

void sub_33597(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int iVar6;

    if (iParam0->_fU44 < (iParam0->_fU48 - 1))
    {
        iParam0->_fU44++;
        iParam0->_fU108 = -5;
        iParam0->_fU112 = -5;
        iParam0->_fU116 = -5;
        iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
        iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
        iParam0->_fU132 = 1;
        iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
        iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
        iParam0->_fU148 = 1;
    }
    else if (iParam0->_fU52)
    {
        if ((iParam0->_fU16[iParam0->_fU44] + 1) < iParam0->_fU4)
        {
            iVar6 = iParam0->_fU16[iParam0->_fU44] + 1;
            for ( I = 0; I <= (iParam0->_fU48 - 2); I++ )
            {
                iParam0->_fU16[I] = iParam0->_fU16[I + 1];
            }
            sub_33891( uParam2 );
            iParam0->_fU16[iParam0->_fU44] = iVar6;
            sub_10472( ref (uParam1^)[iVar6], ref (uParam2^)[iParam0->_fU44] );
            sub_5771( iParam0, uParam2, iParam0->_fU44 );
            iParam0->_fU108 = -5;
            iParam0->_fU112 = -5;
            iParam0->_fU116 = -5;
            iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
            iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
            iParam0->_fU132 = 1;
            iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
            iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
            iParam0->_fU148 = 1;
        }
        else
        {
            iParam0->_fU44 = 0;
            for ( I = 0; I <= (iParam0->_fU48 - 1); I++ )
            {
                iParam0->_fU16[I] = I;
                sub_10472( ref (uParam1^)[I], ref (uParam2^)[I] );
            }
            sub_5771( iParam0, uParam2, -1 );
        }
    }
    else
    {
        iParam0->_fU44 = 0;
        iParam0->_fU108 = -5;
        iParam0->_fU112 = -5;
        iParam0->_fU116 = -5;
        iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
        iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
        iParam0->_fU132 = 1;
        iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
        iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
        iParam0->_fU148 = 1;
    }
    iParam0->_fU60 = (uParam2^)[iParam0->_fU44]._fU4;
    return;
}

void sub_33891(unknown uParam0)
{
    int I;

    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        (uParam0^)[I - 1] = {(uParam0^)[I]};
    }
    return;
}

void sub_35730(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if ((uParam0^))
    {
        if ((uParam2^) > 0)
        {
            (uParam2^)--;
            (uParam3^)--;
            (uParam1^)--;
        }
    }
    return;
}

void sub_35818(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if ((uParam0^))
    {
        if ((uParam4^) < ((uParam2^) - 1))
        {
            (uParam3^)++;
            (uParam4^)++;
            (uParam1^)++;
        }
    }
    return;
}

void sub_36555(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (sub_36566( uParam0 ))
    {
        StrCopy( (uParam1^), "INVITE_MSG_0", 16 );
    }
    else if (GET_NUMBER_OF_PLAYERS() == NETWORK_GET_MAX_SLOTS())
    {
        StrCopy( (uParam1^), "INVITE_MSG_1", 16 );
    }
    else if (bParam2)
    {
        PLAY_SOUND_FRONTEND( -1, "MOBILE_PHONE_INVITE_FRIEND" );
    }
    NETWORK_INVITE_FRIEND( uParam0, "" );
    StrCopy( (uParam1^), "CP_INVITE_MSG", 16 );;;
    return;
}

int sub_36566(unknown uParam0)
{
    int I;
    int iVar4;

    iVar4 = GET_HASH_KEY( uParam0 );
    for ( I = 0; I <= 31; I++ )
    {
        if ((I != GET_PLAYER_ID()) AND (IS_NETWORK_PLAYER_ACTIVE( I )))
        {
            if (iVar4 == (GET_HASH_KEY( GET_PLAYER_NAME( sub_8209( I ) ) )))
            {
                if (COMPARE_STRING( uParam0, GET_PLAYER_NAME( sub_8209( I ) ) ))
                {
                    return 1;
                }
                else
                {
                    sub_3036( "\n HASH KEYs were the same but strings dont match" );
                }
            }
            else
            {
                sub_6945( "\n HASH KEY for friend ", iVar4 );
                sub_6945( " does not match player hash ", GET_HASH_KEY( GET_PLAYER_NAME( sub_8209( I ) ) ) );
            }
        }
        else
        {
            sub_6716( "\n ", uParam0 );
            sub_3036( " is either this player or is not active" );
        }
    }
    return 0;
}
