@interface _TtC10ChronoCoreP33_0AEA7E08BEDD54263986ABBCE596ECBB22ActivityRendererClient : NSObject <WRActivityRendererServiceXPCServer> {
    void /* unknown type, empty encoding */ _server;
    void /* unknown type, empty encoding */ _subscriptions;
    void /* unknown type, empty encoding */ _services;
    void /* unknown type, empty encoding */ _processHandle;
    void /* unknown type, empty encoding */ _logIdentifier;
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ _lock_sessions;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _queue_connection;
    void /* unknown type, empty encoding */ _queue_runningAssertion;
    void /* unknown type, empty encoding */ _queue_observeProcessStateAssertion;
    void /* unknown type, empty encoding */ _queue_runningAssertionExpirationTimer;
}

- (void)unsubscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)subscribe:(id)a0 completion:(id /* block */)a1;
- (void)setTaskPriority:(id)a0 forSession:(id)a1;
- (void)handleInteraction:(id)a0 authenticationPolicy:(id)a1 action:(id)a2 handler:(id /* block */)a3;
- (void)reloadContent:(id)a0 reason:(id)a1;
- (void)reloadDescriptors:(id)a0;

@end
