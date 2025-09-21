@class NSMutableArray, NSObject;
@protocol AXMTaskDispatcherDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface AXMTaskDispatcher : NSObject {
    NSObject<OS_dispatch_source> *_processQueueSource;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_taskList;
    char _queue_taskIsBeingProcessed;
}

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) char isEmpty;
@property (weak, nonatomic) id<AXMTaskDispatcherDelegate> delegate;

- (void).cxx_destruct;
- (void)scheduleTask:(id)a0;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (long long)_queue_count;
- (id)_queue_dequeueTask;
- (void)_queue_processNextTask;
- (void)_queue_scheduleTask:(id)a0;
- (id)_queue_unscheduleAllTasks;
- (id)unscheduleAllTasks;

@end
