@interface SCRCheckBox : SCRButton

- (BOOL)isSelected;
- (id)valueString;
- (id)valueDescription;
- (id)statusDescription;
- (id)roleDescription;
- (BOOL)alwaysAllowDrag;
- (void)addActionDescription:(id)a0 toRequest:(id)a1;
- (id)_theCorrectDefaultActionDescription;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)canHandleValueChange;
- (id)defaultActionDescription;
- (void)echoValueChangeToRequest:(id)a0;
- (BOOL)ignoreValueChangeAfterAction;
- (BOOL)isControlElement;
- (id)itemDescriptionForEcho;
- (BOOL)toggleSingleSelectionWithRequest:(id)a0;

@end
