@interface SiriAnalyticsRawUnifiedStream : NSObject {
    void /* unknown type, empty encoding */ underlying;
}

- (void)prune;
- (id)init;
- (void).cxx_destruct;
- (void)sendWithAnyEvent:(id)a0;
- (void)sendWithAnyEvents:(id)a0;
- (void)sendWithRuntimeEvents:(id)a0;

@end
