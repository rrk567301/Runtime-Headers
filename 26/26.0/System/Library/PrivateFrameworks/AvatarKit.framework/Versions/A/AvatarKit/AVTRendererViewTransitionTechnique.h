@class NSString, AVTMetalHelper;
@protocol MTLTexture, MTLRenderPipelineState;

@interface AVTRendererViewTransitionTechnique : NSObject <AVTRendererTechnique> {
    BOOL _viewIsOpaque;
    float _framebufferTextureOpacity;
    id<MTLTexture> _snapshotTexture;
    AVTMetalHelper *_helper;
    id<MTLRenderPipelineState> _renderPipelineState;
    struct { unsigned long long color0PixelFormat; unsigned long long depthPixelFormat; BOOL colorBlendingEnabled; unsigned long long colorRGBBlendOperation; unsigned long long colorSourceRGBBlendFactor; unsigned long long colorDestinationRGBBlendFactor; unsigned long long colorAlphaBlendOperation; unsigned long long colorSourceAlphaBlendFactor; unsigned long long colorDestinationAlphaBlendFactor; NSString *vertexFunctionName; NSString *fragmentFunctionName; unsigned long long rasterSampleCount; } _renderPipelineStateDescriptor;
}

@property (nonatomic) float framebufferTextureOpacity;
@property (retain, nonatomic) id<MTLTexture> snapshotTexture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeTechniqueCommandsForRenderer:(id)a0 atTime:(double)a1 helper:(id)a2;
- (id)initWithWorldRenderer:(id)a0;
- (void)rebuildRenderPipelineStateIfNeededForPixelFormat:(unsigned long long)a0;
- (BOOL)techniqueIsActive;
- (BOOL)techniqueUsesExtraRenderTargetForRenderer:(id)a0 pixelFormat:(unsigned long long *)a1;
- (BOOL)techniqueUsesSpecificMainPassClearColorForRenderer:(id)a0 clearColor:(void *)a1;

@end
