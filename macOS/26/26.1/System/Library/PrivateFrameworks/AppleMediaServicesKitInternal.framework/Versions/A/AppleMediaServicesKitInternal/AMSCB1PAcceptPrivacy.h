@interface AMSCB1PAcceptPrivacy : AMSCB1PBridgeDependent {
    struct shared_ptr<AMSCore::PrivacyProvider> { struct PrivacyProvider *__ptr_; struct __shared_weak_count *__cntrl_; } _privacyProvider;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
