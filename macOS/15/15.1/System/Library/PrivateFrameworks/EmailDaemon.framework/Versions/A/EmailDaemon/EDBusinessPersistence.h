@class NSString, EDPersistenceHookRegistry, EDPersistenceDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface EDBusinessPersistence : NSObject <EDProtectedDataReconciliationHookResponder, EDPersistenceDatabaseProtectedSchemaProvider> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, copy, nonatomic) NSString *businessesTableName;
@property (class, readonly, copy, nonatomic) NSString *businessesDisplayNameColumnName;
@property (class, readonly, copy, nonatomic) NSString *businessesDomainColumnName;
@property (class, readonly, copy, nonatomic) NSString *businessAddressesTableName;
@property (class, readonly, copy, nonatomic) NSString *businessAddressesAddressColumnName;
@property (class, readonly, copy, nonatomic) NSString *businessAddressesBusinessColumnName;
@property (class, readonly, copy, nonatomic) NSString *businessAddressesCategoryColumnName;
@property (class, readonly, copy, nonatomic) NSString *businessCategoriesTableName;
@property (class, readonly, copy, nonatomic) NSString *businessCategoriesBusinessColumnName;
@property (class, readonly, copy, nonatomic) NSString *businessCategoriesCategoryColumnName;

@property (retain, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (BOOL)_shouldUseSimpleAddressForHighLevelDomain:(id)a0 displayName:(id)a1 grouping:(long long)a2;
+ (id)_commonDomains;
+ (id)businessAddressesTableSchema;
+ (id)businessCategoriesTableSchema;
+ (id)businessesTableSchema;
+ (id)protectedTablesAndForeignKeysToResolve:(id *)a0;
+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;

- (void).cxx_destruct;
- (id)_businessAddressMapWithCategoryOverrideWithConnection:(id)a0;
- (id)_businessExternalIDForAddressID:(long long)a0 expectedGrouping:(long long)a1 connection:(id)a2 error:(id *)a3;
- (id)_businessExternalIDForEmailAddress:(id)a0 grouping:(long long)a1 businessIDsToCombine:(id *)a2;
- (long long)_businessIDForDomain:(id)a0 displayName:(id)a1 connection:(id)a2;
- (id)_businessIDsForHighLevelDomain:(id)a0 connection:(id)a1;
- (id)_categoryOverridesForBusinessIDs:(id)a0 connection:(id)a1;
- (BOOL)_combineBusinesses:(id)a0 connection:(id)a1 newBusinessID:(long long *)a2;
- (BOOL)_deleteBusinessAddressEntryForAddressID:(id)a0 connection:(id)a1;
- (BOOL)_deleteBusinessEntryForBusinessID:(id)a0 connection:(id)a1;
- (id)_existingHighLevelDomainAndCommonPrefixExternalIDForEmailAddress:(id)a0;
- (id)_externalIDForDomain:(id)a0 displayName:(id)a1 simpleAddress:(id)a2 grouping:(long long)a3;
- (id)_externalIDForPersistedDomain:(id)a0 displayName:(id)a1 grouping:(long long)a2;
- (id)_externalIDWithCommonPrefixForHighLevelDomain:(id)a0 displayName:(id)a1 businessIDsToCombine:(id *)a2;
- (id)_groupingTrieForHighLevelDomain:(id)a0;
- (id)_highLevelDomainsForBusinessIDs:(id)a0;
- (long long)_insertBusinessWithDomain:(id)a0 displayName:(id)a1 connection:(id)a2;
- (BOOL)_insertOrUpdateBusinessCategoriesCategoryColumnForBusinessID:(long long)a0 category:(unsigned long long)a1 connection:(id)a2;
- (id)_persistedDisplayNameForExternalID:(id)a0;
- (id)_persistedDomainForExternalID:(id)a0;
- (BOOL)_removeUserOverrideForBusinessID:(long long)a0 connection:(id)a1;
- (BOOL)_setUserOverrideForBusinessID:(long long)a0 category:(unsigned long long)a1 connection:(id)a2;
- (BOOL)_updateBusinessAddressesCategoryColumnForAddressIDs:(id)a0 category:(unsigned long long)a1 connection:(id)a2;
- (BOOL)_updateBusinessAddressesTableforBusinessID:(id)a0 newBusinessID:(id)a1 connection:(id)a2;
- (BOOL)_updateDisplayNameForBusinessID:(long long)a0 displayName:(id)a1 connection:(id)a2;
- (id)addressIDsForBusinessID:(long long)a0 connection:(id)a1;
- (void)backfillBusinessesTables;
- (id)businessExternalIDForBusinessID:(long long)a0;
- (id)businessExternalIDForEmailAddress:(id)a0 grouping:(long long)a1;
- (long long)businessIDForBusinessExternalID:(id)a0;
- (id)categoryTypeForAddressID:(long long)a0;
- (void)countOfUserOverridesWithCompletionHandler:(id /* block */)a0;
- (long long)findOrCreateBusinessIDForAddress:(id)a0 connection:(id)a1;
- (id)initWithDatabase:(id)a0 hookRegistry:(id)a1;
- (void)insertOrUpdateUserOverrideForAddressIDs:(id)a0 category:(unsigned long long)a1;
- (void)insertOrUpdateUserOverrideForBusinessIDs:(id)a0 category:(unsigned long long)a1;
- (void)persistenceDidReconcileProtectedData;
- (void)persistenceWillAddProtectedDatabaseIDsFromJournal:(id)a0 andReplaceJournalDatabaseIDsWithProtectedDatabaseIDs:(id)a1 forTable:(id)a2;
- (void)removeAllUserOverrides;
- (void)removeUserOverridesForBusinessIDs:(id)a0;
- (void)repopulateBusinessesTables;
- (BOOL)setBusiness:(long long)a0 forAddress:(long long)a1 connection:(id)a2;

@end
