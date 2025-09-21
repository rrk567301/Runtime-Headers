@interface ICTableScrollView : ICMForwardVerticalScrollEventsScrollView

+ (char)isCompatibleWithResponsiveScrolling;

- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAccessibilityElement;
- (void)contentViewBoundsDidChange:(id)a0;

@end
