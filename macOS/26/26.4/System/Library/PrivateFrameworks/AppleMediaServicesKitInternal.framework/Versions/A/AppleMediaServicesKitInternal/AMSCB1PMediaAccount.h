@interface AMSCB1PMediaAccount : AMSCB1PBridgeDependent {
    struct shared_ptr<AMSCore::IMediaAccount> { struct IMediaAccount *__ptr_; struct __shared_weak_count *__cntrl_; } _account;
}

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id).cxx_construct;

@end
