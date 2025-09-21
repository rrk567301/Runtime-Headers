@class CNContactStore, CNContact, IMNickname, CNContactPosterStore, CNUnfairLock, IMNicknameProvider, CNContactImageStore;

@interface CNSharedProfileStateOracle : NSObject {
    CNContact *_contact;
}

@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) char shouldContactBeRefetched;
@property (readonly, nonatomic) CNUnfairLock *contactLock;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) IMNickname *archivedNickname;
@property (retain, nonatomic) IMNickname *currentNickname;
@property (retain, nonatomic) IMNickname *pendingNickname;
@property (retain, nonatomic) CNContactImageStore *recentContactImageStore;
@property (retain, nonatomic) CNContactPosterStore *recentPosterStore;
@property (retain, nonatomic) IMNicknameProvider *nicknameProvider;

+ (id)descriptorForRequiredKeys;
+ (id)log;
+ (char)isTinker;
+ (char)contactIsInAutoUpdateState:(id)a0;
+ (id)descriptionForActionType:(unsigned long long)a0;
+ (id)descriptionForUpdateState:(unsigned long long)a0;
+ (unsigned long long)effectiveStateForContact:(id)a0;
+ (unsigned long long)globalSharedProfileUpdateState;
+ (char)isAutoUpdateState:(unsigned long long)a0;
+ (char)isFeatureEnabled;
+ (char)nicknameHasValidVisualIdentityData:(id)a0;
+ (char)nicknames:(id)a0 areValidForContact:(id)a1;
+ (id)refetchedContactIfNeededWithRequiredKeys:(id)a0 contactStore:(id)a1;
+ (char)shouldAutoUpdateUndeterminedWithPhoto;
+ (char)shouldAutoUpdateUndeterminedWithoutPhoto;
+ (char)shouldBypassPersistenceCheck;
+ (char)shouldSaveCurrentPoster:(id)a0 toRecentsForContact:(id)a1;

- (void).cxx_destruct;
- (id)availableActionTypesForEffectiveState;
- (unsigned long long)avatarViewAnimationTypeForEffectiveState;
- (unsigned long long)bannerActionTypeForEffectiveState;
- (char)canShowRevertToPreviousBannerForEffectiveState:(unsigned long long)a0;
- (char)contactRequiresUpdateForActionType:(unsigned long long)a0;
- (char)currentNicknameHasValidVisualIdentityData;
- (char)didPendingNicknameChangePhotoOrWallpaper;
- (char)didPhotoOrWallpaperChangeFrom:(id)a0 to:(id)a1;
- (unsigned long long)effectiveStateForContact;
- (char)effectiveStateForContactIsAutoUpdate;
- (char)hasPendingWallpaperTransition;
- (id)initWithContact:(id)a0 contactStore:(id)a1;
- (id)initWithContact:(id)a0 contactStore:(id)a1 archivedNickname:(id)a2 currentNickname:(id)a3 pendingNickname:(id)a4;
- (char)isRevertBannerExpired;
- (char)isRevertToPreviousExpired;
- (id)lastRecentContactImage;
- (id)lastRecentPoster;
- (void)markArchivedNicknameAsIgnored;
- (char)pendingNicknameHasValidVisualIdentityData;
- (double)revertBannerMaxDisplayInterval;
- (double)revertToPreviousMaxDisplayInterval;
- (void)saveContactImage:(id)a0;
- (void)saveContactImage:(id)a0 withPairedPoster:(id)a1;
- (void)saveContactPoster:(id)a0;
- (void)saveCurrentAvatarPosterPairToRecents;
- (char)saveUpdatedContact:(id)a0 error:(id *)a1;
- (char)shouldPerformTransitionAnimation;
- (id)targetProfileForActionType:(unsigned long long)a0;
- (id)updateContactAndNicknamesForActionType:(unsigned long long)a0 error:(id *)a1;
- (id)updateContactAndNicknamesForAutoUpdateWithError:(id *)a0;
- (id)updateContactAndNicknamesForDeclinedActionType:(unsigned long long)a0 error:(id *)a1;
- (id)updateContactForActionType:(unsigned long long)a0 error:(id *)a1;
- (id)updateContactForAutoUpdateWithError:(id *)a0;
- (id)updateContactForDeclinedActionType:(unsigned long long)a0 error:(id *)a1;
- (void)updateOracleContactAndNicknamesWithUpdatedContact:(id)a0;

@end
