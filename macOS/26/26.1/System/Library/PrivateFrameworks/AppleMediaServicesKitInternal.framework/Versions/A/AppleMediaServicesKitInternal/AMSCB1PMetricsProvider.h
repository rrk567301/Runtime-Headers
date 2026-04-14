@interface AMSCB1PMetricsProvider : AMSCB1PBridgeDependent {
    struct optional<AMSCore::BagService> { union { char __null_state_; struct BagService { struct WeakSession { struct weak_ptr<AMSCore::Session::impl> { struct impl *__ptr_; struct __shared_weak_count *__cntrl_; } mImpl; } mSession; struct shared_ptr<AMSCore::BagDataSource> { struct BagDataSource *__ptr_; struct __shared_weak_count *__cntrl_; } mDataSource; struct shared_ptr<AMSCore::BagService::MutableBagContext> { struct MutableBagContext *__ptr_; struct __shared_weak_count *__cntrl_; } mMutableBagContext; } __val_; } ; BOOL __engaged_; } _bagService;
    struct shared_ptr<AMSCore::IMetricsProvider> { struct IMetricsProvider *__ptr_; struct __shared_weak_count *__cntrl_; } _provider;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
