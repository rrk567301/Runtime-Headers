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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultContactsStoreDirectoryURL;

- (id)defaultContainerIdentifier;
- (id)groupsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)changeHistoryWithFetchRequest:(id)a0 error:(id *)a1;
- (id)accountsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)subgroupsOfGroupWithIdentifier:(id)a0 error:(id *)a1;
- (id)currentHistoryToken;
- (id)meContactIdentifiers:(id *)a0;
- (id)contactObservableForFetchRequest:(id)a0;
- (BOOL)setMeContact:(id)a0 error:(id *)a1;
- (id)policyWithDescription:(id)a0 error:(id *)a1;
- (id)currentHistoryAnchor;
- (id)authorizedKeysForContactKeys:(id)a0 error:(id *)a1;
- (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (id)contactCountForFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)executeChangeHistoryClearRequest:(id)a0 error:(id *)a1;
- (id)policyForContainerWithIdentifier:(id)a0 error:(id *)a1;
- (id)sectionListOffsetsForSortOrder:(long long)a0 error:(id *)a1;
- (id)containersMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (BOOL)requestAccessForEntityType:(long long)a0 error:(id *)a1;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 authorizationContext:(id)a2 error:(id *)a3;
- (BOOL)registerChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (id)serverSearchContainersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)initWithConfiguration:(id)a0;
- (BOOL)hasGroups;
- (id)init;
- (BOOL)hasMultipleGroupsOrAccounts;
- (void).cxx_destruct;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (void)setNotificationSource:(id)a0;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 error:(id *)a2;

@end
