@interface SiriAnalyticsMetastoreDb : NSObject {
    void /* unknown type, empty encoding */ storageURL;
    void /* unknown type, empty encoding */ db;
    void /* unknown type, empty encoding */ bootstrapped;
    void /* unknown type, empty encoding */ schemas;
}

- (void)checkpoint;
- (void).cxx_destruct;
- (id)init;
- (void)bootstrap;
- (void)prune;
- (void)dealloc;

@end
