@class NSImage;

@interface CalUILayerBackedView : NSView

@property (retain) NSImage *image;
@property struct CGSize { double width; double height; } contentSize;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsCenter;
@property char settableIsOpaque;
@property (nonatomic) char overrideAllowsVibrancy;
@property (nonatomic) char overrideAllowsVibrancyValue;
@property char acceptsFirstResponderStatus;
@property (copy) id /* block */ updateLayerBlock;

+ (id)view;
+ (void)disableAnimatedActionsForLayer:(id)a0;
+ (void)disableAnimatedActionsForLayer:(id)a0 excludingPosition:(char)a1;
+ (void)disableAnimatedActionsForLayer:(id)a0 excludingPosition:(char)a1 excludingBounds:(char)a2;
+ (void)updateContentsAttributesForView:(id)a0 image:(id)a1 contentCenter:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)viewWithColor:(id)a0 isOpaque:(char)a1;
+ (id)viewWithImage:(id)a0;
+ (id)viewWithImage:(id)a0 isOpaque:(char)a1;
+ (id)viewWithSRGBRed:(double)a0 green:(double)a1 blue:(double)a2;
+ (id)viewWithSRGBRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;

- (void).cxx_destruct;
- (char)acceptsFirstMouse:(id)a0;
- (char)acceptsFirstResponder;
- (char)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImage:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (char)isAccessibilityElement;
- (char)isOpaque;
- (void)setCornerRadius:(double)a0;
- (void)setMaskedCorners:(unsigned long long)a0;
- (void)updateLayer;
- (void)setContentsImage:(id)a0 contentCenter:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)disableAnimatedLayerActions;
- (id)initWithColor:(id)a0 isOpaque:(char)a1;
- (id)initWithImage:(id)a0 isOpaque:(char)a1;
- (id)initWithSRGBRed:(double)a0 green:(double)a1 blue:(double)a2;
- (id)initWithSRGBRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)setContentsBackgroundColor:(id)a0;
- (void)setContentsImage:(id)a0;
- (void)setContentsImageImmediate:(id)a0;
- (void)setContentsImageImmediate:(id)a0 contentCenter:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setOverrideAllowsVibrancy:(char)a0 value:(char)a1;
- (void)updateContentsAttributes;

@end
