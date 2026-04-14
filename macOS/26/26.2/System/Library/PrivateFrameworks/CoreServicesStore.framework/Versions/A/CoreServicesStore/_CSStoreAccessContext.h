@interface _CSStoreAccessContext : NSObject {
    struct shared_ptr<CSStore2::CSStoreAccessContextInterface> { struct CSStoreAccessContextInterface *__ptr_; struct __shared_weak_count *__cntrl_; } _impl;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (id)initForSharedReading;

@end
