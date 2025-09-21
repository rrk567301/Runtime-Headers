@class NSColor;

@interface VUIImageScaleDecorator : VUIImageDecorator

@property (nonatomic) struct CGSize { double width; double height; } scaleToSize;
@property (nonatomic) long long scaleMode;
@property (nonatomic) char centerGrowth;
@property (nonatomic) double focusedSizeIncrease;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) struct _VUICornerRadii { double topLeft; double topRight; double bottomLeft; double bottomRight; } cornerRadii;
@property (nonatomic) char cornerContinuous;
@property (copy, nonatomic) NSColor *bgColor;
@property (nonatomic) char preservesAlpha;
@property (nonatomic) char cropToFit;
@property (nonatomic) double upscaleAdjustment;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })expectedSize;
- (id)decoratorIdentifier;
- (id)initWithScaleToSize:(struct CGSize { double x0; double x1; })a0 scaleMode:(long long)a1;
- (char)needsAlphaForImage:(id)a0;
- (char)loaderCropToFit;
- (double)_focusedSizeIncreaseFactor;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_paddingAdjustedForUpscaling;
- (struct CGSize { double x0; double x1; })_scaleToSizeAdjustedForUpscaling;
- (id)decorate:(id)a0 scaledWithSize:(struct CGSize { double x0; double x1; })a1 croppedToFit:(char)a2;
- (id)initWithScaleToSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithScaleToSize:(struct CGSize { double x0; double x1; })a0 cropToFit:(char)a1;
- (struct CGSize { double x0; double x1; })loaderScaleToSize;

@end
