@interface IMDHandleReindexer : NSObject {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ handles;
    void /* unknown type, empty encoding */ reason;
}

- (id)init;
- (void).cxx_destruct;
- (void)reindex;
- (id)initWithHandles:(id)a0 batchDeferralTime:(long long)a1 messageAge:(double)a2 reason:(long long)a3;

@end
