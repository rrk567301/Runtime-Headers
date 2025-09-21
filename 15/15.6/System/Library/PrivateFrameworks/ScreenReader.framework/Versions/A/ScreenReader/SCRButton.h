@interface SCRButton : SCRMapElement {
    double _lastActionTime;
}

- (char)isSelected;
- (id)valueDescription;
- (id)statusDescription;
- (id)roleDescription;
- (char)isInteractive;
- (char)isTab;
- (id)defaultActionName;
- (id)onlyChild;
- (id)previousElement;
- (id)nextElement;
- (char)_handleActionRepeatKeyUpWithRequest:(id)a0;
- (void)appendSelectedStatusDescription:(id)a0;
- (char)canHandleValueChange;
- (char)canNavigateToChildren;
- (id)captionDescriptionContainsUserLabel:(char *)a0 containsAncestorLabel:(char *)a1;
- (void)defaultActionDispatchHandler:(id)a0;
- (void)defaultActionEndedDispatchHandler:(id)a0;
- (id)fullItemDescriptionForMenu;
- (long long)groupBehavior;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)isControlElement;
- (id)itemDescriptionForEcho;
- (char)monitorItemDescriptionChanges;
- (char)performAlternateActionWithRequest:(id)a0;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;
- (id)siblingTabUIElements;
- (char)tabOrDrillInShouldTempDisableQuickNav;

@end
