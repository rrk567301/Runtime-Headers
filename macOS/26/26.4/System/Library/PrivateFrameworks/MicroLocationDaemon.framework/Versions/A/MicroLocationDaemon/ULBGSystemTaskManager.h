@class NSObject, BGSystemTaskScheduler;
@protocol OS_dispatch_queue;

@interface ULBGSystemTaskManager : NSObject

@property (retain, nonatomic) BGSystemTaskScheduler *scheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;

- (void).cxx_destruct;
- (id)init;
- (void)deregisterAndCancelTaskWithIdentifier:(id)a0;
- (void)registerAndSubmitTaskWithRequest:(id)a0 usingQueue:(id)a1 launchHandler:(id /* block */)a2;

@end
