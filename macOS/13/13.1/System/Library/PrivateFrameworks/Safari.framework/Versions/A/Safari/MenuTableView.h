@interface MenuTableView : NSTableView {
    BOOL _lastMousePositionWasOverList;
}

@property (nonatomic) double cellViewHorizontalInset;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityEnabled;
- (id)_accessibilityDescription;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfCellAtColumn:(long long)a0 row:(long long)a1;
- (void)drawGridInClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_rowIsSelectableByUser:(long long)a0;

@end
