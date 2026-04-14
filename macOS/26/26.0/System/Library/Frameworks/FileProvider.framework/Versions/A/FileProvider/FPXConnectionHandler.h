@class FPXExtensionContext, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface FPXConnectionHandler : _EXExtension <_EXConnectionHandler> {
    FPXExtensionContext *_currentContext;
    int _activeConnections;
    NSObject<OS_dispatch_source> *_terminationTimer;
    NSObject<OS_dispatch_queue> *_timerQueue;
}

- (void)scheduleTermination:(double)a0;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (id)init;
- (void)cancelTermination;
- (Class)delegateClass;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void).cxx_destruct;
- (void)invalidateCurrentContext:(void *)a0;
- (id)makeNewContext;

@end
