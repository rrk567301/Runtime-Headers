@class NSArray, PTMetalContext;
@protocol MTLTexture, MTLComputePipelineState;

@interface PTPyramid : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _downscaleGaussian3x3;
    id<MTLComputePipelineState> _updateLevel0FromRGBA[9];
    id<MTLComputePipelineState> _updateLevel0FromYUV[9];
    id<MTLComputePipelineState> _updateLevel0and1FromRGBA[9];
    id<MTLComputePipelineState> _updateLevel0and1FromYUV[9];
    BOOL _skipFullSizeLayer;
    BOOL _doFirstLevelGaussianDownsample;
}

@property (retain, nonatomic) id<MTLTexture> mipmapTexture;
@property (retain, nonatomic) NSArray *mipmapLevels;

- (void).cxx_destruct;
- (id)findMipmapLevelLargerThan:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)findMipmapLevelLargerThan:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 fromLevel:(int)a1;
- (id)initWithMetalContext:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1 pixelFormat:(unsigned long long)a2 skipFullSizeLayer:(BOOL)a3 doFirstLevelGaussianDownsample:(BOOL)a4 mipmapLevelCount:(int)a5;
- (int)updatePyramid:(id)a0 inPTTexture:(id)a1;
- (int)updatePyramid:(id)a0 offset:(int)a1;
- (int)updatePyramid:(id)a0 offset:(int)a1 samplingRadius:(float)a2;

@end
