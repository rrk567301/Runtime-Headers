@class SCRElement;

@interface SCRPage : SCRMapElement

@property (retain, nonatomic) SCRElement *_readFromBeginningStopElement;
@property (nonatomic) char isAutoInteractingWithText;

+ (char)_shouldTreatAsTextNavigationForElement:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)pageIndex;
- (id)previousElement;
- (id)nextElement;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (char)_focusOntoElement:(id)a0 previouslyFocusedUIElement:(id)a1 inPage:(id)a2 withRequest:(id)a3;
- (char)_handleMoveToNextLineInContentWithRequest:(id)a0;
- (char)_handleMoveToPreviousLineInContentWithRequest:(id)a0;
- (char)_moveToChildElementVerticallyAlignedAbove:(char)a0 withFocusedChild:(id)a1 request:(id)a2;
- (id)_pageIndex;
- (id)_pageIndexDescription;
- (void)_resetFocusedTextNavigationElement;
- (void)_setKeyboardSyncForUIElement:(id)a0;
- (id)_totalPages;
- (id)_totalPagesDescription;
- (char)addContentSummaryToRequest:(id)a0;
- (void)addContentToRequest:(id)a0 visibleOnly:(char)a1;
- (void)addItemNameToRequest:(id)a0;
- (void)addItemTypeToRequest:(id)a0;
- (char)addLocalizedPageNumberToRequest:(id)a0 includeTotalPages:(char)a1 withBrailleAlert:(char)a2;
- (char)allowFocusThroughSingleChild;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (char)isContainerElement;
- (char)isSectionView;
- (char)moveFirstWithEvent:(id)a0 request:(id)a1 visibleOnly:(char)a2;
- (char)moveLastWithEvent:(id)a0 request:(id)a1 visibleOnly:(char)a2;
- (char)moveToContentInDirection:(long long)a0 granularity:(long long)a1 request:(id)a2;
- (char)readFromBeginningWithRequest:(id)a0;
- (char)shouldStopReadFromBeginning;

@end
