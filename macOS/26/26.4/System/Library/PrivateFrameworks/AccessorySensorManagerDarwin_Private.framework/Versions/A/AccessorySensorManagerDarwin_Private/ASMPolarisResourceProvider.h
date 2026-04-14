@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ASMPolarisResourceProvider : NSObject {
    BOOL _activateCalled;
    NSMutableSet *_currentResourceKeys;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (copy, nonatomic) id /* block */ resourceStartHandler;
@property (copy, nonatomic) id /* block */ resourceStopHandler;

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)_activateWithExecutionSession:(id)a0;
- (void)activateWithExecutionSession:(id)a0;

@end
