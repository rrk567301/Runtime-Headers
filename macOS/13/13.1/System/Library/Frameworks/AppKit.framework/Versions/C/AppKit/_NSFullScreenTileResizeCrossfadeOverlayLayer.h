@class CALayer, _NSFullScreenTileResizeCrossfadeOverlayWindow;

@interface _NSFullScreenTileResizeCrossfadeOverlayLayer : CALayer {
    unsigned long long _tileID;
    unsigned long long _parentSpaceID;
    _NSFullScreenTileResizeCrossfadeOverlayWindow *_window;
    BOOL _active;
    CALayer *_windowContentLayer;
    BOOL _includeBorder;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _tileFrame;
}

- (void)dealloc;
- (id)initWithTileID:(unsigned long long)a0 parentSpaceID:(unsigned long long)a1 tileFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 includeBorder:(BOOL)a3 window:(id)a4;
- (void)setWindowContents:(id)a0;
- (void)addWindowsWithIDs:(id)a0 lazyCapture:(BOOL)a1;
- (unsigned long long)tileID;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tileFrame;
- (void)resizeForTileFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
