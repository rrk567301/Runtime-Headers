@interface NSSourceListBackgroundView : NSView

- (id)initWithCoder:(id)a0;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_windowChangedKeyState;
- (void)_setTrackingAreasDirty:(int)a0;
- (int)_trackingAreasDirty;
- (id)_cuiOptions;

@end
