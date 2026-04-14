@interface SCRHeading : SCRMapElement

- (id)typeDescription;
- (id)children;
- (void)setKeyboardFocus:(BOOL)a0;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (id)readContentsElement;
- (long long)groupBehavior;
- (BOOL)shouldAllowAutoFocusInto;
- (id)focusOntoUIElement:(id)a0 withScrolling:(BOOL)a1 withSelection:(BOOL)a2;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (BOOL)shouldSpeakFocusedOnlyChild;
- (BOOL)readyToHaveKeyboardFocus;

@end
