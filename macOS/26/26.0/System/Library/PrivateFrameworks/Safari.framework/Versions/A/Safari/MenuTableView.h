@protocol MenuTableViewDelegate;

@interface MenuTableView : NSTableView {
    BOOL _lastMousePositionWasOverList;
}

@property (weak) id<MenuTableViewDelegate> delegate;
@property (nonatomic) double cellViewHorizontalInset;

- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityIdentifier;
- (void)mouseExited:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)drawGridInClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfCellAtColumn:(long long)a0 row:(long long)a1;
- (BOOL)isAccessibilityEnabled;
- (void)mouseMoved:(id)a0;
- (id)_accessibilityDescription;
- (BOOL)_rowIsSelectableByUser:(long long)a0;
- (long long)_numberOfRowsSelectableByUser;

@end
