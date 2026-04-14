@class _TtC21DocumentUnderstanding24TextUnderstandingManager;

@interface DocumentUnderstanding.TextUnderstandingManager : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ foundInEventsQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_client;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updater;
}

@property (class, nonatomic, readonly) _TtC21DocumentUnderstanding24TextUnderstandingManager *shared;

- (id)init;
- (void).cxx_destruct;
- (void)pingWithReply:(id /* block */)a0;
- (void)foundInEventResultWithSerializedDocument:(id)a0 documentType:(long long)a1 completion:(id /* block */)a2;
- (void)extractEventWithSerializedDocument:(id)a0 documentType:(long long)a1 pid:(long long)a2 completion:(id /* block */)a3;
- (void)addOrUpdateSearchableItems:(id)a0 bundleID:(id)a1 completion:(id /* block */)a2;
- (void)addSerializedDocument:(id)a0 documentType:(long long)a1 completion:(id /* block */)a2;
- (void)extractPersonalIDWithLines:(id)a0 pid:(long long)a1 completion:(id /* block */)a2;
- (long long)getExtractionCategoryFrom:(id)a0;
- (void)triggerSpotlightFileUpdateNoArgsWithReply:(id /* block */)a0;

@end
