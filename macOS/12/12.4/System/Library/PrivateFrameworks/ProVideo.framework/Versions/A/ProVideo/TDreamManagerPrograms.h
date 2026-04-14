@class TDreamMaskBlend, TDreamGaussBlurExpressPassTwoOpt9, TDreamLookupFilterOpt, TDreamOutputBuffer, TDreamGaussBlurExpress, TDreamVignette, TDreamLookupFilter, TDreamColorStroke, TDreamBFBlurPassOne, TDreamColoricer, TDreamEdges, TDreamQuanticeOpt, TDreamBFBlurPassTwo, TDreamZoomOutFX, TDreamBFBlurPassTwoOpt, TDreamBFBlurPassOneOpt, TDreamGrayscale, TDreamGaussBlurExpressPassTwo, TDreamStrokeAndBlendOpt, TDreamColorStrokeOpt, TDreamStroke, TDreamDistortionFX, TDreamEdgesOpt, TDreamGaussBlurExpressOpt9, TDreamVignetteAndQuantice, TDreamStrokeAndBlend, TDreamBlend, TDreamSobelOpt, TDreamSobel;

@interface TDreamManagerPrograms : NSObject

@property (retain, nonatomic) TDreamMaskBlend *blendWithMask;
@property (retain, nonatomic) TDreamBFBlurPassOne *bfBlurPassOne;
@property (retain, nonatomic) TDreamBFBlurPassOneOpt *bfBlurPassOneOpt;
@property (retain, nonatomic) TDreamBFBlurPassTwo *bfBlurPassTwo;
@property (retain, nonatomic) TDreamBFBlurPassTwoOpt *bfBlurPassTwoOpt;
@property (retain, nonatomic) TDreamVignetteAndQuantice *quanticeFilter;
@property (retain, nonatomic) TDreamQuanticeOpt *quanticeFilterOpt;
@property (retain, nonatomic) TDreamSobel *sobelFilter;
@property (retain, nonatomic) TDreamSobelOpt *sobelFilterOpt;
@property (retain, nonatomic) TDreamBlend *blenderFilter;
@property (retain, nonatomic) TDreamEdgesOpt *edgesFilterOpt;
@property (retain, nonatomic) TDreamEdges *edgesFilter;
@property (retain, nonatomic) TDreamStroke *strokeFilter;
@property (retain, nonatomic) TDreamStrokeAndBlend *strokeAndBlendFilter;
@property (retain, nonatomic) TDreamStrokeAndBlendOpt *strokeAndBlendFilterOpt;
@property (retain, nonatomic) TDreamGaussBlurExpress *gaussFilter;
@property (retain, nonatomic) TDreamGaussBlurExpressPassTwo *gaussFilter2;
@property (retain, nonatomic) TDreamGaussBlurExpressOpt9 *gaussFilterOpt9;
@property (retain, nonatomic) TDreamGaussBlurExpressPassTwoOpt9 *gaussFilter2Opt9;
@property (retain, nonatomic) TDreamVignette *vigneteFilter;
@property (retain, nonatomic) TDreamZoomOutFX *zoomOutFx;
@property (retain, nonatomic) TDreamDistortionFX *distortionFx;
@property (retain, nonatomic) TDreamLookupFilter *lookupFilter;
@property (retain, nonatomic) TDreamLookupFilterOpt *lookupFilterOpt;
@property (retain, nonatomic) TDreamColoricer *colorizer;
@property (retain, nonatomic) TDreamGrayscale *grayScaletor;
@property (retain, nonatomic) TDreamColorStrokeOpt *colorStrokeFilterOpt;
@property (retain, nonatomic) TDreamColorStroke *colorStrokeFilter;
@property (retain, nonatomic) TDreamSobel *sobelFilterQ;
@property (retain, nonatomic) TDreamSobelOpt *sobelFilterQOpt;
@property (retain, nonatomic) TDreamGaussBlurExpress *extraGaussFilterQ;
@property (retain, nonatomic) TDreamGaussBlurExpressPassTwo *extraGaussFilter2Q;
@property (retain, nonatomic) TDreamGaussBlurExpressOpt9 *extraGaussFilterQOpt9;
@property (retain, nonatomic) TDreamGaussBlurExpressPassTwoOpt9 *extraGaussFilter2QOpt9;
@property (retain, nonatomic) TDreamOutputBuffer *outputBuffer;

- (void).cxx_destruct;

@end
