@class NSMutableDictionary;

@interface PLCloudInMemoryTaskManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_resourceIDsToDownloadTasks;
    NSMutableDictionary *_taskIDsToDownloadTasks;
}

- (void)setTransferTask:(id)a0 forResource:(id)a1;
- (void)reset;
- (void).cxx_destruct;
- (void)cancelTaskWithTaskIdentifier:(id)a0;
- (BOOL)addClientHandlerAndCreateTaskIfNecessaryForResource:(id)a0 taskIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)reportCompletionForResource:(id)a0 withData:(id)a1 error:(id)a2;
- (id)_identifierForResource:(id)a0;
- (id)init;

@end
