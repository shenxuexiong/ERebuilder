  ; ===========================================
  ; msrating.inc copyright MASM32 1998 - 2005
  ; ===========================================

IFNDEF MSRATING_INC
MSRATING_INC equ <1>

ChangeSupervisorPassword PROTO :DWORD,:DWORD
ClickedOnPRF PROTO :DWORD,:DWORD,:DWORD,:DWORD
ClickedOnRAT PROTO :DWORD,:DWORD,:DWORD,:DWORD
RatingAccessDeniedDialog2 PROTO :DWORD,:DWORD,:DWORD
RatingAccessDeniedDialog PROTO :DWORD,:DWORD,:DWORD,:DWORD
RatingAddPropertyPages PROTO :DWORD,:DWORD,:DWORD
RatingCheckUserAccess PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RatingCustomAddRatingHelper PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RatingCustomAddRatingSystem PROTO :DWORD,:DWORD
RatingCustomCrackData PROTO :DWORD,:DWORD,:DWORD
RatingCustomDeleteCrackedData PROTO :DWORD
RatingCustomInit PROTO :DWORD
RatingCustomRemoveRatingHelper PROTO :DWORD,:DWORD,:DWORD,:DWORD
RatingCustomSetDefaultBureau PROTO :DWORD
RatingCustomSetUserOptions PROTO :DWORD,:DWORD
RatingEnable PROTO :DWORD,:DWORD,:DWORD
RatingEnabledQuery PROTO 
RatingFreeDetails PROTO :DWORD
RatingInit PROTO 
RatingObtainCancel PROTO :DWORD
RatingObtainQuery PROTO :DWORD,:DWORD,:DWORD,:DWORD
RatingSetupUI PROTO :DWORD,:DWORD
VerifySupervisorPassword PROTO :DWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file msrating.inc
echo -----------------------------------------
ENDIF
