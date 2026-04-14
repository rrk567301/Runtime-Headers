@class PTMetalContext, NSArray, FigM2MController, NSMutableArray;

@interface PTMSRResize : NSObject {
    FigM2MController *_msrController;
    struct __CVBuffer *_outputPixelbuffer[10];
    struct __IOSurface *_outputIOSurface[10];
    NSArray *_pyramidRGBA;
    int _allocatedIOSurfaces;
    struct __CFDictionary { } *_runOptions;
    struct CGColorSpace { } *_csRGBLinear;
    struct CGColorSpace { } *_csSRGB;
    PTMetalContext *_metalContext;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _inputSize;
    BOOL _hasMSR;
    BOOL _rotateTargetPixelBuffer;
    BOOL _sRGB;
    NSMutableArray *_additionalSteps;
}

@property BOOL enablePyramidDownsampling;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)addAdditionalOutput:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 allowCompressed:(BOOL)a1;
- (id)addAdditionalOutput:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 allowCompressed:(BOOL)a1 pixelFormat:(unsigned int)a2 highQuality:(BOOL)a3;
- (id)computeDownsamplingStepsWithInputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 targetSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (unsigned int)downsample:(struct __CVBuffer { } *)a0;
- (int)downsampleToLayer:(int)a0 source:(struct __CVBuffer { } *)a1 dest:(struct __CVBuffer { } *)a2;
- (id)initWithMetalContext:(id)a0 inputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 targetSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 rotateTargetPixelBuffer:(BOOL)a3 compressedIntermediates:(BOOL)a4 sRGB:(BOOL)a5 sharedResources:(id)a6;
- (id)pyramidRGBA;
- (id)targetRGBA;
- (struct __CVBuffer { } *)targetRGBAPixelBuffer;
- (unsigned int)transform:(SEL)a0 crop:(struct __CVBuffer { } *)a1 rotationDegree:(int)a2 toDest:(struct __CVBuffer { } *)a3 synchronous:(BOOL)a4;

@end
