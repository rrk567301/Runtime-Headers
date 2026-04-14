@interface CompletionListTableView : NSTableView {
    BOOL _lastMousePositionWasOverList;
}

@property (nonatomic) double cellViewHorizontalInset;

- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityEnabled;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfCellAtColumn:(long long)a0 row:(long long)a1;
- (id)_accessibilityDescription;
- (void)drawGridInClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_rowIsSelectableByUser:(long long)a0;

@end
