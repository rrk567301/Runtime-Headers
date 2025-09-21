@interface SiriAnalyticsRawUnifiedStream : NSObject {
    void /* unknown type, empty encoding */ underlying;
}

- (id)init;
- (void)prune;
- (void).cxx_destruct;
- (void)sendWithAnyEvent:(id)a0;
- (void)sendWithAnyEvents:(id)a0;
- (void)sendWithRuntimeEvents:(id)a0;

@end
