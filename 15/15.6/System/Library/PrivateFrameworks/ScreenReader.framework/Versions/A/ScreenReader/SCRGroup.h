@class NSArray;

@interface SCRGroup : SCRMapElement {
    NSArray *_previousSelectionUIElements;
}

- (void).cxx_destruct;
- (void)addActionDescription:(id)a0 toRequest:(id)a1;
- (void)setPreviousSelectionUIElements:(id)a0;
- (char)alwaysAllowDrag;
- (char)_supportsAlternateUIAction;
- (char)allowFocusThroughSingleChild;
- (char)canNavigateToChildren;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (char)focusInto:(id)a0 event:(id)a1;
- (long long)groupBehavior;
- (char)includeChildrenActions;
- (char)isContainerElement;
- (char)moveToBookmarkInDirection:(long long)a0 withEvent:(id)a1 request:(id)a2;
- (char)needToRebuildChildren;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;
- (void)prepareBrailleItemDescriptionForRequest:(id)a0 hasBrailleFocus:(char)a1;
- (id)previousSelectionUIElements;
- (void)setIsEventHandler:(char)a0 isKeyboardHandler:(char)a1;
- (char)shouldTrackKeyboardOnFocusInto;

@end
