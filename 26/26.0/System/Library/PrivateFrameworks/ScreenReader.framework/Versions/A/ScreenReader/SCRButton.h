@interface SCRButton : SCRMapElement {
    double _lastActionTime;
}

- (id)statusDescription;
- (BOOL)isInteractive;
- (BOOL)isSelected;
- (id)valueDescription;
- (id)roleDescription;
- (BOOL)isTab;
- (id)defaultActionName;
- (id)onlyChild;
- (id)previousElement;
- (id)nextElement;
- (BOOL)_handleActionRepeatKeyUpWithRequest:(id)a0;
- (void)appendSelectedStatusDescription:(id)a0;
- (BOOL)canHandleValueChange;
- (BOOL)canNavigateToChildren;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (void)defaultActionDispatchHandler:(id)a0;
- (void)defaultActionEndedDispatchHandler:(id)a0;
- (id)fullItemDescriptionForMenu;
- (long long)groupBehavior;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)isControlElement;
- (id)itemDescriptionForEcho;
- (BOOL)monitorItemDescriptionChanges;
- (BOOL)performAlternateActionWithRequest:(id)a0;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (id)siblingTabUIElements;
- (BOOL)tabOrDrillInShouldTempDisableQuickNav;

@end
