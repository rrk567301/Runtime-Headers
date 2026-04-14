@class PTUtil, NSString, PTDisparityUpscale, PTRenderDebugLayer;
@protocol RenderingIntegration, MTLLibrary, MTLHeap, MTLPipelineLibrary, MTLDeviceSPI;

@interface PTRenderPipeline : NSObject {
    long long _debugRendering;
    PTRenderDebugLayer *_debugLayer;
    id<RenderingIntegration> _renderIntegration;
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrary> _pipelineLibrary;
    id<MTLHeap> _resourceHeap;
    BOOL _inputOutputUseRGBA;
    PTUtil *_util;
    struct CGSize { double width; double height; } _colorInputSize;
    struct CGSize { double width; double height; } _colorOutputSizeFinal;
    struct CGSize { double width; double height; } _colorOutputSizeCropped;
    PTDisparityUpscale *_disparityUpscale;
    NSString *_description;
}

@property (readonly) unsigned long long activeVersion;

+ (unsigned long long)latestVersion;
+ (BOOL)isMetalDeviceSupported:(id)a0;
+ (int)prewarmForMediaserverd;
+ (int)prewarmWithDescriptor:(id)a0;
+ (Class)classForVersion:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (void)prewarm;
- (id)initWithDescriptor:(id)a0;
- (int)encodeRenderTo:(id)a0 withRenderRequest:(id)a1;
- (id)createRenderStateWithQuality:(int)a0;
- (unsigned long long)minimumResourceHeapSize;
- (void)setResourceHeap:(id)a0;
- (void)updateDescription;
- (void)adjustScissorRect:(id)a0;
- (void)setInternalResourceHeap;
- (id)debugLayer;

@end
