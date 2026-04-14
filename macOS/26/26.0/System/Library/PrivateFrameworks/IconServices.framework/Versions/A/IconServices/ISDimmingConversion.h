@interface ISDimmingConversion : NSObject {
    struct CGImage { } *_cgImage;
    struct __CFData { } *_data;
    struct { int width; int height; int padding; unsigned int alphaInfo; void *ucharSamples; } _samples;
    int _width;
    int _height;
    int _numberOfSamples;
    BOOL _hasDimmingParameters;
    BOOL _isDimmable;
    float _highlightBrightnessAdjustmentFactor;
    BOOL _shouldAdjustHighlightBrightness;
    float _meanBrightnessAfterHighlightAdjustment;
    BOOL _shouldAdjustMeanBrightness;
    void *_ucharDimmed;
}

@property (nonatomic) float targetHighlightBrightnessLevel;
@property (nonatomic) float targetMeanBrightnessLevel;
@property (nonatomic) float minMeanBrightnessAdjustmentFactor;
@property (readonly, nonatomic) BOOL isDimmable;

- (id)initWithCGImage:(struct CGImage { } *)a0;
- (void)dealloc;
- (BOOL)_computeDimmedImage;
- (void)_computeDimmingParameters;
- (BOOL)_prepareSamplesIfNeeded;
- (struct CGImage { } *)createDimmedImage;

@end
