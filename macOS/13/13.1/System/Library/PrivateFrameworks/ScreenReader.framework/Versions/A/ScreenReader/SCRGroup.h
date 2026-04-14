@class NSArray;

@interface SCRGroup : SCRMapElement {
    BOOL _disableContentSummary;
    NSArray *_previousSelectionUIElements;
}

- (void).cxx_destruct;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)addItemNameToRequest:(id)a0;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (long long)groupBehavior;
- (BOOL)isContainerElement;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (BOOL)allowFocusThroughSingleChild;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (BOOL)alwaysAllowDrag;
- (BOOL)includeChildrenActions;
- (void)addActionDescription:(id)a0 toRequest:(id)a1;
- (BOOL)needToRebuildChildren;
- (BOOL)shouldTrackKeyboardOnFocusInto;
- (void)addItemDescriptionForContainerSummaryToRequest:(id)a0 forAction:(BOOL)a1;
- (void)prepareBrailleItemDescriptionForRequest:(id)a0 hasBrailleFocus:(BOOL)a1;
- (id)previousSelectionUIElements;
- (void)setPreviousSelectionUIElements:(id)a0;
- (BOOL)moveToBookmarkInDirection:(long long)a0 withEvent:(id)a1 request:(id)a2;
- (void)_addItemNameToRequest:(id)a0 forAction:(BOOL)a1;
- (BOOL)_supportsAlternateUIAction;

@end
