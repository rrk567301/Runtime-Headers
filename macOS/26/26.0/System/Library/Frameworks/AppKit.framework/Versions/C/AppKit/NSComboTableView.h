@interface NSComboTableView : NSTableView {
    long long _lastReturnedNumberOfRows;
}

+ (BOOL)_logErrorForNonStringIdentifier;

- (long long)numberOfRows;
- (id)initWithCoder:(id)a0;
- (BOOL)_accessibilityWantsToBeList;
- (BOOL)_addSourceListCellAttributesToCell:(id)a0 withData:(id)a1 selected:(BOOL)a2 emphasized:(BOOL)a3;
- (BOOL)_shouldBlurSelectionWhenCellBased;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;

@end
