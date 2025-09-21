@protocol MTLComputePipelineState, MTLTexture, MTLBuffer;

@interface PTStudioLightColorCorrectionAndConversion : NSObject {
    id<MTLComputePipelineState> _studioLightColorCorrectionRGBToYUV;
    id<MTLTexture> _cubeTexture;
    id<MTLBuffer> _rgbMinMax;
    id<MTLTexture> _correctionColorCube;
}

- (void).cxx_destruct;
- (unsigned int)initializeCubeMap:(id)a0 inputTexture:(id)a1;
- (id)cubeTexture;
- (id)initWithMetalContext:(id)a0 correctionColorCube:(id)a1;
- (id)rgbMinMax;

@end
