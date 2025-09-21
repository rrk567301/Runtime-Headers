@interface UnifiedMessagingKitJSCore.JSMetrics : NSObject <UnifiedMessagingKitJSCore.JSMetricsExports> {
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ runtime;
    void /* unknown type, empty encoding */ metrics;
}

- (id)init;
- (void)flush;
- (void).cxx_destruct;
- (void)enqueue:(id)a0 :(id)a1 :(id)a2;
- (void)enqueueBatch:(id)a0 :(id)a1;
- (id)loadIdentifier:(id)a0 :(id)a1 :(id)a2 :(BOOL)a3;
- (id)loadIdentifierFields:(id)a0 :(id)a1 :(id)a2 :(BOOL)a3;

@end
