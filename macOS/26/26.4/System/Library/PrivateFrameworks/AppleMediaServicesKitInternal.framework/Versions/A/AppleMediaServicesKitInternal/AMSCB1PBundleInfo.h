@interface AMSCB1PBundleInfo : NSObject {
    struct shared_ptr<AMSCore::IBundleInfo> { struct IBundleInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _coreBundleInfo;
}

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)initWithIdentifier:(const char *)a0 name:(const char *)a1 version:(const char *)a2 accountClientIdentifier:(const char *)a3 mappedBundleInfo:(id)a4;

@end
