@class NSColor;

@interface VUIImageBackgroundColorDecorator : VUIImageDecorator

@property (readonly, copy, nonatomic) NSColor *backgroundColor;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })expectedSize;
- (id)decoratorIdentifier;
- (id)initWithBackgroundColor:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1;
- (char)loaderCropToFit;
- (id)decorate:(id)a0 scaledWithSize:(struct CGSize { double x0; double x1; })a1 croppedToFit:(char)a2;
- (struct CGSize { double x0; double x1; })loaderScaleToSize;

@end
