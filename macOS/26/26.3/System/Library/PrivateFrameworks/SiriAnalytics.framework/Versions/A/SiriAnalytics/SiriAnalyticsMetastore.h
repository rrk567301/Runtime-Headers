@interface SiriAnalyticsMetastore : NSObject {
    void /* unknown type, empty encoding */ storageURL;
    void /* unknown type, empty encoding */ db;
    void /* unknown type, empty encoding */ bootstrapped;
    void /* unknown type, empty encoding */ schemas;
}

- (void)checkpoint;
- (void)prune;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createTagWithShim:(id)a0 onClock:(id)a1;
- (void)bootstrap;

@end
