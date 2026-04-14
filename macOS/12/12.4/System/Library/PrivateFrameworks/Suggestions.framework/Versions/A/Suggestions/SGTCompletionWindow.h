@interface SGTCompletionWindow : NSWindow {
    BOOL _initDone;
}

- (BOOL)accessibilityIsIgnored;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1 animate:(BOOL)a2;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3 screen:(id)a4;
- (float)_backdropBleedAmount;
- (void)_setMouseMovedEventsEnabled:(BOOL)a0;

@end
