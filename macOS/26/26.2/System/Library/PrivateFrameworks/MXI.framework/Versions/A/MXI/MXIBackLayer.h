@protocol MTLTexture, MTLComputePipelineState;

@interface MXIBackLayer : NSObject {
    id<MTLComputePipelineState> _concatRGBD;
    id<MTLComputePipelineState> _downscaleAlphtaWeighted;
    id<MTLComputePipelineState> _backLayerBlend;
    id<MTLTexture> _backLayerTexture;
    unsigned long long _lods;
}

@property (readonly, nonatomic) id<MTLTexture> tileTexture;

- (void).cxx_destruct;
- (void)createBackLayerWthCommandBuffer:(id)a0;
- (id)initWithDevice:(id)a0 tileSize:(unsigned int)a1 tileMips:(unsigned int)a2 downsampleLODs:(unsigned int)a3 pixelFormat:(unsigned long long)a4 failOnBinaryArchiveMiss:(BOOL)a5 error:(id *)a6;
- (void)processWthCommandBuffer:(id)a0 colorTexture:(id)a1 depthTexture:(id)a2;

@end
