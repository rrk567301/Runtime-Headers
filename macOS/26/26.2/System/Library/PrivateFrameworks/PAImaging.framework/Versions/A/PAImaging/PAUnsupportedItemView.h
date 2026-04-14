@class NSImage;

@interface PAUnsupportedItemView : PAImageItemView

@property (retain) NSImage *placeholderImage;

- (void)updateLayer;
- (void).cxx_destruct;
- (void)setImages:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;

@end
