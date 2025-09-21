@interface SCRCaptionsTextField : SCRTextField

- (id)actionNames;
- (id)descriptionForAction:(id)a0;
- (id)attributedStringForRange:(id)a0;
- (id)_captionsProvider;
- (char)_handleTextContentChange;
- (char)_isFirstProviderChild;
- (void)_resetCursorFromTextChange;
- (void)addItemDescriptionForActionToRequest:(id)a0;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (id)buildVerbosityRotorGuides;
- (void)handleVerbosityRotorDidSelectItemAtIndex:(unsigned long long)a0 userInfo:(id)a1;
- (id)lineNavigatorFallbackRange;
- (char)performActionOverride:(id)a0;

@end
