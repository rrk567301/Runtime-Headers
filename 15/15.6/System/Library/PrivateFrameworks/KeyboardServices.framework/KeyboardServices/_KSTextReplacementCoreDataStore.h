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

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (id)persistentStore;
- (id)getCKFetchToken;
- (unsigned long long)countEntriesWithPredicate:(id)a0;
- (char)deleteTextReplacementsFromLocalStoreWithNames:(id)a0 excludeSavesToCloud:(char)a1;
- (char)deleteTextReplacementsWithPredicate:(id)a0;
- (char)didMakeInitialPull;
- (void)fetchAndMergeTextReplacementEntry:(id)a0 context:(id)a1;
- (id)fetchTextReplacementEntry:(id)a0 context:(id)a1;
- (id)fetchTextReplacementWithUniqueName:(id)a0 context:(id)a1;
- (id)initWithDirectoryPath:(id)a0;
- (char)markDeletesForTextReplacementEntries:(id)a0;
- (id)queryEntriesWithPredicate:(id)a0 limit:(unsigned long long)a1;
- (id)queryManagedObjectsWithPredicate:(id)a0 limit:(unsigned long long)a1;
- (char)recordTextReplacementEntries:(id)a0;
- (void)saveCKFetchToken:(id)a0;
- (id)syncStateEntryShouldSave:(char)a0 fetchToken:(id)a1;
- (id)textReplacementEntriesWithLimit:(unsigned long long)a0;

@end
