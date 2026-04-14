@class NSDictionary;

@interface AMSCB1PBag : AMSCB1PBridgeDependent {
    struct shared_ptr<AMSCore::IBag> { struct IBag *__ptr_; struct __shared_weak_count *__cntrl_; } _coreBag;
}

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
