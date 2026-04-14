@class NSString, NSColor, CALayer;

@interface AMSUICommonView : NSView

@property (readonly) NSString *accessibilityElementLabel;
@property double alpha;
@property (getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (retain) NSColor *backgroundColor;
@property (retain) CALayer *layer;
@property (retain) NSColor *tintColor;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollWheel:(id)a0;
- (BOOL)isFlipped;
- (void)_setup;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)bringSubviewToFront:(id)a0;
- (void)sendSubviewToBack:(id)a0;

@end
