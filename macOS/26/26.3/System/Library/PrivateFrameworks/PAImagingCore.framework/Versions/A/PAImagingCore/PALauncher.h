@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PALauncher : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_group> *_launchGroup;
    unsigned long long _state;
}

- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)enqueueTask:(id)a0 block:(id /* block */)a1;
- (void)startQueuingTasks;
- (void)stopQueuingTasks;
- (void)waitForTasksToComplete;

@end
