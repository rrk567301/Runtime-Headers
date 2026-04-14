@interface SiriAnalytics.RawUnifiedStream : BMStoreStream {
    void /* unknown type, empty encoding */ storeConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$_source;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pruner;
}

- (id)initWithStreamIdentifier:(id)a0 storeConfig:(id)a1;
- (id)initWithRestrictedStreamIdentifier:(id)a0 storeConfig:(id)a1;
- (id)initWithRestrictedStreamIdentifier:(id)a0;
- (id)initWithRestrictedStreamIdentifier:(id)a0 storeConfig:(id)a1 eventDataClass:(Class)a2;
- (id)initWithPublicStream:(long long)a0;
- (id)initWithPrivateStreamIdentifier:(id)a0 storeConfig:(id)a1 eventDataClass:(Class)a2;
- (id)initWithPrivateStreamIdentifier:(id)a0 storeConfig:(id)a1;
- (id)initWithRestrictedStreamIdentifier:(id)a0 protectionClass:(unsigned long long)a1;
- (void).cxx_destruct;

@end
