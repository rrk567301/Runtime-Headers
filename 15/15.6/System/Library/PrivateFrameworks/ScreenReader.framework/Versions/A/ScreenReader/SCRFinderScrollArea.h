@class NSArray, SCRElement;

@interface SCRFinderScrollArea : SCRScrollArea {
    char _isDesktop;
    SCRElement *_iconContainer;
    NSArray *_previousSelectionUIElements;
}

- (void).cxx_destruct;
- (id)typeDescription;
- (id)iconContainer;
- (id)containerDescription;
- (char)isWindow;
- (char)isMain;
- (void)setIsMain:(char)a0;
- (void)setPreviousSelectionUIElements:(id)a0;
- (char)syncKBFocusToVOCursorWithOutputRequest:(id)a0 playSound:(char)a1 withSelection:(char)a2;
- (char)canHandleSelectedChildrenChange;
- (char)isFinderDesktop;
- (char)_moveFirstInDesktopWithEvent:(id)a0 request:(id)a1;
- (char)_moveLastInDesktopWithEvent:(id)a0 request:(id)a1;
- (id)_newIconContainer;
- (void)addItemDescriptionToRequest:(id)a0;
- (char)addKeyboardSelectionSummaryToRequest:(id)a0;
- (char)addSelectionDescriptionToRequest:(id)a0;
- (char)canStopInteracting;
- (char)chainEvent:(id)a0 request:(id)a1;
- (void)echoCurrentSelectionWithQueueID:(id)a0 interruptsRequests:(char)a1 excludingIdentifiers:(id)a2;
- (char)focusInto:(id)a0 event:(id)a1;
- (id)focusOntoUIElement:(id)a0 withScrolling:(char)a1 withSelection:(char)a2;
- (void)handleSelectionChange:(id)a0;
- (char)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (id)linkedUIElementsForChild:(id)a0;
- (void)makeFrontmost:(id)a0;
- (void)makeKeyElement;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;
- (id)previousSelectionUIElements;
- (void)setFocusedChild:(id)a0;
- (void)setIsInteracting:(char)a0;
- (void)setKeyboardChild:(id)a0;
- (char)startWindowContentFeedback:(id)a0;
- (char)synchKeyboardToVOCursor:(id)a0;
- (id)uiElementToObserveSelectionChange;
- (id)uiSelectedChildrenElements;

@end
