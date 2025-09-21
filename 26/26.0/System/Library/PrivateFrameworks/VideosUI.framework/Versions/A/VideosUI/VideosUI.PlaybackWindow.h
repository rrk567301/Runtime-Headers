@interface VideosUI.PlaybackWindow : NSWindow {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ trackingArea;
    void /* unknown type, empty encoding */ titleBarTask;
    void /* unknown type, empty encoding */ cancellables;
}

- (void)dealloc;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)mouseMoved:(id)a0;
- (void)vui_setRootViewController:(id)a0;

@end
