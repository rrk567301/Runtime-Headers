@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentValidationCache : NSObject

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;

+ (id)sharedInstance;

- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_hasCacheResult:(BOOL *)a0 forKey:(id)a1;
- (void)_setCacheResult:(BOOL)a0 forKey:(id)a1;
- (BOOL)getResultForKey:(id)a0 orCompute:(id /* block */)a1;

@end
