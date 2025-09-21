@class NSString;

@interface _SCNCoderMaterialPropertyTextureProviderHelper : NSObject <SCNMaterialPropertyTextureProviderHelper> {
    struct __C3DEngineContext { } *_engineContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)cachedTextureWithURL:(id)a0 token:(id *)a1;
- (id)cachedTextureWithURL:(id)a0 token:(id *)a1 didFallbackToDefaultTexture:(BOOL *)a2;

@end
