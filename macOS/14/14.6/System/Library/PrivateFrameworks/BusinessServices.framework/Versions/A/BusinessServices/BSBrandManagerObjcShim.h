@interface BSBrandManagerObjcShim : NSObject {
    void /* unknown type, empty encoding */ brandManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)brandWithURI:(id)a0 completion:(id /* block */)a1;
- (void)clearUnusedCachedLogos:(id /* block */)a0;
- (id)initWithCachingEnabled:(BOOL)a0 cacheURL:(id)a1 brandDataSourceWrapper:(id)a2;

@end
