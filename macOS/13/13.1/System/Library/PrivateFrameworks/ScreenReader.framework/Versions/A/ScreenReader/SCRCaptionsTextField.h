@interface SCRCaptionsTextField : SCRTextField

- (id)attributedStringForRange:(id)a0;
- (id)descriptionForAction:(id)a0;
- (id)actionNames;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (id)buildVerbosityRotorGuides;
- (void)handleVerbosityRotorDidSelectItemAtIndex:(unsigned long long)a0 userInfo:(id)a1;
- (void)addItemDescriptionForActionToRequest:(id)a0;
- (BOOL)performActionOverride:(id)a0;
- (BOOL)_handleTextContentChange;
- (void)_resetCursorFromTextChange;
- (id)lineNavigatorFallbackRange;
- (id)_captionsProvider;
- (BOOL)_isFirstProviderChild;

@end
