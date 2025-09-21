@class PTMetalContext, PTGuidedFilter, PTColorConversion, PTMSRResize;
@protocol MTLTexture, PTEffectPersonSegmentation;

@interface PTEffectPersonSegmentation : NSObject {
    PTMetalContext *_metalContext;
    PTGuidedFilter *_guidedFilterSegmentation;
    id<MTLTexture> _guideRGBAUpscaleSegmentation;
    struct PTEffectPixelBufferDescriptor { struct CGSize { double width; double height; } size; unsigned int pixelFormatType; } _outputDescriptor;
    id<PTEffectPersonSegmentation> _personSegmentation;
    PTColorConversion *_colorConversion;
    PTMSRResize *_msrColorPyramid;
}

+ (unsigned long long)segmentationType;
+ (struct CGSize { double x0; double x1; })segmentationSizeForColorSize:(struct CGSize { double x0; double x1; })a0;
+ (struct PTEffectPixelBufferDescriptor { struct CGSize { double x0; double x1; } x0; unsigned int x1; })upscaledSegmentationMatteFormatForColorSize:(struct CGSize { double x0; double x1; })a0;

- (unsigned int)reset;
- (void).cxx_destruct;
- (id)debugTextures;
- (id)initWithMetalContext:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1 msrColorPyramid:(id)a2 cvmNetwork:(id)a3 effectQuality:(long long)a4 prewarmOnly:(BOOL)a5 sharedResources:(id)a6;
- (int)runPersonSegmentationToOutPersonSegmentationMatteBuffer:(id)a0 inColor:(id)a1 inSegmentationRGBA:(struct __CVBuffer { } *)a2 inSegmentationRGBATexture:(id)a3 outUpscaledSegmentation:(id)a4;

@end
