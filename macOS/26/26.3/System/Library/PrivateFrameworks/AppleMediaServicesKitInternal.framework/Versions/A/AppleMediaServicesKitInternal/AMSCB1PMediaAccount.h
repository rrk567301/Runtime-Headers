@interface AMSCB1PMediaAccount : AMSCB1PBridgeDependent {
    struct shared_ptr<AMSCore::IMediaAccount> { struct IMediaAccount *__ptr_; struct __shared_weak_count *__cntrl_; } _account;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id).cxx_construct;

@end
