@class PXGMetalRenderContext, PXGColorLookupCube, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface PXGColorGradingTexturesStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSCache *_cachedTextures;
    PXGColorLookupCube *_placeholderCube;
    PXGMetalRenderContext *_metalRenderContext;
}

+ (id)colorGradingTextureStoreForContext:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMetalContext:(id)a0;
- (void)_createPlaceholderCube;
- (id)colorGradingTextureWithColorLookupCube:(id)a0;

@end
