@class CNContactStore, CNContact, IMNickname, CNContactPosterStore, CNUnfairLock, IMNicknameProvider, CNContactImageStore;

@interface CNSharedProfileStateOracle : NSObject {
    CNContact *_contact;
}

@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) BOOL shouldContactBeRefetched;
@property (readonly, nonatomic) CNUnfairLock *contactLock;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) IMNickname *archivedNickname;
@property (retain, nonatomic) IMNickname *currentNickname;
@property (retain, nonatomic) IMNickname *pendingNickname;
@property (retain, nonatomic) CNContactImageStore *recentContactImageStore;
@property (retain, nonatomic) CNContactPosterStore *recentPosterStore;
@property (retain, nonatomic) IMNicknameProvider *nicknameProvider;

+ (id)log;
+ (id)descriptorForRequiredKeys;
+ (BOOL)isTinker;
+ (BOOL)contactIsInAutoUpdateState:(id)a0;
+ (id)descriptionForActionType:(unsigned long long)a0;
+ (id)descriptionForUpdateState:(unsigned long long)a0;
+ (unsigned long long)effectiveStateForContact:(id)a0;
+ (BOOL)isAutoUpdateState:(unsigned long long)a0;
+ (BOOL)isFeatureEnabled;
+ (BOOL)nicknameHasValidVisualIdentityData:(id)a0;
+ (BOOL)nicknames:(id)a0 areValidForContact:(id)a1;
+ (id)refetchedContactIfNeededWithRequiredKeys:(id)a0 contactStore:(id)a1;
+ (BOOL)shouldAutoUpdateUndeterminedWithPhoto;
+ (BOOL)shouldAutoUpdateUndeterminedWithoutPhoto;
+ (BOOL)shouldBypassPersistenceCheck;
+ (BOOL)shouldSaveCurrentPoster:(id)a0 toRecentsForContact:(id)a1;

- (void).cxx_destruct;
- (id)availableActionTypesForEffectiveState;
- (unsigned long long)avatarViewAnimationTypeForEffectiveState;
- (unsigned long long)bannerActionTypeForEffectiveState;
- (BOOL)canShowRevertToPreviousBannerForEffectiveState:(unsigned long long)a0;
- (BOOL)canShowRevertToPreviousBannerForRecentsItem:(id)a0;
- (BOOL)contactRequiresUpdateForActionType:(unsigned long long)a0;
- (BOOL)currentNicknameHasValidVisualIdentityData;
- (BOOL)didPendingNicknameChangePhotoOrWallpaper;
- (BOOL)didPhotoOrWallpaperChangeFrom:(id)a0 to:(id)a1;
- (unsigned long long)effectiveStateForContact;
- (BOOL)effectiveStateForContactIsAutoUpdate;
- (id)firstCustomIn:(id)a0;
- (id)firstSharedIn:(id)a0;
- (BOOL)hasPendingWallpaperTransition;
- (id)initWithContact:(id)a0 contactStore:(id)a1;
- (id)initWithContact:(id)a0 contactStore:(id)a1 archivedNickname:(id)a2 currentNickname:(id)a3 pendingNickname:(id)a4;
- (BOOL)isRevertBannerExpiredForDate:(id)a0;
- (BOOL)isRevertToPreviousExpired;
- (id)lastRecentContactImage;
- (id)lastRecentPoster;
- (id)lastRevertableRecentCustomContactImage;
- (id)lastRevertableRecentCustomPoster;
- (id)lastRevertableRecentSharedContactImage;
- (id)lastRevertableRecentSharedPoster;
- (void)markArchivedNicknameAsIgnored;
- (BOOL)pendingNicknameHasValidVisualIdentityData;
- (id)recentImages;
- (id)recentPosters;
- (id)recentsImageMarkedCurrent;
- (id)recentsPosterMarkedCurrent;
- (double)revertBannerMaxDisplayInterval;
- (double)revertToPreviousMaxDisplayInterval;
- (void)saveContactImage:(id)a0;
- (void)saveContactPoster:(id)a0;
- (void)saveCurrentAvatarPosterPairToRecents;
- (BOOL)saveUpdatedContact:(id)a0 error:(id *)a1;
- (BOOL)shouldPerformTransitionAnimation;
- (id)targetProfileForActionType:(unsigned long long)a0;
- (id)updateContactAndNicknamesForActionType:(unsigned long long)a0 error:(id *)a1;
- (id)updateContactAndNicknamesForAutoUpdateWithError:(id *)a0;
- (id)updateContactAndNicknamesForDeclinedActionType:(unsigned long long)a0 error:(id *)a1;
- (id)updateContactForActionType:(unsigned long long)a0 error:(id *)a1;
- (id)updateContactForAutoUpdateWithError:(id *)a0;
- (id)updateContactForDeclinedActionType:(unsigned long long)a0 error:(id *)a1;
- (void)updateOracleContactAndNicknamesWithUpdatedContact:(id)a0;

@end
