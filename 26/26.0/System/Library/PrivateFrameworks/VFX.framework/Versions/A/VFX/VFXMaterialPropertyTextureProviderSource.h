@class NSString;
@protocol VFXMaterialPropertyTextureProvider, MTLTexture;

@interface VFXMaterialPropertyTextureProviderSource : VFXTextureSource <VFXMaterialPropertyTextureProviderHelper> {
    id<MTLTexture> _texture;
    struct __CFXEngineContext { } *_engineContext;
    id<VFXMaterialPropertyTextureProvider> _textureProvider;
}

@property (retain, nonatomic) id<VFXMaterialPropertyTextureProvider> textureProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)connectToProxy:(struct __CFXImageProxy { } *)a0;
- (id)cachedTextureWithURL:(id)a0 token:(id *)a1;
- (id)cachedTextureWithURL:(id)a0 token:(id *)a1 didFallbackToDefaultTexture:(BOOL *)a2;
- (id)metalTextureWithEngineContext:(struct __CFXEngineContext { } *)a0 textureSampler:(struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; unsigned char x6 : 8; unsigned char x7 : 7; unsigned char x8 : 1; })a1 nextFrameTime:(double *)a2 status:(struct { BOOL x0; BOOL x1; } *)a3;
- (void)renderWithEngineContext:(struct __CFXEngineContext { } *)a0 textureSampler:(struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; unsigned char x6 : 8; unsigned char x7 : 7; unsigned char x8 : 1; })a1 nextFrameTime:(double *)a2;

@end
