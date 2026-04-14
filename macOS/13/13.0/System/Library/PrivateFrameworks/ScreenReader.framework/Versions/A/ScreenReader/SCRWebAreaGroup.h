@interface SCRWebAreaGroup : SCRMapElement {
    BOOL _disableContentSummary;
}

- (id)statusDescription;
- (BOOL)shouldMap;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (id)focusOntoUIElement:(id)a0 withScrolling:(BOOL)a1 withSelection:(BOOL)a2;
- (BOOL)shouldPromoteForMovingUIElement:(id)a0;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (BOOL)needToRebuildChildren;
- (BOOL)shouldPromoteUIElement:(id)a0;
- (id)prepareArrayToFocusInto;
- (BOOL)isGestureContainerElement;
- (id)firstChildForFocusing;
- (id)lastChildForFocusing;
- (BOOL)shouldMapElement:(id)a0;
- (id)childInAXOrderForward:(BOOL)a0 horizontal:(BOOL)a1 visibleOnly:(BOOL)a2 wrapped:(BOOL *)a3 didHitBoundary:(BOOL *)a4 startElement:(id)a5;
- (id)visibleChildrenDescriptionIgnoringChild:(id)a0;
- (void)prepareBrailleItemDescriptionForRequest:(id)a0 hasBrailleFocus:(BOOL)a1;
- (void)addElementSummaryToRequest:(id)a0;
- (id)_addBusyStatusDescriptionToStatusIfNeeded:(id)a0;
- (BOOL)_addContainerSummaryToRequest:(id)a0;

@end
