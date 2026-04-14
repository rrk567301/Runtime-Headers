@interface SiriAnalyticsMetastore : NSObject {
    void /* unknown type, empty encoding */ storageURL;
    void /* unknown type, empty encoding */ db;
    void /* unknown type, empty encoding */ bootstrapped;
    void /* unknown type, empty encoding */ schemas;
}

- (void)prune;
- (void)checkpoint;
- (void).cxx_destruct;
- (id)createTagWithShim:(id)a0 onClock:(id)a1;
- (void)bootstrap;
- (id)init;
- (void)dealloc;

@end
