@class NSColor, CALayer;

@interface AMSUICommonControl : NSControl

@property (getter=isTrackingMouse) char trackingMouse;
@property (getter=isUserInteractionEnabled) char userInteractionEnabled;
@property (retain) NSColor *backgroundColor;
@property (retain) CALayer *layer;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)_setup;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(long long)a2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (void)layoutSubviews;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)setNeedsLayout;

@end
