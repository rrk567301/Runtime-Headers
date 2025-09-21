@class NSArray, NSString, NSDictionary, MTColor;
@protocol MTRecipeMaterialSettingsProviding;

@interface MTMaterialSettingsInterpolator : NSObject {
    double _previousWeighting;
}

@property (nonatomic) double weighting;
@property (readonly, nonatomic, getter=isWeightingChanging) char weightingChanging;
@property (retain, nonatomic) id<MTRecipeMaterialSettingsProviding> finalSettings;
@property (retain, nonatomic) id<MTRecipeMaterialSettingsProviding> initialSettings;
@property (readonly, nonatomic, getter=isBackdropRequiredEver) char backdropRequiredEver;
@property (readonly, nonatomic, getter=isBackdropRequiredInitially) char backdropRequiredInitially;
@property (readonly, nonatomic, getter=isBackdropRequiredFinally) char backdropRequiredFinally;
@property (readonly, nonatomic, getter=isOverlay) char overlay;
@property (readonly, nonatomic, getter=isBlurEnabled) char blurEnabled;
@property (readonly, nonatomic, getter=isLuminanceEnabled) char luminanceEnabled;
@property (readonly, nonatomic, getter=isSaturationEnabled) char saturationEnabled;
@property (readonly, nonatomic, getter=isBrightnessEnabled) char brightnessEnabled;
@property (readonly, nonatomic, getter=isColorMatrixEnabled) char colorMatrixEnabled;
@property (readonly, nonatomic, getter=isTintEnabled) char tintEnabled;
@property (readonly, nonatomic, getter=isZoomEnabled) char zoomEnabled;
@property (readonly, nonatomic, getter=isCurvesEnabled) char curvesEnabled;
@property (readonly, nonatomic, getter=isAverageColorEnabledEver) char averageColorEnabledEver;
@property (readonly, nonatomic) double blurRadius;
@property (readonly, nonatomic) double luminanceAmount;
@property (readonly, copy, nonatomic) NSArray *luminanceValues;
@property (readonly, nonatomic) double saturation;
@property (readonly, nonatomic) double brightness;
@property (readonly, nonatomic) struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; } colorMatrix;
@property (readonly, nonatomic) double tintAlpha;
@property (readonly, nonatomic) double zoom;
@property (readonly, nonatomic) double backdropScale;
@property (readonly, copy, nonatomic) NSString *blurInputQuality;
@property (readonly, nonatomic, getter=isBlurAtEnd) char blurAtEnd;
@property (readonly, copy, nonatomic) MTColor *tintColor;
@property (readonly, copy, nonatomic) NSDictionary *curvesValues;
@property (readonly, nonatomic, getter=isAverageColorEnabled) char averageColorEnabled;
@property (copy, nonatomic) id /* block */ blurRadiusTransformer;

+ (id)_filteringProtocolGetterNames;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (double)_floatPropertyValueForProperty:(id)a0;
- (id)_averageColorEnabledWithSettings:(id)a0;
- (id)_backdropScaleWithSettings:(id)a0;
- (id)_blurRadiusWithSettings:(id)a0;
- (id)_brightnessWithSettings:(id)a0;
- (id)_colorMatrixColorWithSettings:(id)a0 alpha:(double)a1;
- (id)_colorMatrixWithSettings:(id)a0;
- (id)_colorWithGetterBlock:(id /* block */)a0;
- (id)_filteringProperty:(id)a0 withSettings:(id)a1;
- (double)_floatPropertyValueForProperty:(id)a0 withTransformer:(id /* block */)a1;
- (char)_isBackdropRequiredWithSettings:(id)a0;
- (char)_isBackdropRequiredWithSubSettings:(id)a0;
- (char)_isPropertyEnabled:(id)a0 consideringWeighting:(char)a1;
- (char)_isTintEnabledWithSettings:(id)a0;
- (id)_luminanceAmountWithSettings:(id)a0;
- (id)_luminanceInputValues;
- (id)_propertyValueForProperty:(id)a0 withTransformer:(id /* block */)a1;
- (id)_saturationWithSettings:(id)a0;
- (id)_tintAlphaWithSettings:(id)a0;
- (id)_zoomWithSettings:(id)a0;
- (void)finalizeWeighting;
- (id)initialSettingsInterpolator;
- (struct CGImage { } *)variableBlurInputMask;

@end
