@class NSString, NSColor, CALayer;

@interface AMSUICommonView : NSView

@property (readonly) NSString *accessibilityElementLabel;
@property double alpha;
@property (getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (retain) NSColor *backgroundColor;
@property (retain) CALayer *layer;
@property (retain) NSColor *tintColor;

- (id)accessibilityLabel;
- (void)setNeedsLayout;
- (void)_setup;
- (void)mouseDown:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)bringSubviewToFront:(id)a0;
- (void)layout;
- (void)layoutSubviews;
- (void)sendSubviewToBack:(id)a0;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)init;
- (void)scrollWheel:(id)a0;

@end
