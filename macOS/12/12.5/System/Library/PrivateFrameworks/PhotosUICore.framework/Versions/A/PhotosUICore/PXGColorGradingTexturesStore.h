@class NSCache, PXGColorLookupCube, NSObject;
@protocol OS_dispatch_queue, MTLDevice;

@interface PXGColorGradingTexturesStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSCache *_cachedTextures;
    PXGColorLookupCube *_placeholderCube;
}

@property (readonly, nonatomic) id<MTLDevice> device;

+ (id)colorGradingTextureStoreForDevice:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMetalDevice:(id)a0;
- (void)_createPlaceholderCube;
- (id)colorGradingTextureWithColorLookupCube:(id)a0;

@end
