@class NSView;

@interface SearchUIFeatheredBlurView : NSView

@property (retain) NSView *gradientView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameForGradient;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
