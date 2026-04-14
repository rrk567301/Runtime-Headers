@interface SCROutline : SCRTable

- (id)typeDescription;
- (id)statusDescription;
- (unsigned long long)disclosureLevel;
- (id)focusOntoUIElement:(id)a0 withScrolling:(BOOL)a1 withSelection:(BOOL)a2;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (void)addActionDescription:(id)a0 toRequest:(id)a1;
- (BOOL)toggleExpandedWithEvent:(id)a0 request:(id)a1;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (BOOL)canSetDisclosing;
- (BOOL)isDisclosing;
- (void)setDisclosing:(BOOL)a0;
- (BOOL)toggleDisclosureTriangleWithRequest:(id)a0;
- (void)addInteractionDescriptionForFocusedItemToRequest:(id)a0;
- (void)addDescriptionForRowElement:(id)a0 toRequest:(id)a1 includeHeader:(BOOL)a2 headerIndex:(unsigned long long)a3 headerOrientation:(long long)a4 includeCommandEcho:(BOOL)a5 includeBlanks:(BOOL)a6;
- (void)addDescriptionForSelectedRowElement:(id)a0 atCell:(struct SCRDataCell { unsigned long long x0; unsigned long long x1; })a1 toRequest:(id)a2;
- (id)setFocusedCell:(struct SCRDataCell { unsigned long long x0; unsigned long long x1; })a0 scrolling:(BOOL)a1 selection:(BOOL)a2 request:(id)a3 event:(id)a4;
- (void)_disclosureLevelDidChange:(id)a0;
- (id)currentPreviousLevelKey;
- (void)_setNavigationLevelsPrevious:(long long)a0 current:(long long)a1;
- (void)_navigationLevelsPrevious:(long long *)a0 current:(long long *)a1;
- (unsigned long long)numberOfDisclosedRows;
- (BOOL)moveToParentRowWithRequest:(id)a0;
- (id)_statusForRowAtIndex:(unsigned long long)a0;
- (id)_currentRowStatusDescription;

@end
