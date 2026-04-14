@class NSColor, NSBackgroundColorView;

@interface NSTableDeleteScanLineView : NSView {
    NSBackgroundColorView *_topLineView;
    NSBackgroundColorView *_bottomLineView;
}

@property (copy) NSColor *deleteLineColor;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)deleteLineColor;
- (void)setDeleteLineColor:(id)a0;

@end
