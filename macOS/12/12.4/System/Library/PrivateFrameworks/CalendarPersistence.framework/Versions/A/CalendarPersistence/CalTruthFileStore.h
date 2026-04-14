@class NSOperationQueue;

@interface CalTruthFileStore : CalPersistenceMonitor {
    NSOperationQueue *_queue;
}

+ (id)defaultMonitor;
+ (void)_disableForUnitTesting;
+ (void)_enableForUnitTesting;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)waitUntilAllOperationsAreFinished;
- (void)applicationWillTerminate:(id)a0;
- (void)managedObjectContextDidSave:(id)a0;
- (BOOL)isInterestedInContext:(id)a0;
- (void)writeFilesForObjects:(id)a0;
- (void)removeFilesForObjects:(id)a0;

@end
