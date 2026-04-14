@class KVItemMapper, NSString, HMHomeManager, NSObject;
@protocol OS_dispatch_semaphore;

@interface CKVHomeManagerBridge : NSObject <HMHomeManagerDelegate, CKVProviderDatasetBridge> {
    KVItemMapper *_itemMapper;
}

@property (readonly, nonatomic) HMHomeManager *homeManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *setupSema;
@property (readonly, nonatomic) double setupTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (long long)itemType;
- (id)originAppId;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithHomeManager:(id)a0 setupTimeout:(double)a1;

@end
