@class NSColor;

@interface NSBackgroundColorView : NSView {
    NSColor *_backgroundColor;
}

@property (copy) NSColor *backgroundColor;

- (void)dealloc;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_preferredAppearance;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setTrackingAreasDirty:(int)a0;
- (int)_trackingAreasDirty;

@end
