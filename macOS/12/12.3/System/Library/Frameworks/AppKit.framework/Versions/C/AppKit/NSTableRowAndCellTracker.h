@class NSTableView, _NSIntegerArray, NSMapTable;

@interface NSTableRowAndCellTracker : NSObject {
    _NSIntegerArray *_specifierComponents;
    NSMapTable *_mapTable;
    long long _deleteCount;
    long long _nextSpecifierComponent;
    long long _deleteForMoveIndex;
    long long _deleteForMoveShift;
    NSTableView *_tableView;
}

- (void)dealloc;
- (id)init;
- (id)initWithTableView:(id)a0;
- (long long)indexForSpecifierComponent:(long long)a0;
- (long long)specifierComponentForIndex:(long long)a0 registerIfNeeded:(BOOL)a1;
- (void)shiftIndex:(long long)a0 shiftAmount:(long long)a1 isDeleteForMove:(BOOL)a2;
- (void)unregisterCellsOfTableColumns:(id)a0;
- (void)unregisterCellsOfRowIndexes:(id)a0 columnIndexes:(id)a1;
- (void)removeAll;
- (long long)indexForSpecifierComponent:(long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeChildrenOfIndex:(long long)a0;
- (id)_elementSpecifiersForTableColumns:(id)a0;
- (void)getRegisteredSpecifierComponents:(long long *)a0 forIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertSpecifierComponents:(const long long *)a0 count:(unsigned long long)a1 atIndex:(long long)a2;
- (void)removeIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 shiftsResults:(BOOL)a1;
- (void)insertIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeChildrenOfIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
