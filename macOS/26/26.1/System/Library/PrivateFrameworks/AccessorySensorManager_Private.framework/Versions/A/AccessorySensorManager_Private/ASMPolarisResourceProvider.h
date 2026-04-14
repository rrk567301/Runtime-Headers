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
- (void).cxx_destruct;
- (id)init;
- (void)removeResource:(id)a0;
- (void)_activateWithExecutionSession:(id)a0;
- (void)activateWithExecutionSession:(id)a0;
- (void)publishResource:(id)a0 completion:(id /* block */)a1;

@end
