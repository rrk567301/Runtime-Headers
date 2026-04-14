@class NSArray, CNContactStore;

@interface CNAggregateContactStore : CNContactStore {
    CNContactStore *_mainStore;
}

@property (copy, nonatomic) NSArray *contactStores;
@property (readonly, weak, nonatomic) CNContactStore *mainStore;

- (void).cxx_destruct;
- (id)unifiedContactsMatchingPredicate:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (id)enumeratorForChangeHistoryFetchRequest:(id)a0 error:(id *)a1;
- (id)currentHistoryToken;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (id)containersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)defaultContainerIdentifier;
- (id)groupsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)groupWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)resetSortDataIfNeededWithError:(id *)a0;
- (id)enumeratorForContactFetchRequest:(id)a0 error:(id *)a1;
- (id)initWithContactStores:(id)a0;
- (BOOL)store:(id)a0 supportsSelector:(SEL)a1;
- (BOOL)hasMultipleGroupsOrAccounts;
- (BOOL)hasGroups;
- (id)mainContactStore;
- (id)requestAccessForEntityType:(long long)a0;
- (id)_allStoreResultsWithError:(id *)a0 withBlock:(id /* block */)a1;
- (void)_enumerateStoresUsingBlock:(id /* block */)a0;
- (void)didFetchContacts:(id)a0 forPredicate:(id)a1 fromStore:(id)a2 unifiedFetch:(BOOL)a3;
- (id)_unifiedContactsFromContacts:(id)a0 unifyContactsFromMainStore:(BOOL)a1 keysToFetch:(id)a2 error:(id *)a3;
- (id)sectionListOffsetsForSortOrder:(long long)a0 error:(id *)a1;
- (id)unifiedContactCountWithError:(id *)a0;
- (id)contactCountForFetchRequest:(id)a0 error:(id *)a1;
- (id)_unifiedMeContactWithKeysToFetch:(id)a0 error:(id *)a1;
- (id)meContactIdentifiers:(id *)a0;
- (BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateNonUnifiedContactsWithFetchRequest:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)membersOfGroupWithIdentifier:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (id)subgroupsOfGroupWithIdentifier:(id)a0 error:(id *)a1;
- (id)serverSearchContainersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)policyWithDescription:(id)a0 error:(id *)a1;
- (id)usedLabelsForPropertyWithKey:(id)a0 error:(id *)a1;
- (BOOL)setMeContact:(id)a0 error:(id *)a1;
- (BOOL)setMeContact:(id)a0 forContainer:(id)a1 error:(id *)a2;
- (id)accountsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)supportsSaveRequest:(id)a0;
- (id)executeFetchRequest:(id)a0 progressiveResults:(id /* block */)a1 completion:(id /* block */)a2;
- (id)currentHistoryAnchor;
- (id)contactWithUserActivityUserInfo:(id)a0 keysToFetch:(id)a1;
- (id)userActivityUserInfoForContact:(id)a0;
- (BOOL)registerChangeHistoryClientIdentifier:(id)a0 error:(id *)a1;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)a0 error:(id *)a1;
- (id)changeHistoryWithFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)clearChangeHistoryForClientIdentifier:(id)a0 toChangeAnchor:(id)a1 error:(id *)a2;
- (BOOL)executeChangeHistoryClearRequest:(id)a0 error:(id *)a1;
- (id)originForSuggestion:(id)a0 error:(id *)a1;

@end
