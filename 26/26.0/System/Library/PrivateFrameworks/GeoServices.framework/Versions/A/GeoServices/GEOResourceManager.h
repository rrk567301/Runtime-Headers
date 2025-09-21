@class GEOResourceManifestConfiguration;

@interface GEOResourceManager : NSObject {
    GEOResourceManifestConfiguration *_configuration;
}

+ (id)sharedManagerForConfiguration:(id)a0;
+ (id)sharedManager;

- (id)allResourceNames;
- (void)dataForSignedResourceWithName:(id)a0 fallbackBundle:(id)a1 fallbackNameHandler:(id /* block */)a2 resultHandler:(id /* block */)a3;
- (BOOL)isDevResourceWithName:(id)a0 fallbackBundle:(id)a1 fallbackNameHandler:(id /* block */)a2;
- (id)pathForResourceWithName:(id)a0 fallbackBundle:(id)a1;
- (id)pathForResourceWithName:(id)a0 fallbackBundle:(id)a1 fallbackNameHandler:(id /* block */)a2;
- (id)dataForResourceWithName:(id)a0 fallbackBundle:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)dataForResourceWithName:(id)a0 fallbackBundle:(id)a1 fallbackNameHandler:(id /* block */)a2;

@end
