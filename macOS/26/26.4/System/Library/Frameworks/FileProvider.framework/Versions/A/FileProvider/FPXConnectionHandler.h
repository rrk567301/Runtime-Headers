@class FPXExtensionContext, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface FPXConnectionHandler : _EXExtension <_EXConnectionHandler> {
    FPXExtensionContext *_currentContext;
    int _activeConnections;
    NSObject<OS_dispatch_source> *_terminationTimer;
    NSObject<OS_dispatch_queue> *_timerQueue;
}

- (BOOL)shouldAcceptConnection:(id)a0;
- (void)cancelTermination;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (Class)delegateClass;
- (void)scheduleTermination:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateCurrentContext:(void *)a0;
- (id)makeNewContext;

@end
