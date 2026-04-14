@class NSMutableDictionary;

@interface PLCloudInMemoryTaskManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_resourceIDsToDownloadTasks;
    NSMutableDictionary *_taskIDsToDownloadTasks;
}

- (void)reportCompletionForResource:(id)a0 withData:(id)a1 error:(id)a2;
- (BOOL)addClientHandlerAndCreateTaskIfNecessaryForResource:(id)a0 taskIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (void)setTransferTask:(id)a0 forResource:(id)a1;
- (void)cancelTaskWithTaskIdentifier:(id)a0;
- (id)_identifierForResource:(id)a0;

@end
