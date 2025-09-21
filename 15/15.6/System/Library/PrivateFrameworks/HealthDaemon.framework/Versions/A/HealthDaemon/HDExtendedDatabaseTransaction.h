@class NSUUID, HDDatabase, NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface HDExtendedDatabaseTransaction : NSObject {
    char _pendingWorkDidSucceed;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    NSObject<OS_dispatch_semaphore> *_pendingWorkSemaphore;
    NSObject<OS_dispatch_source> *_automaticRollbackTimer;
    id /* block */ _pendingWork;
    unsigned long long _status;
    NSError *_lastError;
}

@property (readonly, nonatomic) double transactionTimeout;
@property (readonly, nonatomic) double continuationTimeout;
@property (readonly, copy, nonatomic) NSUUID *transactionIdentifier;
@property (readonly, weak, nonatomic) HDDatabase *database;

- (void)dealloc;
- (void).cxx_destruct;
- (char)commitWithErrorOut:(id *)a0;
- (id)initWithDatabase:(id)a0 context:(id)a1 transactionTimeout:(double)a2 continuationTimeout:(double)a3 error:(id *)a4;
- (char)performInTransactionWithErrorOut:(id *)a0 block:(id /* block */)a1;
- (char)rollbackDueToError:(id)a0 errorOut:(id *)a1;

@end
