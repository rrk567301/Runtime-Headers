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
+ (BOOL)isTinker;
+ (id)descriptorForRequiredKeys;
+ (BOOL)contactIsInAutoUpdateState:(id)a0;
+ (unsigned long long)effectiveStateForContact:(id)a0;
+ (unsigned long long)globalSharedProfileUpdateState;
+ (BOOL)isAutoUpdateState:(unsigned long long)a0;
+ (BOOL)isFeatureEnabled;
+ (BOOL)nicknames:(id)a0 areValidForContact:(id)a1;
+ (id)refetchedContactIfNeededWithRequiredKeys:(id)a0 contactStore:(id)a1;
+ (BOOL)shouldAutoUpdateUndeterminedWithPhoto;
+ (BOOL)shouldAutoUpdateUndeterminedWithoutPhoto;
+ (BOOL)shouldBypassPersistenceCheck;

- (void).cxx_destruct;
- (id)availableActionTypesForEffectiveState;
- (unsigned long long)avatarViewAnimationTypeForEffectiveState;
- (unsigned long long)bannerActionTypeForEffectiveState;
- (BOOL)canShowRevertToPreviousBannerForEffectiveState:(unsigned long long)a0;
- (BOOL)contactRequiresUpdateForActionType:(unsigned long long)a0;
- (BOOL)didChangePhotoOrWallpaper;
- (unsigned long long)effectiveStateForContact;
- (BOOL)effectiveStateForContactIsAutoUpdate;
- (BOOL)hasPendingWallpaperTransition;
- (id)initWithContact:(id)a0 contactStore:(id)a1;
- (id)initWithContact:(id)a0 contactStore:(id)a1 archivedNickname:(id)a2 currentNickname:(id)a3 pendingNickname:(id)a4;
- (BOOL)isRevertBannerExpired;
- (BOOL)isRevertToPreviousExpired;
- (id)lastRecentContactImage;
- (id)lastRecentPoster;
- (void)markArchivedNicknameAsIgnored;
- (double)revertBannerMaxDisplayInterval;
- (double)revertToPreviousMaxDisplayInterval;
- (void)saveContactImage:(id)a0;
- (void)saveContactImage:(id)a0 withPairedPoster:(id)a1;
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
