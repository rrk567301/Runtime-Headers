@class QLBubble;

@interface QLBubbleWindow : NSPanel {
    double _absolutePosition;
}

@property (weak) QLBubble *bubble;

- (void).cxx_destruct;
- (char)_canBecomeSecondaryKeyWindow;
- (id)_cornerMask;
- (char)_ownerOnly;
- (char)_presenterOnly;
- (char)canBecomeKeyWindow;
- (void)endEditingFor:(id)a0;
- (id)fieldEditor:(char)a0 forObject:(id)a1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3;
- (char)isKeyWindow;
- (void)makeKeyAndOrderFront:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(char)a1;
- (id)standardWindowButton:(unsigned long long)a0;

@end
