@interface MediaContinuityKit.MediaContinuityCoexSession : _TtCs12_SwiftObject <MediaContinuityKit.CoexSessionDelegateProtocol> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ xpcConnection;
    void /* unknown type, empty encoding */ xpcProxyObject;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ startContinuation;
    void /* unknown type, empty encoding */ internalEventMonitorTask;
    void /* unknown type, empty encoding */ internalEventStream;
    void /* unknown type, empty encoding */ internalEventStreamContinuation;
}

- (void)resumeSessionWithCompletionHandler:(id /* block */)a0;
- (void)suspendSessionWithCompletionHandler:(id /* block */)a0;

@end
