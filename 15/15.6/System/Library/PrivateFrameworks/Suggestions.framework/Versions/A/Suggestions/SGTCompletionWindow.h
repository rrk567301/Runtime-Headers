@interface SGTCompletionWindow : NSWindow {
    char _initDone;
}

- (float)_backdropBleedAmount;
- (void)_setMouseMovedEventsEnabled:(char)a0;
- (char)accessibilityIsIgnored;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3 screen:(id)a4;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(char)a1 animate:(char)a2;

@end
