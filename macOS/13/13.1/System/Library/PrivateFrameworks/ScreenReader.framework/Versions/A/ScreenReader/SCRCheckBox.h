@interface SCRCheckBox : SCRButton

- (BOOL)isSelected;
- (id)valueString;
- (id)valueDescription;
- (id)statusDescription;
- (id)roleDescription;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)isControlElement;
- (id)itemDescriptionForEcho;
- (BOOL)alwaysAllowDrag;
- (BOOL)canHandleValueChange;
- (void)echoValueChangeToRequest:(id)a0;
- (BOOL)toggleSingleSelectionWithRequest:(id)a0;
- (BOOL)ignoreValueChangeAfterAction;
- (id)defaultActionDescription;
- (id)_theCorrectDefaultActionDescription;
- (void)addActionDescription:(id)a0 toRequest:(id)a1;

@end
