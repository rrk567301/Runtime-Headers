@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface LASerialSchedulerInternal : NSObject <LAScheduler> {
    BOOL _running;
    BOOL _performingPendingOperations;
    NSMutableArray *_pendingOperations;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_resume;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void)resume;
- (void).cxx_destruct;
- (void)schedule:(id /* block */)a0;
- (void)unsafeSchedule:(id /* block */)a0;
- (void)_performPendingOperations;
- (void)_performPendingOperationsWithCompletion:(id /* block */)a0;
- (void)_schedule:(id /* block */)a0;
- (void)unsafeResume;

@end
