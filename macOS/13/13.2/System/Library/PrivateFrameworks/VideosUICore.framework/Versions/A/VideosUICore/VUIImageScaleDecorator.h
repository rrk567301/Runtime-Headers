@class NSColor;

@interface VUIImageScaleDecorator : VUIImageDecorator

@property (nonatomic) struct CGSize { double width; double height; } scaleToSize;
@property (nonatomic) long long scaleMode;
@property (nonatomic) BOOL centerGrowth;
@property (nonatomic) double focusedSizeIncrease;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) struct _VUICornerRadii { double topLeft; double topRight; double bottomLeft; double bottomRight; } cornerRadii;
@property (nonatomic) BOOL cornerContinuous;
@property (copy, nonatomic) NSColor *bgColor;
@property (nonatomic) BOOL preservesAlpha;
@property (nonatomic) BOOL cropToFit;
@property (nonatomic) double upscaleAdjustment;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })expectedSize;
- (id)initWithScaleToSize:(struct CGSize { double x0; double x1; })a0 scaleMode:(long long)a1;
- (id)decoratorIdentifier;
- (BOOL)needsAlphaForImage:(id)a0;
- (struct CGSize { double x0; double x1; })loaderScaleToSize;
- (BOOL)loaderCropToFit;
- (id)decorate:(id)a0 scaledWithSize:(struct CGSize { double x0; double x1; })a1 croppedToFit:(BOOL)a2;
- (id)initWithScaleToSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithScaleToSize:(struct CGSize { double x0; double x1; })a0 cropToFit:(BOOL)a1;
- (double)_focusedSizeIncreaseFactor;
- (struct CGSize { double x0; double x1; })_scaleToSizeAdjustedForUpscaling;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_paddingAdjustedForUpscaling;
- (void)_applyCornerMaskForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toContext:(struct CGContext { } *)a1;

@end
