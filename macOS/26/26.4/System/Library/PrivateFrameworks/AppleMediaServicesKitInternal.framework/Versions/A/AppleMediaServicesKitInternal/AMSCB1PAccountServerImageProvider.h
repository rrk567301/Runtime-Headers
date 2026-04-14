@interface AMSCB1PAccountServerImageProvider : AMSCB1PBridgeDependent {
    struct optional<std::shared_ptr<AMSCore::IBag>> { union { char __null_state_; struct shared_ptr<AMSCore::IBag> { struct IBag *__ptr_; struct __shared_weak_count *__cntrl_; } __val_; } ; BOOL __engaged_; } _bag;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
