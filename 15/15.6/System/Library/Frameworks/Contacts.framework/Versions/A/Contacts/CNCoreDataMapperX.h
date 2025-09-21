@class CNCDChangeHistoryStore, NSString, CNCDPersistenceStack;

@interface CNCoreDataMapperX : NSObject <CNDataMapper> {
    CNCDPersistenceStack *_persistenceStack;
}

@property (readonly) CNCDChangeHistoryStore *changeHistoryStore;
@property (readonly) char shouldLogContactsAccess;
@property (readonly) char userMightHaveUnconfiguredPersistenceStack;
@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
@property (readonly, nonatomic) char shouldLogPrivacyAccountingAccessEvents;
@property (readonly, nonatomic) char shouldCaptureMetricsForQueries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultContactsStoreDirectoryURL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)currentHistoryToken;
- (char)executeSaveRequest:(id)a0 error:(id *)a1;
- (id)containersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)defaultContainerIdentifier;
- (void)setNotificationSource:(id)a0;
- (id)groupsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)accountsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)authorizedKeysForContactKeys:(id)a0 error:(id *)a1;
- (id)changeHistoryWithFetchRequest:(id)a0 error:(id *)a1;
- (id)contactCountForFetchRequest:(id)a0 error:(id *)a1;
- (id)contactObservableForFetchRequest:(id)a0;
- (id)currentHistoryAnchor;
- (char)executeChangeHistoryClearRequest:(id)a0 error:(id *)a1;
- (char)executeSaveRequest:(id)a0 response:(id *)a1 authorizationContext:(id)a2 error:(id *)a3;
- (char)executeSaveRequest:(id)a0 response:(id *)a1 error:(id *)a2;
- (char)hasGroups;
- (char)hasMultipleGroupsOrAccounts;
- (id)meContactIdentifiers:(id *)a0;
- (id)policyForContainerWithIdentifier:(id)a0 error:(id *)a1;
- (id)policyWithDescription:(id)a0 error:(id *)a1;
- (char)registerChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (char)requestAccessForEntityType:(long long)a0 error:(id *)a1;
- (id)sectionListOffsetsForSortOrder:(long long)a0 error:(id *)a1;
- (id)serverSearchContainersMatchingPredicate:(id)a0 error:(id *)a1;
- (char)setMeContact:(id)a0 error:(id *)a1;
- (id)subgroupsOfGroupWithIdentifier:(id)a0 error:(id *)a1;
- (char)unregisterChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;

@end
