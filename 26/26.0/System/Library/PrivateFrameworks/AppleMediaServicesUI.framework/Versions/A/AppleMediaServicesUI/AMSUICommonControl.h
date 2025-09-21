@class NSColor, CALayer;

@interface AMSUICommonControl : NSControl

@property (getter=isTrackingMouse) BOOL trackingMouse;
@property (getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (retain) NSColor *backgroundColor;
@property (retain) CALayer *layer;
@property (retain) NSColor *tintColor;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)setNeedsLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setup;
- (void)layout;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(long long)a2;
- (BOOL)isFlipped;
- (id)init;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)scrollWheel:(id)a0;

@end
