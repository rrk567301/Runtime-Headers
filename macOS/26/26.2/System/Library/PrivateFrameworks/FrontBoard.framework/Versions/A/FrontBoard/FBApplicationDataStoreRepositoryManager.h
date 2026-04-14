@class NSString, NSURL, LSEnumerator, NSObject;
@protocol OS_dispatch_queue, FBApplicationDataStoreRepository;

@interface FBApplicationDataStoreRepositoryManager : NSObject <FBApplicationDataStoreRepositoryDelegate> {
    NSURL *_dataStoreURL;
    LSEnumerator *_lsEnumerator;
    NSObject<OS_dispatch_queue> *_deferredWorkQueue;
}

@property (retain, nonatomic) id<FBApplicationDataStoreRepository> dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)migrateFromPlistStoreAtURL:(id)a0 toSqliteStoreAtURL:(id)a1 error:(id *)a2;
- (void)_handleApplicationInstalled:(id)a0;
- (void)_performAfterDeferredWork:(id /* block */)a0;
- (void)objectChangedForKeys:(id)a0 application:(id)a1;
- (id)urlByAppendingString:(id)a0 toURL:(id)a1;
- (id)_initWithDataStore:(id)a0 lsEnumerator:(id)a1;
- (void)clearExpiredUninstalledApplicationsFromStoreIfNecessary;
- (BOOL)removeStoreAtURL:(id)a0 error:(out id *)a1;
- (BOOL)migrateFromApplicationStore:(id)a0 toApplicationStore:(id)a1 error:(id *)a2;
- (id)_safeObjectForKey:(id)a0 forApplication:(id)a1 ofType:(Class)a2;
- (void).cxx_destruct;
- (id)init;
- (void)migrateApplicationStorePathIfNecessary;
- (void)dealloc;
- (void)storeInvalidatedForIdentifier:(id)a0;

@end
