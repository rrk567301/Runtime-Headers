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

- (void)cleanup;
- (void)fetchAndMergeTextReplacementEntry:(id)a0 context:(id)a1;
- (id)textReplacementEntriesWithLimit:(unsigned long long)a0;
- (id)fetchTextReplacementEntry:(id)a0 context:(id)a1;
- (id)syncStateEntryShouldSave:(BOOL)a0 fetchToken:(id)a1;
- (id)initWithDirectoryPath:(id)a0;
- (id)getCKFetchToken;
- (BOOL)deleteTextReplacementsWithPredicate:(id)a0;
- (id)fetchTextReplacementWithUniqueName:(id)a0 context:(id)a1;
- (void)saveCKFetchToken:(id)a0;
- (id)persistentStore;
- (unsigned long long)countEntriesWithPredicate:(id)a0;
- (id)queryEntriesWithPredicate:(id)a0 limit:(unsigned long long)a1;
- (BOOL)didMakeInitialPull;
- (void)dealloc;
- (id)queryManagedObjectsWithPredicate:(id)a0 limit:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)recordTextReplacementEntries:(id)a0;
- (BOOL)deleteTextReplacementsFromLocalStoreWithNames:(id)a0 excludeSavesToCloud:(BOOL)a1;
- (BOOL)markDeletesForTextReplacementEntries:(id)a0;
- (id)init;

@end
