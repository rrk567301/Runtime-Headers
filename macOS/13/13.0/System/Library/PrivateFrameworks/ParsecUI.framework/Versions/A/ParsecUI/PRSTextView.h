@interface PRSTextView : PRSVibrantTextView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } exclusionRect;
@property (nonatomic) struct CGSize { double width; double height; } exclusionMargin;
@property (nonatomic) double lineSpacing;

- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (id)embeddedImageView;

@end
