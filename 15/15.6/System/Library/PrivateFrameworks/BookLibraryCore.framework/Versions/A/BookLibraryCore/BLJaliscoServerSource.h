@class NSString, NSPersistentStoreCoordinator, NSPersistentHistoryToken, NSManagedObjectModel;

@interface BLJaliscoServerSource : NSObject {
    long long _modelSentinel;
    long long _pscSentinel;
    NSPersistentStoreCoordinator *_psc;
    NSManagedObjectModel *_model;
}

@property (retain, nonatomic) NSString *databaseContainerPath;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSPersistentHistoryToken *currentJaliscoHistoryToken;

+ (id)sharedSource;
+ (void)preWarmSync;
+ (void)setSharedSource:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)managedObjectModel;
- (id)persistentStoreCoordinator;
- (char)_setupCoreDataStack;
- (id)newManagedObjectContext;
- (id)_persistentStoreOptions;
- (id)existingServerInfoWithPredicate:(id)a0 fromManagedObjectContext:(id)a1 error:(id *)a2;
- (id)existingServerItemWithPredicate:(id)a0 fromManagedObjectContext:(id)a1 error:(id *)a2;
- (id)predicateForBookletItems:(char)a0 dsids:(id)a1;
- (id)_itemsFetchRequestIncludingHiddenItems:(char)a0 dsids:(id)a1;
- (id)allItemsFetchRequestForDSIDs:(id)a0;
- (id)existingEntitiesWithName:(id)a0 matchingPredicate:(id)a1 fromManagedObjectContext:(id)a2 limit:(unsigned long long)a3 error:(id *)a4;
- (id)existingServerDatabaseWithPredicate:(id)a0 fromManagedObjectContext:(id)a1 error:(id *)a2;
- (id)fetchRequestForAllBookletsIDsWithParentStoreIDs:(id)a0;
- (id)fetchRequestForAllCloudIDs:(id)a0 dsids:(id)a1;
- (id)fetchRequestForAllStoreIDs:(id)a0;
- (id)fetchRequestForAllStoreIDs:(id)a0 dsids:(id)a1;
- (id)fetchRequestForAllStoreIDs:(id)a0 dsids:(id)a1 isImported:(char)a2;
- (id)fetchRequestForAllStoreIDs:(id)a0 dsids:(id)a1 isImported:(char)a2 includeHidden:(char)a3;
- (id)fetchRequestForAllStoreIDsWithNonEmptyPurchasedToken:(id)a0 dsids:(id)a1;
- (id)fetchRequestForBookletItemsForStoreIDs:(id)a0;
- (id)fetchRequestForBuyParameters:(id)a0;
- (id)fetchRequestForHiddenItemsWithAccountIDs:(id)a0;
- (id)fetchRequestForNeedsImport:(char)a0;
- (id)fetchRequestForNotInStoreAccountIDs:(id)a0;
- (id)fetchRequestForStoreIDs:(id)a0 dsids:(id)a1;
- (id)initWithIdentifier:(id)a0 databaseContainerPath:(id)a1;
- (id)itemsFetchRequestForDSIDs:(id)a0;
- (id)newManagedObjectContextWithPrivateQueueConcurrency;
- (char)p_createPersistentDirectoryIfNeeded;
- (char)p_databaseExistsAtPrivateiBooksContainerLocation;
- (char)p_databaseExistsAtSharediBooksContainerLocation;
- (id)p_oldPersistentStoreDirectory;
- (id)p_persistentStoreDirectory;
- (id)p_persistentStoreFullPathAtPrivateiBooksLocation;
- (id)p_persistentStoreFullPathAtSharediBooksLocation;
- (id)persistentStoreCoordinatorWithError:(id *)a0;
- (id)platformPredicatesForItemsWithActiveUserID:(id)a0;
- (id)predicateForItems:(char)a0 dsids:(id)a1;
- (id)predicateForNeedsImport:(char)a0;
- (id)predicateForStoreAccountID:(id)a0 storeIDs:(id)a1;
- (void)refreshStoreWithCompletion:(id /* block */)a0;
- (id)serverDatabaseForDSID:(id)a0 fromManagedObjectContext:(id)a1 error:(id *)a2;
- (id)serverDatabaseForDSID:(id)a0 withIdentifier:(id)a1 fromManagedObjectContext:(id)a2 error:(id *)a3;
- (id)serverInfoForDSID:(id)a0 fromManagedObjectContext:(id)a1 error:(id *)a2;
- (id)serverItemWithStoreID:(id)a0 inDatabaseWithIdentifier:(id)a1 forDSID:(id)a2 fromManagedObjectContext:(id)a3 error:(id *)a4;
- (char)truncateDatabaseError:(id *)a0;
- (char)workaround_18397698;

@end
