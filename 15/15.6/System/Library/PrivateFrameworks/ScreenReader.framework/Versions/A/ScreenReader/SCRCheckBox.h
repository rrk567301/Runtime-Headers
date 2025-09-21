@interface SCRCheckBox : SCRButton

- (char)isSelected;
- (id)valueString;
- (id)valueDescription;
- (id)statusDescription;
- (id)roleDescription;
- (void)addActionDescription:(id)a0 toRequest:(id)a1;
- (char)alwaysAllowDrag;
- (id)_theCorrectDefaultActionDescription;
- (void)addItemNameToRequest:(id)a0;
- (char)canHandleValueChange;
- (id)defaultActionDescription;
- (void)echoValueChangeToRequest:(id)a0;
- (char)ignoreValueChangeAfterAction;
- (char)isControlElement;
- (id)itemDescriptionForEcho;
- (char)toggleSingleSelectionWithRequest:(id)a0;

@end
