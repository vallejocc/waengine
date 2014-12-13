#include "../inc/pub/watypes.h"਍⌀椀渀挀氀甀搀攀 ∀⸀⸀⼀椀渀挀⼀瀀甀戀⼀眀愀攀爀爀漀爀⸀栀∀ഀ
#include "../inc/pub/waengine.h"਍⌀椀渀挀氀甀搀攀 ∀⸀⸀⼀椀渀挀⼀瀀爀椀瘀⼀眀愀攀渀最椀渀攀瀀爀椀瘀⸀栀∀ഀ
#include "../inc/priv/global.h"਍ഀ
/*਍䄀氀最漀爀椀琀栀洀猀㨀ഀ
਍⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀ഀ
Minimax:਍ഀ
function minimax(node, depth)਍    椀昀 渀漀搀攀 椀猀 愀 琀攀爀洀椀渀愀氀 渀漀搀攀 漀爀 搀攀瀀琀栀 㴀 　ഀ
        return the heuristic value of node਍    椀昀 琀栀攀 愀搀瘀攀爀猀愀爀礀 椀猀 琀漀 瀀氀愀礀 愀琀 渀漀搀攀ഀ
        let α := +∞਍        昀漀爀攀愀挀栀 挀栀椀氀搀 漀昀 渀漀搀攀ഀ
            α := min(α, minimax(child, depth-1))਍    攀氀猀攀 笀眀攀 愀爀攀 琀漀 瀀氀愀礀 愀琀 渀漀搀攀紀ഀ
        let α := -∞਍        昀漀爀攀愀挀栀 挀栀椀氀搀 漀昀 渀漀搀攀ഀ
            α := max(α, minimax(child, depth-1))਍    爀攀琀甀爀渀 넀ഃ
਍⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀ഀ
Minimax with alphabeta:਍ഀ
function alphabeta(node, depth, α, β)਍    椀昀 渀漀搀攀 椀猀 愀 琀攀爀洀椀渀愀氀 渀漀搀攀 漀爀 搀攀瀀琀栀 㴀 　ഀ
        return the heuristic value of node਍    椀昀 琀栀攀 愀搀瘀攀爀猀愀爀礀 椀猀 琀漀 瀀氀愀礀 愀琀 渀漀搀攀ഀ
        foreach child of node਍            눀 㨀㴀 洀椀渀⠀눀Ⰳ 愀氀瀀栀愀戀攀琀愀⠀挀栀椀氀搀Ⰰ 搀攀瀀琀栀ⴀ㄀Ⰰ 넀Ⰳ 눀⤃⤀ഀ
            if α≥β਍                爀攀琀甀爀渀 넀ഃ
        return β਍    攀氀猀攀 笀眀攀 愀爀攀 琀漀 瀀氀愀礀 愀琀 渀漀搀攀紀ഀ
        foreach child of node਍            넀 㨀㴀 洀愀砀⠀넀Ⰳ 愀氀瀀栀愀戀攀琀愀⠀挀栀椀氀搀Ⰰ 搀攀瀀琀栀ⴀ㄀Ⰰ 넀Ⰳ 눀⤃⤀ഀ
            if α≥β਍                爀攀琀甀爀渀 눀ഃ
        return α਍ഀ
function minimax(node, depth)਍    爀攀琀甀爀渀 愀氀瀀栀愀戀攀琀愀⠀渀漀搀攀Ⰰ 搀攀瀀琀栀Ⰰ ⴀḀⰢ ⬀Ḁ⤢ഀ
਍⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀⨀ഀ
*/਍ഀ
#define PLY_SELF 0਍⌀搀攀昀椀渀攀 倀䰀夀开伀倀倀伀 ㄀ഀ
਍圀䄀䔀刀刀伀刀 刀攀挀甀爀猀椀瘀攀䄀氀瀀栀愀䈀攀琀愀⠀倀圀伀刀䰀䐀开䄀一䄀䰀夀匀䤀匀开䨀伀䈀 瀀圀愀䨀漀戀Ⰰ ഀ
                           PWORLD_STATUS pStatus,਍                           唀䰀㌀㈀ 䐀攀瀀琀栀Ⰰ ഀ
                           UL32 Ply, ਍                           唀䰀㌀㈀ 䄀氀瀀栀愀Ⰰ ഀ
                           UL32 Beta)਍笀ഀ
  UL32 TempUL32;਍ഀ
  if(PLY_SELF==Ply)਍    瀀匀琀愀琀甀猀ⴀ㸀䔀瘀愀氀甀愀琀椀漀渀㴀圀䄀䤀一䘀䤀一䤀吀䔀㬀ഀ
  else਍    瀀匀琀愀琀甀猀ⴀ㸀䔀瘀愀氀甀愀琀椀漀渀㴀圀䄀一䔀䜀䤀一䘀䤀一䤀吀䔀㬀ഀ
਍  瀀匀琀愀琀甀猀ⴀ㸀渀䔀瘀漀氀甀琀椀漀渀猀 㴀 ഀ
    pWaJob->pWaEngine->SnapshotsManager->Functions.GenerateSnapshotEvolutions਍     ⠀瀀圀愀䨀漀戀ⴀ㸀瀀圀愀䔀渀最椀渀攀ⴀ㸀匀渀愀瀀猀栀漀琀猀䴀愀渀愀最攀爀Ⰰഀ
      pStatus->SnapShot,਍      ☀瀀匀琀愀琀甀猀ⴀ㸀匀渀愀瀀猀栀漀琀䔀瘀漀氀甀琀椀漀渀猀Ⰰഀ
      pWaJob->pWaEngine->SnapshotsManager->ClientParam,਍      圀䄀一唀䰀䰀⤀㬀ഀ
  ਍  椀昀⠀℀瀀匀琀愀琀甀猀ⴀ㸀渀䔀瘀漀氀甀琀椀漀渀猀⤀ഀ
  {਍    瀀匀琀愀琀甀猀ⴀ㸀䔀瘀愀氀甀愀琀椀漀渀㴀ഀ
      pWaJob->pWaEngine->SnapshotsManager->Functions.EvaluateSnapshot਍        ⠀瀀圀愀䨀漀戀ⴀ㸀瀀圀愀䔀渀最椀渀攀ⴀ㸀匀渀愀瀀猀栀漀琀猀䴀愀渀愀最攀爀Ⰰഀ
         pStatus->SnapShot,਍         瀀圀愀䨀漀戀ⴀ㸀瀀圀愀䔀渀最椀渀攀ⴀ㸀匀渀愀瀀猀栀漀琀猀䴀愀渀愀最攀爀ⴀ㸀䌀氀椀攀渀琀倀愀爀愀洀Ⰰഀ
         WANULL);਍    瀀匀琀愀琀甀猀ⴀ㸀䈀攀猀琀䤀渀䈀爀愀渀挀栀㴀ഀ
      pStatus->Evaluation;਍    爀攀琀甀爀渀 圀䄀开匀唀䌀䌀䔀匀匀㬀ഀ
  }਍  攀氀猀攀ഀ
  {਍    瀀匀琀愀琀甀猀ⴀ㸀圀漀爀氀搀匀琀愀琀甀猀䔀瘀漀氀甀琀椀漀渀猀 㴀 ഀ
      (PWORLD_STATUS)pWaJob->pWaEngine->MemoryManager->alloc਍        ⠀猀椀稀攀漀昀⠀圀伀刀䰀䐀开匀吀䄀吀唀匀⤀⨀瀀匀琀愀琀甀猀ⴀ㸀渀䔀瘀漀氀甀琀椀漀渀猀⤀㬀ഀ
਍    椀昀⠀瀀匀琀愀琀甀猀ⴀ㸀圀漀爀氀搀匀琀愀琀甀猀䔀瘀漀氀甀琀椀漀渀猀⤀ഀ
    {਍      唀䰀㌀㈀ 椀㬀ഀ
਍      昀漀爀⠀椀㴀　㬀椀㰀瀀匀琀愀琀甀猀ⴀ㸀渀䔀瘀漀氀甀琀椀漀渀猀㬀椀⬀⬀⤀ഀ
      {਍        瀀匀琀愀琀甀猀ⴀ㸀圀漀爀氀搀匀琀愀琀甀猀䔀瘀漀氀甀琀椀漀渀猀嬀椀崀⸀䈀攀猀琀䤀渀䈀爀愀渀挀栀㴀　㬀ഀ
        pStatus->WorldStatusEvolutions[i].nEvolutions=0;਍        瀀匀琀愀琀甀猀ⴀ㸀圀漀爀氀搀匀琀愀琀甀猀䔀瘀漀氀甀琀椀漀渀猀嬀椀崀⸀倀愀爀攀渀琀㴀瀀匀琀愀琀甀猀㬀ഀ
        pStatus->WorldStatusEvolutions[i].SnapShot=਍          瀀匀琀愀琀甀猀ⴀ㸀匀渀愀瀀猀栀漀琀䔀瘀漀氀甀琀椀漀渀猀ⴀ㸀匀渀愀瀀猀栀漀琀猀嬀椀崀㬀ഀ
        pStatus->WorldStatusEvolutions[i].SnapshotEvolutions=WANULL;਍        瀀匀琀愀琀甀猀ⴀ㸀圀漀爀氀搀匀琀愀琀甀猀䔀瘀漀氀甀琀椀漀渀猀嬀椀崀⸀圀漀爀氀搀匀琀愀琀甀猀䔀瘀漀氀甀琀椀漀渀猀㴀圀䄀一唀䰀䰀㬀ഀ
  ਍        椀昀⠀倀䰀夀开匀䔀䰀䘀㴀㴀倀氀礀⤀ഀ
          pStatus->WorldStatusEvolutions[i].Evaluation=WANEGINFINITE;਍        攀氀猀攀ഀ
          pStatus->WorldStatusEvolutions[i].Evaluation=WAINFINITE;਍      紀ഀ
਍      昀漀爀⠀椀㴀　㬀椀㰀瀀匀琀愀琀甀猀ⴀ㸀渀䔀瘀漀氀甀琀椀漀渀猀㬀椀⬀⬀⤀ഀ
      {਍        刀攀挀甀爀猀椀瘀攀䄀氀瀀栀愀䈀攀琀愀⠀瀀圀愀䨀漀戀Ⰰ☀瀀匀琀愀琀甀猀ⴀ㸀圀漀爀氀搀匀琀愀琀甀猀䔀瘀漀氀甀琀椀漀渀猀嬀椀崀Ⰰ䐀攀瀀琀栀⬀㄀Ⰰ倀氀礀帀㄀Ⰰ䄀氀瀀栀愀Ⰰ䈀攀琀愀⤀㬀ഀ
        TempUL32=pStatus->WorldStatusEvolutions[i].Evaluation;਍ഀ
        if(PLY_OPPO==Ply)਍        笀ഀ
          if(pStatus->Evaluation>TempUL32 || !i)਍            瀀匀琀愀琀甀猀ⴀ㸀䔀瘀愀氀甀愀琀椀漀渀㴀吀攀洀瀀唀䰀㌀㈀㬀ഀ
਍          椀昀⠀吀攀洀瀀唀䰀㌀㈀㰀䈀攀琀愀⤀ഀ
            Beta=TempUL32;਍          椀昀⠀䄀氀瀀栀愀㸀㴀䈀攀琀愀⤀ഀ
          {਍            瀀匀琀愀琀甀猀ⴀ㸀䔀瘀愀氀甀愀琀椀漀渀㴀䄀氀瀀栀愀㬀ഀ
            pStatus->BestInBranch=pStatus->Evaluation;਍            爀攀琀甀爀渀 圀䄀开匀唀䌀䌀䔀匀匀㬀ഀ
          }਍        紀ഀ
        else //PLY_SELF==Ply਍        笀ഀ
          if(pStatus->Evaluation<TempUL32 || !i)਍            瀀匀琀愀琀甀猀ⴀ㸀䔀瘀愀氀甀愀琀椀漀渀㴀吀攀洀瀀唀䰀㌀㈀㬀ഀ
਍          椀昀⠀吀攀洀瀀唀䰀㌀㈀㸀䄀氀瀀栀愀⤀ഀ
            Alpha=TempUL32;਍          椀昀⠀䄀氀瀀栀愀㸀㴀䈀攀琀愀⤀ഀ
          { ਍            瀀匀琀愀琀甀猀ⴀ㸀䔀瘀愀氀甀愀琀椀漀渀㴀䈀攀琀愀㬀ഀ
            pStatus->BestInBranch=pStatus->Evaluation;਍            爀攀琀甀爀渀 圀䄀开匀唀䌀䌀䔀匀匀㬀ഀ
          }਍        紀ഀ
      }਍      ഀ
      if(PLY_OPPO==Ply)਍      笀ഀ
        pStatus->Evaluation=Beta;਍        瀀匀琀愀琀甀猀ⴀ㸀䈀攀猀琀䤀渀䈀爀愀渀挀栀㴀瀀匀琀愀琀甀猀ⴀ㸀䔀瘀愀氀甀愀琀椀漀渀㬀ഀ
        return WA_SUCCESS;਍      紀ഀ
      else //PLY_SELF==Ply਍      笀ഀ
        pStatus->Evaluation=Alpha;਍        瀀匀琀愀琀甀猀ⴀ㸀䈀攀猀琀䤀渀䈀爀愀渀挀栀㴀瀀匀琀愀琀甀猀ⴀ㸀䔀瘀愀氀甀愀琀椀漀渀㬀ഀ
        return WA_SUCCESS;਍      紀ഀ
    }਍    攀氀猀攀ഀ
    {਍      ⼀⼀䔀爀爀漀爀 愀氀氀漀挀愀琀椀渀最 洀攀洀漀爀礀ഀ
      //Althought we will return WA_ERROR_MEMORY we will evaluate the node as if it was a final node਍ഀ
      pWaJob->pWaEngine->SnapshotsManager->Functions.ReturnClientObject਍        ⠀瀀圀愀䨀漀戀ⴀ㸀瀀圀愀䔀渀最椀渀攀ⴀ㸀匀渀愀瀀猀栀漀琀猀䴀愀渀愀最攀爀Ⰰഀ
         pStatus->SnapshotEvolutions,਍         瀀圀愀䨀漀戀ⴀ㸀瀀圀愀䔀渀最椀渀攀ⴀ㸀匀渀愀瀀猀栀漀琀猀䴀愀渀愀最攀爀ⴀ㸀䌀氀椀攀渀琀倀愀爀愀洀Ⰰഀ
         WANULL);਍ഀ
      pStatus->nEvolutions = 0;਍ഀ
      pStatus->Evaluation=਍        瀀圀愀䨀漀戀ⴀ㸀瀀圀愀䔀渀最椀渀攀ⴀ㸀匀渀愀瀀猀栀漀琀猀䴀愀渀愀最攀爀ⴀ㸀䘀甀渀挀琀椀漀渀猀⸀䔀瘀愀氀甀愀琀攀匀渀愀瀀猀栀漀琀ഀ
          (pWaJob->pWaEngine->SnapshotsManager,਍           瀀匀琀愀琀甀猀ⴀ㸀匀渀愀瀀匀栀漀琀Ⰰഀ
           pWaJob->pWaEngine->SnapshotsManager->ClientParam,਍           圀䄀一唀䰀䰀⤀㬀ഀ
      pStatus->BestInBranch=pStatus->Evaluation;਍      爀攀琀甀爀渀 圀䄀开䔀刀刀伀刀开䴀䔀䴀伀刀夀㬀ഀ
    }਍  紀ഀ
}਍ഀ
਍圀䄀䔀刀刀伀刀 刀甀渀圀愀䄀氀瀀栀愀䈀攀琀愀䄀渀愀氀礀猀椀猀䨀漀戀⠀䤀一 圀伀刀䰀䐀开䄀一䄀䰀夀匀䤀匀开䨀伀䈀开䠀䄀一䐀䰀䔀 栀䨀漀戀⤀ഀ
{਍  唀䰀㌀㈀ 椀㬀ഀ
  PWORLD_STATUS pBestStatus;਍  圀伀刀䰀䐀开匀吀䄀吀唀匀 䈀攀猀琀匀琀愀琀甀猀䌀漀瀀礀㬀ഀ
  PWORLD_STATUS pTempStatus = ((PWORLD_ANALYSIS_JOB)hJob)->Start;਍  唀䰀㌀㈀ 倀氀礀㴀倀䰀夀开匀䔀䰀䘀㬀ഀ
਍  刀攀挀甀爀猀椀瘀攀䄀氀瀀栀愀䈀攀琀愀⠀⠀倀圀伀刀䰀䐀开䄀一䄀䰀夀匀䤀匀开䨀伀䈀⤀栀䨀漀戀Ⰰ ഀ
                     ((PWORLD_ANALYSIS_JOB)hJob)->Start,਍                     ㄀Ⰰ ഀ
                     PLY_SELF, ਍                     圀䄀一䔀䜀䤀一䘀䤀一䤀吀䔀Ⰰ ഀ
                     WAINFINITE);਍ഀ
  //Before leaving the function we will sort the tree: the chosen path must be always in the position 0 of the tree਍  ഀ
  while(pTempStatus->nEvolutions)਍  笀 ഀ
    pBestStatus = &pTempStatus->WorldStatusEvolutions[0];਍    ഀ
    for(i=0;i<pTempStatus->nEvolutions;i++)਍      椀昀⠀⠀倀氀礀㴀㴀倀䰀夀开匀䔀䰀䘀 ☀☀ 瀀吀攀洀瀀匀琀愀琀甀猀ⴀ㸀圀漀爀氀搀匀琀愀琀甀猀䔀瘀漀氀甀琀椀漀渀猀嬀椀崀⸀䔀瘀愀氀甀愀琀椀漀渀 㸀 瀀䈀攀猀琀匀琀愀琀甀猀ⴀ㸀䔀瘀愀氀甀愀琀椀漀渀⤀簀簀ഀ
         (Ply==PLY_OPPO && pTempStatus->WorldStatusEvolutions[i].Evaluation < pBestStatus->Evaluation))਍        瀀䈀攀猀琀匀琀愀琀甀猀 㴀 ☀瀀吀攀洀瀀匀琀愀琀甀猀ⴀ㸀圀漀爀氀搀匀琀愀琀甀猀䔀瘀漀氀甀琀椀漀渀猀嬀椀崀㬀ഀ
    ਍    昀漀爀⠀椀㴀　㬀椀㰀猀椀稀攀漀昀⠀圀伀刀䰀䐀开匀吀䄀吀唀匀⤀㬀椀⬀⬀⤀ഀ
      ((UC8*)(&BestStatusCopy))[i]=((UC8*)pBestStatus)[i];਍ഀ
    for(i=0;i<sizeof(WORLD_STATUS);i++)਍      ⠀⠀唀䌀㠀⨀⤀瀀䈀攀猀琀匀琀愀琀甀猀⤀嬀椀崀㴀⠀⠀唀䌀㠀⨀⤀☀⠀瀀吀攀洀瀀匀琀愀琀甀猀ⴀ㸀圀漀爀氀搀匀琀愀琀甀猀䔀瘀漀氀甀琀椀漀渀猀嬀　崀⤀⤀嬀椀崀㬀ഀ
਍    昀漀爀⠀椀㴀　㬀椀㰀猀椀稀攀漀昀⠀圀伀刀䰀䐀开匀吀䄀吀唀匀⤀㬀椀⬀⬀⤀ഀ
      ((UC8*)&(pTempStatus->WorldStatusEvolutions[0]))[i]=((UC8*)(&BestStatusCopy))[i];਍ഀ
    pTempStatus=&pTempStatus->WorldStatusEvolutions[0];਍ഀ
    Ply=Ply^1;਍  紀ഀ
਍  爀攀琀甀爀渀 圀䄀开匀唀䌀䌀䔀匀匀㬀ഀ
}਍ഀ
NOTHING FreeWaAlphaBetaBranch(PWORLD_ANALYSIS_JOB pWaJob,PWORLD_STATUS pWaStatus)਍笀ഀ
  UL32 i;਍  ഀ
  if(pWaStatus->nEvolutions)਍  笀ഀ
    for(i=0;i<pWaStatus->nEvolutions;i++)਍    笀ഀ
      FreeWaAlphaBetaBranch(pWaJob,&pWaStatus->WorldStatusEvolutions[i]);਍    紀ഀ
਍    瀀圀愀䨀漀戀ⴀ㸀瀀圀愀䔀渀最椀渀攀ⴀ㸀匀渀愀瀀猀栀漀琀猀䴀愀渀愀最攀爀ⴀ㸀䘀甀渀挀琀椀漀渀猀⸀刀攀琀甀爀渀䌀氀椀攀渀琀伀戀樀攀挀琀ഀ
      (pWaJob->pWaEngine,਍      瀀圀愀匀琀愀琀甀猀ⴀ㸀匀渀愀瀀猀栀漀琀䔀瘀漀氀甀琀椀漀渀猀Ⰰഀ
      pWaJob->pWaEngine->SnapshotsManager->ClientParam,਍      圀䄀一唀䰀䰀⤀㬀ഀ
਍    瀀圀愀䨀漀戀ⴀ㸀瀀圀愀䔀渀最椀渀攀ⴀ㸀䴀攀洀漀爀礀䴀愀渀愀最攀爀ⴀ㸀昀爀攀攀⠀⠀䴀䔀䴀䈀䰀伀䌀䬀⨀⤀瀀圀愀匀琀愀琀甀猀ⴀ㸀圀漀爀氀搀匀琀愀琀甀猀䔀瘀漀氀甀琀椀漀渀猀⤀㬀ഀ
  }਍紀�