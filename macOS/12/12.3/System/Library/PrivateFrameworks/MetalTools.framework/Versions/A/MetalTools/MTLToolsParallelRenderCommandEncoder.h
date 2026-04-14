@class NSString;
@protocol MTLDevice;

@interface MTLToolsParallelRenderCommandEncoder : MTLToolsCommandEncoder <MTLParallelRenderCommandEncoder>

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endEncoding;
- (id)renderCommandEncoder;
- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setDepthStoreAction:(unsigned long long)a0;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (BOOL)isMemorylessRender;
- (void)setColorStoreActionOptions:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setDepthStoreActionOptions:(unsigned long long)a0;
- (void)setStencilStoreActionOptions:(unsigned long long)a0;

@end
