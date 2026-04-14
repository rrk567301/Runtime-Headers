@class NSSet, IMNickname, NSDictionary, NSMutableSet, NSMutableArray, NSMutableDictionary;

@interface IMNicknameController : NSObject

@property (retain, nonatomic) IMNickname *personalNickname;
@property (retain, nonatomic) NSMutableArray *fetchPersonalNicknameCompletionBlocks;
@property (retain, nonatomic) NSDictionary *handledNicknames;
@property (retain, nonatomic) NSDictionary *pendingNicknameUpdates;
@property (retain, nonatomic) NSSet *allowListedHandlesForSharing;
@property (retain, nonatomic) NSSet *denyListedHandlesForSharing;
@property (retain, nonatomic) NSMutableSet *scrutinyNicknameHandles;
@property (nonatomic) BOOL isInitialLoad;
@property (retain, nonatomic) NSMutableDictionary *responseHandlers;

+ (id)sharedInstance;
+ (BOOL)accountsMatchUpToUseNicknames;
+ (BOOL)multiplePhoneNumbersTiedToAppleID;

- (id)init;
- (void).cxx_destruct;
- (id)contactStore;
- (id)daemonController;
- (void)updatePersonalNickname:(id)a0;
- (id)personNameComponentsForHandle:(id)a0;
- (void)_broadcastNicknamePreferencesDidChange:(id)a0;
- (BOOL)_nicknameFeatureEnabled;
- (BOOL)_canUpdatePersonalNickname;
- (id)nicknameForHandle:(id)a0;
- (unsigned long long)nicknameUpdateForHandle:(id)a0 nicknameIfAvailable:(id *)a1;
- (id)IMSharedHelperMD5Helper:(id)a0;
- (void)clearPendingNicknameUpdatesForHandle:(id)a0;
- (void)ignorePendingNicknameUpdatesForHandle:(id)a0;
- (BOOL)handleIsAllowedForSharing:(id)a0;
- (BOOL)handleIsDeniedForSharing:(id)a0;
- (void)allowHandlesForNicknameSharing:(id)a0 forChat:(id)a1;
- (void)denyHandlesForNicknameSharing:(id)a0;
- (void)fetchPersonalNicknameWithCompletion:(id /* block */)a0;
- (BOOL)shouldOfferNicknameSharingForChat:(id)a0;
- (id)getNicknameHandlesUnderScrutiny;
- (void)setNicknameHandlesUnderScrutiny;
- (id)handlesForNicknamesUnderScrutiny;
- (void)markHandleUnderScrutiny:(id)a0;
- (void)clearHandleFromScrutiny:(id)a0;
- (id)imageDataForHandle:(id)a0;
- (void)_updateLocalNicknameStore;
- (void)updatePendingNicknames:(id)a0 handledNicknames:(id)a1;
- (void)updateSharingAllowList:(id)a0 denyList:(id)a1;
- (void)nicknameStoreDidChange;
- (void)handleSharingListsDidChange;
- (id)_handleIDsForHandle:(id)a0;
- (void)setPersonalNicknameFromOnboardingResult:(id)a0;
- (void)updatePersonalNicknameIfNecessaryWithMeCardSharingResult:(id)a0;
- (id)truncateNameIfNeeded:(id)a0;
- (id)meCardSharingState;
- (BOOL)meCardSyncEnabled;
- (void)markAllAsPending;

@end
