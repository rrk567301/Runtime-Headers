@interface SCRRadioButton : SCRButton {
    long long _type;
}

- (void)dealloc;
- (id)typeDescription;
- (BOOL)isSelected;
- (id)valueDescription;
- (BOOL)isInteractive;
- (BOOL)isTab;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)isControlElement;
- (id)itemDescriptionForEcho;
- (id)siblingTabUIElements;
- (BOOL)tabOrDrillInShouldTempDisableQuickNav;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (BOOL)canHandleValueChange;
- (void)echoValueChangeToRequest:(id)a0;
- (BOOL)ignoreValueChangeAfterAction;
- (BOOL)isRadioButton;
- (id)titleElement;
- (id)shortInstruction;
- (id)descriptionForContextualHelp;
- (void)handleParentGroupValueChange:(id)a0;
- (BOOL)wantsAutoFocusIn;

@end
