#include <natives.h>
#include <common.h>
#include <strings.h>
#include <types.h>
#include <consts.h>

void GetPlayerReference()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}