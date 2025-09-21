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
@property (readonly, nonatomic) BOOL shouldCaptureMetricsForQueries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceProtocolInterface;

- (void)addLimitedAccessForBundle:(id)a0 contactIdentifier:(id)a1;
- (id)executeFetchRequest:(id)a0 progressiveResults:(id /* block */)a1 completion:(id /* block */)a2;
- (id)serverSearchContainersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)sectionListOffsetsForSortOrder:(long long)a0 error:(id *)a1;
- (id)identifierWithError:(id *)a0;
- (id)fetchLimitedAccessContactIdentifiersForBundle:(id)a0;
- (id)currentHistoryAnchor;
- (BOOL)shouldAnalyzeDatabaseWithError:(id *)a0;
- (BOOL)setMeContact:(id)a0 forContainer:(id)a1 error:(id *)a2;
- (id)contactWithUserActivityUserInfo:(id)a0 keysToFetch:(id)a1;
- (void)dropAllLimitedAccessRowsAndSyncNotify;
- (id)populateSyncTableForLimitedAccessAboveSequenceNumber:(id)a0;
- (void)updateLimitedAccessTable:(id)a0;
- (id)currentHistoryToken;
- (id)containersMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)setMeContact:(id)a0 error:(id *)a1;
- (id)userActivityUserInfoForContact:(id)a0;
- (void)purgeLimitedAccessRecordsForBundle:(id)a0;
- (void)dropAllLimitedAccessRows;
- (id)unifiedContactCountWithError:(id *)a0;
- (BOOL)analyzeDatabaseWithError:(id *)a0;
- (BOOL)registerChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (void)setLimitedAccessTableCurrentSequenceNumber:(id)a0;
- (void)removeLimitedAccessForBundle:(id)a0 contactIdentifier:(id)a1;
- (void)addLimitedAccessForBundle:(id)a0 contactIdentifiers:(id)a1;
- (void)applyLimitedAccessSyncEvents:(id)a0;
- (BOOL)executeChangeHistoryClearRequest:(id)a0 error:(id *)a1;
- (id)getBackgroundColorOnImageData:(id)a0 bitmapFormat:(id)a1 error:(id *)a2;
- (id)getWatchLimitedAccessSyncDataStartingAtSequenceNumber:(id)a0;
- (id)policyWithDescription:(id)a0 error:(id *)a1;
- (id)defaultContainerIdentifier;
- (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (id)subgroupsOfGroupWithIdentifier:(id)a0 error:(id *)a1;
- (id)contactCountForFetchRequest:(id)a0 error:(id *)a1;
- (id)groupsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)meContactIdentifiers:(id *)a0;
- (id)accountsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 authorizationContext:(id)a2 error:(id *)a3;
- (void)removeLimitedAccessForBundle:(id)a0 contactIdentifiers:(id)a1;
- (id)authorizedKeysForContactKeys:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)writeFavoritesPropertyListData:(id)a0 toPath:(id)a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0 connection:(id)a1;
- (id)getLimitedAccessLastSyncSequenceNumber:(id *)a0;
- (id)initWithConfiguration:(id)a0;
- (id)changeHistoryWithFetchRequest:(id)a0 error:(id *)a1;
- (id)policyForContainerWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)requestAccessForEntityType:(long long)a0 error:(id *)a1;
- (BOOL)setBestMeIfNeededForGivenName:(id)a0 familyName:(id)a1 email:(id)a2 error:(id *)a3;
- (id)favoritesEntryDictionariesAtPath:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)contactObservableForFetchRequest:(id)a0;

@end
