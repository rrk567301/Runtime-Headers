@class NSObject;
@protocol OS_dispatch_queue;

@interface WRWorkflowProvider : NSObject {
    int _taskingNotifyToken;
    int _wrSettingsChangedNotifyToken;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)providerForAllWorkflowsWithQueue:(id)a0 callback:(id /* block */)a1;
+ (id)providerForWorkflowWithName:(id)a0 queue:(id)a1 callback:(id /* block */)a2;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)handleSettingsChanged:(BOOL)a0;

@end
