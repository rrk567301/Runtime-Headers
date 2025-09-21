@interface SCRRadioButton : SCRButton {
    long long _type;
}

- (void)dealloc;
- (id)typeDescription;
- (char)isSelected;
- (id)valueDescription;
- (char)isInteractive;
- (char)isTab;
- (char)canHandleValueChange;
- (id)descriptionForContextualHelp;
- (void)echoValueChangeToRequest:(id)a0;
- (void)handleParentGroupValueChange:(id)a0;
- (char)ignoreValueChangeAfterAction;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)isControlElement;
- (char)isRadioButton;
- (id)itemDescriptionForEcho;
- (void)setIsEventHandler:(char)a0 isKeyboardHandler:(char)a1;
- (id)shortInstruction;
- (id)siblingTabUIElements;
- (char)tabOrDrillInShouldTempDisableQuickNav;
- (id)titleElement;
- (char)wantsAutoFocusIn;

@end
