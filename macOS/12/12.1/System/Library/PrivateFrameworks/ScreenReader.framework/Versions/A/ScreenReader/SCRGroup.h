@class NSArray;

@interface SCRGroup : SCRMapElement {
    BOOL _disableContentSummary;
    NSArray *_previousSelectionUIElements;
}

- (void).cxx_destruct;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)setPreviousSelectionUIElements:(id)a0;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)isContainerElement;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (void)prepareBrailleItemDescriptionForRequest:(id)a0 hasBrailleFocus:(BOOL)a1;
- (long long)groupBehavior;
- (BOOL)needToRebuildChildren;
- (BOOL)alwaysAllowDrag;
- (void)addActionDescription:(id)a0 toRequest:(id)a1;
- (id)previousSelectionUIElements;
- (BOOL)shouldTrackKeyboardOnFocusInto;
- (BOOL)moveToBookmarkInDirection:(long long)a0 withEvent:(id)a1 request:(id)a2;
- (void)_addItemNameToRequest:(id)a0 forAction:(BOOL)a1;
- (BOOL)_supportsAlternateUIAction;

@end
