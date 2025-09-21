@interface SCROutline : SCRTable

- (id)typeDescription;
- (char)isOutline;
- (id)statusDescription;
- (unsigned long long)disclosureLevel;
- (void)addActionDescription:(id)a0 toRequest:(id)a1;
- (id)_currentRowStatusDescription;
- (void)_disclosureLevelDidChange:(id)a0;
- (void)_navigationLevelsPrevious:(long long *)a0 current:(long long *)a1;
- (void)_setNavigationLevelsPrevious:(long long)a0 current:(long long)a1;
- (id)_statusForRowAtIndex:(unsigned long long)a0;
- (void)addDescriptionForRowElement:(id)a0 toRequest:(id)a1 includeHeader:(char)a2 headerIndex:(unsigned long long)a3 headerOrientation:(long long)a4 includeCommandEcho:(char)a5 includeBlanks:(char)a6;
- (void)addDescriptionForSelectedRowElement:(id)a0 atCell:(struct SCRDataCell { unsigned long long x0; unsigned long long x1; })a1 toRequest:(id)a2;
- (void)addInteractionDescriptionForFocusedItemToRequest:(id)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (char)canSetDisclosing;
- (char)childrenShouldAddIndexToDescription;
- (id)currentPreviousLevelKey;
- (char)didDisclosureLevelChange;
- (id)focusOntoUIElement:(id)a0 withScrolling:(char)a1 withSelection:(char)a2;
- (char)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (char)isDisclosing;
- (char)moveToParentRowWithRequest:(id)a0;
- (unsigned long long)numberOfDisclosedRows;
- (void)setDisclosing:(char)a0;
- (id)setFocusedCell:(struct SCRDataCell { unsigned long long x0; unsigned long long x1; })a0 scrolling:(char)a1 selection:(char)a2 request:(id)a3 event:(id)a4;
- (void)setIsEventHandler:(char)a0 isKeyboardHandler:(char)a1;
- (char)toggleDisclosureTriangleWithRequest:(id)a0;
- (char)toggleExpandedWithEvent:(id)a0 request:(id)a1;

@end
