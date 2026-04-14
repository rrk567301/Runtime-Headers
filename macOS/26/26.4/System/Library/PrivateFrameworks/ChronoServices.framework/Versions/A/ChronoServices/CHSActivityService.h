@interface CHSActivityService : NSObject <BSInvalidatable> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ connectionClient;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_invalidated;
    void /* unknown type, empty encoding */ queue_subscriptions;
    void /* unknown type, empty encoding */ queue_activityServiceAssertion;
}

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)dealloc;
- (id)subscribeToActivityID:(id)a0 withHandler:(id /* block */)a1;

@end
