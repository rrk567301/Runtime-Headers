@class NSString, NSManagedObjectModel, NSPersistentStoreCoordinator, NSObject, NSManagedObjectContext;
@protocol OS_dispatch_queue;

@interface _KSTextReplacementCoreDataStore : NSObject {
    NSObject<OS_dispatch_queue> *_queueMOC;
    NSObject<OS_dispatch_queue> *_queuePSC;
}

@property (retain, nonatomic) NSString *directoryPath;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (id)localCloudEntryFromMocObject:(id)a0;

- (id)getCKFetchToken;
- (void)cleanup;
- (void)dealloc;
- (id)init;
- (id)queryManagedObjectsWithPredicate:(id)a0 limit:(unsigned long long)a1;
- (BOOL)deleteTextReplacementsFromLocalStoreWithNames:(id)a0 excludeSavesToCloud:(BOOL)a1;
- (id)syncStateEntryShouldSave:(BOOL)a0 fetchToken:(id)a1;
- (id)fetchTextReplacementWithUniqueName:(id)a0 context:(id)a1;
- (id)initWithDirectoryPath:(id)a0;
- (id)fetchTextReplacementEntry:(id)a0 context:(id)a1;
- (id)persistentStore;
- (BOOL)markDeletesForTextReplacementEntries:(id)a0;
- (BOOL)recordTextReplacementEntries:(id)a0;
- (void)saveCKFetchToken:(id)a0;
- (id)queryEntriesWithPredicate:(id)a0 limit:(unsigned long long)a1;
- (id)textReplacementEntriesWithLimit:(unsigned long long)a0;
- (BOOL)didMakeInitialPull;
- (BOOL)deleteTextReplacementsWithPredicate:(id)a0;
- (void)fetchAndMergeTextReplacementEntry:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)countEntriesWithPredicate:(id)a0;

@end
