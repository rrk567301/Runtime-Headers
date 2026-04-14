@class CNCDChangeHistoryStore, NSString, CNCDPersistenceStack;
@protocol CNContactPosterDataStore;

@interface CNCoreDataMapperX : NSObject <CNDataMapper> {
    CNCDPersistenceStack *_persistenceStack;
    id<CNContactPosterDataStore> _posterDataStore;
}

@property (readonly) CNCDChangeHistoryStore *changeHistoryStore;
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

+ (id)defaultContactsStoreDirectoryURL;

- (id)serverSearchContainersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)sectionListOffsetsForSortOrder:(long long)a0 error:(id *)a1;
- (id)currentHistoryAnchor;
- (id)currentHistoryToken;
- (id)containersMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)setMeContact:(id)a0 error:(id *)a1;
- (BOOL)registerChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (BOOL)executeChangeHistoryClearRequest:(id)a0 error:(id *)a1;
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
- (BOOL)hasGroups;
- (id)authorizedKeysForContactKeys:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)hasMultipleGroupsOrAccounts;
- (id)initWithConfiguration:(id)a0;
- (id)changeHistoryWithFetchRequest:(id)a0 error:(id *)a1;
- (id)policyForContainerWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)requestAccessForEntityType:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)contactObservableForFetchRequest:(id)a0;
- (void)setNotificationSource:(id)a0;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 error:(id *)a2;

@end
