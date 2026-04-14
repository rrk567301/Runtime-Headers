@class PKPassWindowController;

@interface PKChildWindow : NSWindow {
    PKPassWindowController *_windowAnimationController;
}

@property (retain) PKPassWindowController *passWindowController;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (BOOL)canBecomeKeyWindow;
- (void)mouseDragged:(id)a0;

@end
