@class CNCDChangeHistoryStore, NSString, CNCDPersistenceStack;

@interface CNCoreDataMapperX : NSObject <CNDataMapper> {
    CNCDPersistenceStack *_persistenceStack;
}

@property (readonly) CNCDChangeHistoryStore *changeHistoryStore;
@property (readonly) BOOL shouldLogContactsAccess;
@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
@property (readonly, nonatomic) BOOL shouldLogPrivacyAccountingAccessEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultContactsStoreDirectoryURL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (void)setNotificationSource:(id)a0;
- (id)defaultContainerIdentifier;
- (id)containersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)currentHistoryToken;
- (id)groupsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)hasMultipleGroupsOrAccounts;
- (id)sectionListOffsetsForSortOrder:(long long)a0 error:(id *)a1;
- (id)meContactIdentifiers:(id *)a0;
- (id)subgroupsOfGroupWithIdentifier:(id)a0 error:(id *)a1;
- (id)serverSearchContainersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)policyForContainerWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)setMeContact:(id)a0 error:(id *)a1;
- (id)accountsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)currentHistoryAnchor;
- (id)changeHistoryWithFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)executeChangeHistoryClearRequest:(id)a0 error:(id *)a1;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 authorizationContext:(id)a2 error:(id *)a3;
- (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)requestAccessForEntityType:(long long)a0 error:(id *)a1;
- (id)authorizedKeysForContactKeys:(id)a0 error:(id *)a1;
- (id)contactObservableForFetchRequest:(id)a0;
- (BOOL)registerChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 error:(id *)a2;

@end
