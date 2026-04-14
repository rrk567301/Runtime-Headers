@class NSArray, NSString, CNContactsEnvironment;
@protocol CNCoreRecentsLibraryProviding;

@interface CNCoreRecentsMapper : NSObject <CNDataMapper>

@property (readonly, nonatomic) NSArray *domains;
@property (readonly, nonatomic) CNContactsEnvironment *environment;
@property (readonly, nonatomic) id<CNCoreRecentsLibraryProviding> recentsLibrary;
@property (readonly) BOOL shouldLogContactsAccess;
@property (readonly) BOOL userMightHaveUnconfiguredPersistenceStack;
@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
@property (readonly, nonatomic) BOOL shouldLogPrivacyAccountingAccessEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id)defaultContainerIdentifier;
- (id)groupsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)accountsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)subgroupsOfGroupWithIdentifier:(id)a0 error:(id *)a1;
- (id)meContactIdentifiers:(id *)a0;
- (id)contactObservableForFetchRequest:(id)a0;
- (id)policyWithDescription:(id)a0 error:(id *)a1;
- (id)authorizedKeysForContactKeys:(id)a0 error:(id *)a1;
- (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (id)contactCountForFetchRequest:(id)a0 error:(id *)a1;
- (id)policyForContainerWithIdentifier:(id)a0 error:(id *)a1;
- (id)containersMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)requestAccessForEntityType:(long long)a0 error:(id *)a1;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 authorizationContext:(id)a2 error:(id *)a3;
- (id)serverSearchContainersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (id)contactPairs:(id)a0 sortedWithOrder:(long long)a1;
- (id)initWithDomains:(id)a0 configuration:(id)a1;
- (id)initWithDomains:(id)a0 environment:(id)a1 recentsLibrary:(id)a2;

@end
