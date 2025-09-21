@interface ABGroupListView : NSOutlineView

- (id)dragImageForRowsWithIndexes:(id)a0 tableColumns:(id)a1 event:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (char)mouseDownCanMoveWindow;
- (void)restoreStateWithCoder:(id)a0;
- (void)selectAll:(id)a0;
- (char)validateUserInterfaceItem:(id)a0;
- (char)ab_isFirstResponderEditing;

@end
