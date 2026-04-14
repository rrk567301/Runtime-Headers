@class NSString, CNAuthorization, CNXPCConnection;
@protocol CNContactsLogger, CNKeyboardStateMonitor, CNContactPosterDataStore, CNXPCDataMapperService;

@interface CNXPCDataMapper : NSObject <CNDataMapper> {
    CNXPCConnection *_serviceConnection;
    id<CNXPCDataMapperService> _serviceProxy;
    id<CNContactsLogger> _logger;
    CNAuthorization *_authorization;
    id<CNKeyboardStateMonitor> _keyboardStateMonitor;
    id<CNContactPosterDataStore> _posterDataStore;
}

@property (readonly) BOOL shouldLogContactsAccess;
@property (readonly) BOOL userMightHaveUnconfiguredPersistenceStack;
@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
@property (readonly, nonatomic) BOOL shouldLogPrivacyAccountingAccessEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceProtocolInterface;

- (void)applyLimitedAccessSyncEvents:(id)a0;
- (id)getLimitedAccessLastSyncSequenceNumber:(id *)a0;
- (BOOL)executeChangeHistoryClearRequest:(id)a0 error:(id *)a1;
- (id)meContactIdentifiers:(id *)a0;
- (void)purgeLimitedAccessRecordsForBundle:(id)a0;
- (BOOL)setMeContact:(id)a0 error:(id *)a1;
- (BOOL)registerChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (id)currentHistoryToken;
- (void)addLimitedAccessForBundle:(id)a0 contactIdentifier:(id)a1;
- (BOOL)analyzeDatabaseWithError:(id *)a0;
- (BOOL)setMeContact:(id)a0 forContainer:(id)a1 error:(id *)a2;
- (void)updateLimitedAccessTable:(id)a0;
- (id)changeHistoryWithFetchRequest:(id)a0 error:(id *)a1;
- (id)contactWithUserActivityUserInfo:(id)a0 keysToFetch:(id)a1;
- (id)sectionListOffsetsForSortOrder:(long long)a0 error:(id *)a1;
- (id)containersMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)setBestMeIfNeededForGivenName:(id)a0 familyName:(id)a1 email:(id)a2 error:(id *)a3;
- (BOOL)shouldAnalyzeDatabaseWithError:(id *)a0;
- (void)removeLimitedAccessForBundle:(id)a0 contactIdentifier:(id)a1;
- (void)dropAllLimitedAccessRows;
- (id)identifierWithError:(id *)a0;
- (id)fetchLimitedAccessContactIdentifiersForBundle:(id)a0;
- (void)setLimitedAccessTableCurrentSequenceNumber:(id)a0;
- (id)getWatchLimitedAccessSyncDataStartingAtSequenceNumber:(id)a0;
- (id)initWithConfiguration:(id)a0 connection:(id)a1;
- (id)unifiedContactCountWithError:(id *)a0;
- (void)removeLimitedAccessForBundle:(id)a0 contactIdentifiers:(id)a1;
- (id)userActivityUserInfoForContact:(id)a0;
- (id)populateSyncTableForLimitedAccessAboveSequenceNumber:(id)a0;
- (id)currentHistoryAnchor;
- (void)dropAllLimitedAccessRowsAndSyncNotify;
- (void)addLimitedAccessForBundle:(id)a0 contactIdentifiers:(id)a1;
- (id)contactCountForFetchRequest:(id)a0 error:(id *)a1;
- (id)subgroupsOfGroupWithIdentifier:(id)a0 error:(id *)a1;
- (id)groupsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 authorizationContext:(id)a2 error:(id *)a3;
- (id)serverSearchContainersMatchingPredicate:(id)a0 error:(id *)a1;
- (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (id)defaultContainerIdentifier;
- (id)policyWithDescription:(id)a0 error:(id *)a1;
- (id)accountsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (BOOL)requestAccessForEntityType:(long long)a0 error:(id *)a1;
- (id)initWithConfiguration:(id)a0;
- (id)contactObservableForFetchRequest:(id)a0;
- (BOOL)writeFavoritesPropertyListData:(id)a0 toPath:(id)a1 error:(id *)a2;
- (id)policyForContainerWithIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (id)authorizedKeysForContactKeys:(id)a0 error:(id *)a1;
- (id)getBackgroundColorOnImageData:(id)a0 bitmapFormat:(id)a1 error:(id *)a2;
- (id)init;
- (id)executeFetchRequest:(id)a0 progressiveResults:(id /* block */)a1 completion:(id /* block */)a2;
- (id)favoritesEntryDictionariesAtPath:(id)a0 error:(id *)a1;

@end
