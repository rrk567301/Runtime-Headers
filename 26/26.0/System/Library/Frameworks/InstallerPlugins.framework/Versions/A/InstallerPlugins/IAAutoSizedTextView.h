@class NSFont;

@interface IAAutoSizedTextView : NSTextField {
    NSFont *_startFont;
    BOOL _keepsTextCentered;
    double _stickySize;
    struct CGSize { double width; double height; } _visibleSize;
}

- (void)setObjectValue:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setStringValue:(id)a0;
- (void)setFont:(id)a0;
- (void)setString:(id)a0;
- (void)awakeFromNib;
- (void)recalculateSize;
- (void)setKeepsTextCentered:(BOOL)a0;
- (void)viewResized;

@end
