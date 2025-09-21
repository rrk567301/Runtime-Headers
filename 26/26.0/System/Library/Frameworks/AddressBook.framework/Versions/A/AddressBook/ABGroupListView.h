@interface ABGroupListView : NSOutlineView

- (void)selectAll:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)restoreStateWithCoder:(id)a0;
- (id)dragImageForRowsWithIndexes:(id)a0 tableColumns:(id)a1 event:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)ab_isFirstResponderEditing;

@end
