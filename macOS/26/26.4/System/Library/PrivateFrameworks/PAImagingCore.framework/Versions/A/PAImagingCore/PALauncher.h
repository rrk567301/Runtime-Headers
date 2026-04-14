@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PALauncher : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_group> *_launchGroup;
    unsigned long long _state;
}

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (void)enqueueTask:(id)a0 block:(id /* block */)a1;
- (void)startQueuingTasks;
- (void)stopQueuingTasks;
- (void)waitForTasksToComplete;

@end
