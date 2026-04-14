@interface SCRButton : SCRMapElement {
    double _lastActionTime;
}

- (id)nextElement;
- (BOOL)isSelected;
- (id)valueDescription;
- (id)statusDescription;
- (id)roleDescription;
- (BOOL)isInteractive;
- (BOOL)isTab;
- (id)onlyChild;
- (id)previousElement;
- (id)defaultActionName;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (long long)groupBehavior;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (BOOL)performAlternateActionWithRequest:(id)a0;
- (void)defaultActionEndedDispatchHandler:(id)a0;
- (void)defaultActionDispatchHandler:(id)a0;
- (BOOL)canNavigateToChildren;
- (void)appendSelectedStatusDescription:(id)a0;
- (BOOL)isControlElement;
- (BOOL)monitorItemDescriptionChanges;
- (id)itemDescriptionForEcho;
- (id)siblingTabUIElements;
- (BOOL)tabOrDrillInShouldTempDisableQuickNav;
- (BOOL)_handleActionRepeatKeyUpWithRequest:(id)a0;

@end
