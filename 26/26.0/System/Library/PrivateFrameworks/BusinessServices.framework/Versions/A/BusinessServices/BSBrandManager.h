@class BSBrandManagerObjcShim;

@interface BSBrandManager : NSObject

@property (readonly, retain, nonatomic) BSBrandManagerObjcShim *shim;

- (void).cxx_destruct;
- (void)brandWithURI:(id)a0 completion:(id /* block */)a1;
- (void)brandWithURI:(id)a0 usingSim:(id)a1 completion:(id /* block */)a2;
- (id)initWithCachingEnabled:(BOOL)a0 cacheURL:(id)a1 brandDataSourceOpaqueWrapper:(id)a2;
- (id)_initWithBrandType:(long long)a0 cachingEnabled:(BOOL)a1;
- (void)brandAssetWithIdentifier:(id)a0 forService:(id)a1 completion:(id /* block */)a2;
- (void)brandWithIdentifier:(id)a0 forService:(id)a1 completion:(id /* block */)a2;
- (void)clearUnusedCachedLogos:(id /* block */)a0;
- (void)fetchAssetWithURL:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id)initWithBrandType:(long long)a0 cachingEnabled:(BOOL)a1;
- (id)initWithBrandType:(long long)a0 cachingEnabled:(BOOL)a1 brandDataSourceOpaqueWrapper:(id)a2;
- (void)isBrandRegisteredWithIdentifier:(id)a0 forService:(id)a1 completion:(id /* block */)a2;
- (BOOL)isBrandRegisteredWithIdentifier:(id)a0 forService:(id)a1 timeout:(double)a2 error:(id *)a3;

@end
