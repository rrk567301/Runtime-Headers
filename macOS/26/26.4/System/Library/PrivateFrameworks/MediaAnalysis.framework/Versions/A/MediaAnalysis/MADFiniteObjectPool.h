@class NSObject;
@protocol OS_dispatch_semaphore;

@interface MADFiniteObjectPool : VCPObjectPool {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)objectPoolWithAllocator:(id /* block */)a0 limit:(unsigned long long)a1;

- (void)returnObject:(id)a0;
- (void).cxx_destruct;
- (id)getObject;
- (id)initWithAllocator:(id /* block */)a0 limit:(unsigned long long)a1;

@end
