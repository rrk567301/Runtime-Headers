@interface SCRWebAreaGroup : SCRMapElement

- (id)statusDescription;
- (char)shouldMap;
- (id)_addBusyStatusDescriptionToStatusIfNeeded:(id)a0;
- (char)_addContainerSummaryToRequest:(id)a0;
- (char)_navigateInDirection:(id)a0 request:(id)a1 forward:(char)a2 horizontal:(char)a3 forceWrapping:(char)a4 allowSuperToHandle:(char *)a5;
- (void)addElementSummaryToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (char)allowFocusThroughSingleChild;
- (id)childInAXOrderForward:(char)a0 horizontal:(char)a1 visibleOnly:(char)a2 wrapped:(char *)a3 didHitBoundary:(char *)a4 startElement:(id)a5;
- (id)firstChildForFocusing;
- (char)focusInto:(id)a0 event:(id)a1;
- (id)focusOntoUIElement:(id)a0 withScrolling:(char)a1 withSelection:(char)a2;
- (char)handleEvent:(id)a0 request:(id)a1;
- (char)isGestureContainerElement;
- (id)lastChildForFocusing;
- (char)needToRebuildChildren;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;
- (id)prepareArrayToFocusInto;
- (char)shouldMapElement:(id)a0;
- (char)shouldPromoteForMovingUIElement:(id)a0;
- (char)shouldPromoteUIElement:(id)a0;
- (char)shouldSpeakItemCountWhenFocusingIn;
- (id)visibleChildrenDescriptionIgnoringElements:(id)a0;

@end
