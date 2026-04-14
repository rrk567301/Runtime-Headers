@class BSBrandManagerObjcShim;

@interface BSBrandManager : NSObject

@property (readonly, retain, nonatomic) BSBrandManagerObjcShim *shim;

- (void).cxx_destruct;
- (void)brandWithURI:(id)a0 completion:(id /* block */)a1;
- (void)clearUnusedCachedLogos:(id /* block */)a0;
- (id)initWithCachingEnabled:(BOOL)a0 cacheURL:(id)a1 brandDataSourceOpaqueWrapper:(id)a2;

@end
