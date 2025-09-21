@interface GameCenterUICore.GameOverlayHostingWindow : NSPanel <NSWindowDelegate> {
    void /* unknown type, empty encoding */ _canBecomeKey;
}

@property (nonatomic, readonly) char hostsLayersInWindowServer;
@property (nonatomic, readonly) char canBecomeKeyWindow;
@property (nonatomic, readonly) char canBecomeMainWindow;

- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(char)a1;

@end
