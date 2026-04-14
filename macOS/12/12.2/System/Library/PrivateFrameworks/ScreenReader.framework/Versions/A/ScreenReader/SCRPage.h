@class SCRElement;

@interface SCRPage : SCRMapElement

@property (retain, nonatomic) SCRElement *_readFromBeginningStopElement;
@property (nonatomic) BOOL isAutoInteractingWithText;

+ (BOOL)_shouldTreatAsTextNavigationForElement:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)nextElement;
- (id)_totalPages;
- (unsigned long long)pageIndex;
- (id)_pageIndex;
- (id)previousElement;
- (void)addItemNameToRequest:(id)a0;
- (void)addItemTypeToRequest:(id)a0;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)isContainerElement;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveFirstWithEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (BOOL)moveLastWithEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (BOOL)shouldStopReadFromBeginning;
- (BOOL)readFromBeginningWithRequest:(id)a0;
- (id)_pageIndexDescription;
- (id)_totalPagesDescription;
- (BOOL)_localizePageIndexWithTotalStringWithFormat:(id)a0 pageIndexDescription:(id)a1 totalPagesDescription:(id)a2 request:(id)a3;
- (BOOL)_localizePageIndexStringWithFormat:(id)a0 pageIndexDescription:(id)a1 request:(id)a2;
- (BOOL)addLocalizedPageNumberToRequest:(id)a0 includeTotalPages:(BOOL)a1;
- (BOOL)_focusOntoElement:(id)a0 previouslyFocusedUIElement:(id)a1 inPage:(id)a2 withRequest:(id)a3;
- (BOOL)_handleMoveToNextLineInContentWithRequest:(id)a0;
- (BOOL)_moveToChildElementVerticallyAlignedAbove:(BOOL)a0 withFocusedChild:(id)a1 request:(id)a2;
- (void)_setKeyboardSyncForUIElement:(id)a0;
- (BOOL)_handleMoveToPreviousLineInContentWithRequest:(id)a0;
- (void)_resetFocusedTextNavigationElement;
- (BOOL)moveToContentInDirection:(long long)a0 granularity:(long long)a1 request:(id)a2;

@end
