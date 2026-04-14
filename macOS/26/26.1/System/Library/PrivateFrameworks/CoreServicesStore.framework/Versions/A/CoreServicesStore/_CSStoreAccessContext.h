@interface _CSStoreAccessContext : NSObject {
    struct shared_ptr<CSStore2::CSStoreAccessContextInterface> { struct CSStoreAccessContextInterface *__ptr_; struct __shared_weak_count *__cntrl_; } _impl;
}

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)initForSharedReading;

@end
