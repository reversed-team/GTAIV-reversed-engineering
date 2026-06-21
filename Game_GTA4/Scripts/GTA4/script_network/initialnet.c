void main()
{
    int I;
    int iVar3;
    char[12] cVar4;
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
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;

    iVar3 = 0;
    array(ref cVar4, 2);
    g_U10 = 0;
    StrCopy( ref cVar4[0], "MPcellphone", 32 );
    StrCopy( ref cVar4[1], "speechControl_net", 32 );
    while (iVar3 < cVar4)
    {
        WAIT( 0 );
        iVar3 = 0;
        for ( I = 0; I <= (Length(cVar4) - 1); I++ )
        {
            REQUEST_SCRIPT( ref cVar4[I] );
            if (HAS_SCRIPT_LOADED( ref cVar4[I] ))
            {
                iVar3++;
            }
        }
    }
    for ( I = 0; I <= (Length(cVar4) - 1); I++ )
    {
        START_NEW_SCRIPT( ref cVar4[I], 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref cVar4[I] );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}
