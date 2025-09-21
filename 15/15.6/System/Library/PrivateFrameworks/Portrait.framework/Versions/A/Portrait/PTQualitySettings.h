@class NSString;

@interface PTQualitySettings : NSObject {
    NSString *_description;
}

@property int quality;
@property int numberOfPatternCircles;
@property char rayMarch;
@property (readonly) char doDisparityUpsampling;
@property float disparityUpsampleFactor;
@property float disparityGuidedFilterEpsilon;
@property char doCenterDisparity;
@property char doFocusEdgeMask;
@property char doFirstLevelGaussianDownsample;
@property char doMacroApertureLimit;
@property float circleOfConfusionLimitForeground;
@property float circleOfConfusionLimitBackground;
@property char portraitPreviewDeadzone;
@property float renderDownscale;
@property char doIntermediate2XUpscale;
@property unsigned long long intermediatePixelFormat;
@property char useExportQualityNoise;

+ (id)createWithQuality:(int)a0 options:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)updateDescription;

@end
