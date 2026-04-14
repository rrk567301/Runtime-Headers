@interface NSComboTableView : NSTableView {
    long long _lastReturnedNumberOfRows;
}

+ (BOOL)_logErrorForNonStringIdentifier;

- (id)initWithCoder:(id)a0;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;
- (long long)numberOfRows;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)_shouldBlurSelectionWhenCellBased;
- (BOOL)_addSourceListCellAttributesToCell:(id)a0 withData:(id)a1 selected:(BOOL)a2 emphasized:(BOOL)a3;
- (BOOL)_accessibilityWantsToBeList;

@end
