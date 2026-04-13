@class NSColor, CALayer;

@interface AMSUICommonButton : NSButton

@property (retain) NSColor *backgroundColor;
@property (retain) CALayer *layer;
@property (copy) NSColor *tintColor;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setup;

@end
