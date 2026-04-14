@class NSMutableDictionary;
@protocol ABPeoplePickerTableViewDataSource, ABPeoplePickerTableViewDelegate;

@interface ABPeoplePickerTableView : NSTableView {
    int _subrowSelectionBehavior;
    NSMutableDictionary *_rowToSelectedSubrowIndexesMap;
}

@property id<ABPeoplePickerTableViewDelegate> delegate;
@property id<ABPeoplePickerTableViewDataSource> dataSource;
@property int subrowSelectionBehavior;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)awakeFromNib;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)selectRowIndexes:(id)a0 byExtendingSelection:(BOOL)a1;
- (BOOL)canDragRowsWithIndexes:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)dragImageForRowsWithIndexes:(id)a0 tableColumns:(id)a1 event:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (void)deselectAll:(id)a0;
- (void)textDidEndEditing:(id)a0;
- (void)highlightSelectionInClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_accessibilityTableRow:(long long)a0;
- (void)selectSubrow:(long long)a0 ofRow:(long long)a1 byExtendingSelection:(BOOL)a2;
- (long long)propertyColumnIndex;
- (long long)subRowIndexAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isSubrowSelected:(long long)a0 ofRow:(long long)a1;
- (void)deselectSubrow:(long long)a0 ofRow:(long long)a1;
- (id)_selectedSubrowsOfRow:(long long)a0;
- (id)selectedSubrowIndexesForRow:(long long)a0;

@end
