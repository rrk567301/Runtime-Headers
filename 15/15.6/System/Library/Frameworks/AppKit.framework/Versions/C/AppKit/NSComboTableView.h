@interface NSComboTableView : NSTableView {
    long long _lastReturnedNumberOfRows;
}

+ (char)_logErrorForNonStringIdentifier;

- (id)initWithCoder:(id)a0;
- (char)_accessibilityWantsToBeList;
- (char)_addSourceListCellAttributesToCell:(id)a0 withData:(id)a1 selected:(char)a2 emphasized:(char)a3;
- (char)_shouldBlurSelectionWhenCellBased;
- (char)acceptsFirstMouse:(id)a0;
- (long long)numberOfRows;
- (char)shouldDelayWindowOrderingForEvent:(id)a0;

@end
