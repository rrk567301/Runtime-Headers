@interface SGTCompletionTableView : NSTableView {
    char _lastMousePositionWasOverList;
}

- (char)_accessibilityWantsToBeList;
- (id)_searchField;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (char)accessibilityIsIgnored;
- (void)drawRow:(long long)a0 clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (char)selectionShouldUsePrimaryColor;
- (id)_accessibilityDescription;
- (void)_performCancelForCell:(id)a0;
- (void)_performClickForCell:(id)a0;
- (long long)_rowFromMouseEvent:(id)a0;
- (char)_rowIsSelectableByUser:(long long)a0;
- (void)moveSelectionUpwards:(char)a0;

@end
