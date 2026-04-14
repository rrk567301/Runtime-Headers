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
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (BOOL)tabOrDrillInShouldTempDisableQuickNav;
- (id)siblingTabUIElements;
- (BOOL)isControlElement;
- (id)itemDescriptionForEcho;
- (id)titleElement;
- (BOOL)canHandleValueChange;
- (void)echoValueChangeToRequest:(id)a0;
- (BOOL)ignoreValueChangeAfterAction;
- (BOOL)isRadioButton;
- (id)descriptionForContextualHelp;
- (id)shortInstruction;
- (void)handleParentGroupValueChange:(id)a0;
- (BOOL)wantsAutoFocusIn;

@end
