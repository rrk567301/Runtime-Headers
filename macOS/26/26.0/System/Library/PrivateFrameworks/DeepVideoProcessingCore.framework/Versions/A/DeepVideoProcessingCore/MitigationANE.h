@class NSDictionary, GGMMetalToolBox;
@protocol MTLTexture, MTLComputePipelineState;

@interface MitigationANE : VEMetalBase {
    GGMMetalToolBox *_metalToolbox;
    NSDictionary *_repairParameters;
    struct { int width; int height; } _imageDimensions;
    int _espressoEngine;
    void *_espressoContext;
    void *_espressoPlan;
    struct { void *plan; int network_index; } _espressoNetwork;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _espressoInputImageBuffer;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _espressoInputMaskBuffer;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _espressoOutputBuffer;
    void /* unknown type, empty encoding */ _inputROI;
    struct RepairTileConfiguration { void /* unknown type, empty encoding */ size; } _tileConfig;
    struct RepairTileBlendingParams { float wRepairedY; float wRepairedUV; } _blendingParams;
    int _maxRoiWidth;
    int _maxRoiHeight;
    int _netSize;
    id<MTLTexture> _tileInputImageTexture;
    id<MTLComputePipelineState> _pipelineStates[9];
    struct __CVMetalTextureCache { } *_cvMetalTextureCacheRef;
    struct __CVBuffer { } *_tileInputPixelBuffer;
    struct __CVBuffer { } *_tileOutputPixelBufferLr;
    struct __CVBuffer { } *_tileOutputPixelBuffer;
}

- (int)prewarm;
- (int)resetState;
- (long long)setup;
- (void)dealloc;
- (int)_compileShaders;
- (int)finishProcessing;
- (int)purgeResources;
- (int)process;
- (void).cxx_destruct;
- (int)prepareToProcess:(unsigned int)a0;
- (id)_cachedTexturesFromPixelBuffer:(struct __CVBuffer { } *)a0 usage:(unsigned long long)a1;
- (void)_clampGhostROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (long long)_copyImageTileFromPixelBuffer:(struct __CVBuffer { } *)a0 mergeWithMask:(id)a1 outputTilePixelBuffer:(struct __CVBuffer { } *)a2 commandBuffer:(id)a3;
- (long long)_copyImageTileFromPixelBuffer:(struct __CVBuffer { } *)a0 outputImageTileTexture:(id)a1 commandBuffer:(id)a2;
- (long long)_pasteRepairedTile:(struct __CVBuffer { } *)a0 inputTileTexture:(id)a1 blendingMask:(id)a2 outputPixelBuffer:(struct __CVBuffer { } *)a3 commandBuffer:(id)a4;
- (long long)_repair:(SEL)a0 outputBuf:(struct __CVBuffer { } *)a1 ghostROI:(struct __CVBuffer { } *)a2 inputROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 repairMask:(struct __CVBuffer { } *)a4 blendMask:(struct __CVBuffer { } *)a5;
- (id)initWithMetalContext:(id)a0 commandQueue:(id)a1 imageDimensions:(struct { int x0; int x1; })a2;
- (id)initWithMetalContext:(id)a0 commandQueue:(id)a1 imageDimensions:(struct { int x0; int x1; })a2 netSize:(int)a3 metalToolBox:(id)a4;
- (long long)process:(struct __CVBuffer { } *)a0 outputBuf:(struct __CVBuffer { } *)a1 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 repairMask:(struct __CVBuffer { } *)a3 blendMask:(struct __CVBuffer { } *)a4 wRepairedY:(float)a5 wRepairedUV:(float)a6;

@end
