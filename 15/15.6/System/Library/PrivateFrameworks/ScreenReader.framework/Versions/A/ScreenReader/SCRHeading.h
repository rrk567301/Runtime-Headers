@interface SCRHeading : SCRMapElement

- (id)typeDescription;
- (id)children;
- (char)isInteractive;
- (void)setKeyboardFocus:(char)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (id)focusOntoUIElement:(id)a0 withScrolling:(char)a1 withSelection:(char)a2;
- (long long)groupBehavior;
- (char)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;
- (id)readContentsElement;
- (char)readyToHaveKeyboardFocus;
- (char)shouldAllowAutoFocusInto;
- (char)shouldSpeakFocusedOnlyChild;

@end
