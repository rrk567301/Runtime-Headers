@class NSColor, CALayer;

@interface AMSUICommonControl : NSControl

@property (getter=isTrackingMouse) BOOL trackingMouse;
@property (getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (retain) NSColor *backgroundColor;
@property (retain) CALayer *layer;
@property (retain) NSColor *tintColor;

- (void)mouseUp:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(long long)a2;
- (void)layout;
- (id)init;
- (void)mouseDragged:(id)a0;
- (void)_setup;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)mouseDown:(id)a0;
- (void)layoutSubviews;
- (void)scrollWheel:(id)a0;

@end
