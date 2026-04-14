@class PTMetalContext, PTUtil, PTGuidedFilter, PTColorConversion, NSObject, PTMSRResize;
@protocol MTLTexture, OS_dispatch_queue, PTEffectPersonSegmentationProvider;

@interface PTEffectPersonSegmentation : NSObject {
    PTMetalContext *_metalContext;
    PTUtil *_ptUtil;
    PTGuidedFilter *_guidedFilterSegmentation;
    id<MTLTexture> _guideRGBAUpscaleSegmentation;
    int _lastRotation;
    struct CGSize { double width; double height; } _colorSize;
    NSObject<OS_dispatch_queue> *_asyncInitQueue;
    struct PTEffectPixelBufferDescriptor { struct CGSize { double width; double height; } size; unsigned int pixelFormatType; } _outputDescriptor;
    id<PTEffectPersonSegmentationProvider> _personSegmentationProvider;
    id<PTEffectPersonSegmentationProvider> _personSegmentationProviderRotated;
    struct __CVBuffer { } *_rotatedInputPixelBuffer;
    struct __CVBuffer { } *_rotated180InputPixelBuffer;
    id<MTLTexture> _unrotatedOutputSegmentation;
    id<MTLTexture> _unrotated180OutputSegmentation;
    PTColorConversion *_colorConversion;
    PTMSRResize *_msrColorPyramid;
}

@property long long rotatedNetworkState;

+ (unsigned long long)segmentationType;
+ (struct CGSize { double x0; double x1; })segmentationSizeForColorSize:(struct CGSize { double x0; double x1; })a0;
+ (struct PTEffectPixelBufferDescriptor { struct CGSize { double x0; double x1; } x0; unsigned int x1; })upscaledSegmentationMatteFormatForColorSize:(struct CGSize { double x0; double x1; })a0;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned int)reset;
- (id)debugTextures;
- (id)initWithMetalContext:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1 msrColorPyramid:(id)a2 prewarmOnly:(BOOL)a3 asyncInitQueue:(id)a4 sharedResources:(id)a5;
- (void)lazyInstantiateRotatedNetwork;
- (struct __CVBuffer { } *)rotateInput:(struct __CVBuffer { } *)a0 rotationDegrees:(int)a1;
- (id)rotateOutput:(id)a0 segmentationOutput:(id)a1 rotationDegrees:(int)a2;
- (int)runPersonSegmentationToOutPersonSegmentationMatteBuffer:(id)a0 inColor:(id)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 inSegmentationRGBA:(struct __CVBuffer { } *)a3 inSegmentationRGBATexture:(id)a4 outUpscaledSegmentation:(id)a5;

@end
