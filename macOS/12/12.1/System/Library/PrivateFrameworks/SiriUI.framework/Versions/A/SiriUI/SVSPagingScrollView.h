@class NSArray;

@interface SVSPagingScrollView : SiriUIScrollView

@property (readonly) NSArray *documentSubviews;

- (void)layout;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)insertSubview:(id)a0 atIndex:(long long)a1;
- (void)scrollToSubview:(id)a0 animated:(BOOL)a1;

@end
