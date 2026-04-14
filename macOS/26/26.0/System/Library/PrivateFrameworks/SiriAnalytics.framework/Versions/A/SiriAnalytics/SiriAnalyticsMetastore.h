@interface SiriAnalyticsMetastore : NSObject {
    void /* unknown type, empty encoding */ storageURL;
    void /* unknown type, empty encoding */ db;
    void /* unknown type, empty encoding */ bootstrapped;
    void /* unknown type, empty encoding */ schemas;
}

- (void)checkpoint;
- (void)bootstrap;
- (void)dealloc;
- (id)init;
- (void)prune;
- (id)createTagWithShim:(id)a0 onClock:(id)a1;
- (void).cxx_destruct;

@end
