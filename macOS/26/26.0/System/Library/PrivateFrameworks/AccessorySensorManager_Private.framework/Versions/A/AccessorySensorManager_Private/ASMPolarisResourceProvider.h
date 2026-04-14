@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ASMPolarisResourceProvider : NSObject {
    BOOL _activateCalled;
    NSMutableDictionary *_currentResourcesMap;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (copy, nonatomic) id /* block */ resourceStartHandler;
@property (copy, nonatomic) id /* block */ resourceStopHandler;

- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (void)removeResource:(id)a0;
- (void)_activateWithExecutionSession:(id)a0;
- (void)activateWithExecutionSession:(id)a0;
- (void)publishResource:(id)a0 completion:(id /* block */)a1;

@end
