@interface FAFamilyFetchActivityScheduler : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_scheduler;
    void /* unknown type, empty encoding */ familyCircleFetchBlock;
    void /* unknown type, empty encoding */ cacheLoadBlock;
}

- (void).cxx_destruct;
- (void)reschedule;
- (id)init;
- (id)initWithFamilyCircleFetchBlock:(id /* block */)a0 cacheLoadBlock:(id /* block */)a1;

@end
