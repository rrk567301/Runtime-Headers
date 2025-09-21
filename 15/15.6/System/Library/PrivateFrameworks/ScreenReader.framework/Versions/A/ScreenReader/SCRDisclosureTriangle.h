@interface SCRDisclosureTriangle : SCRElement

- (char)isExpanded;
- (id)statusDescription;
- (void)addActionDescription:(id)a0 toRequest:(id)a1;
- (id)_theCorrectDefaultActionDescription;
- (void)appendExpandedStatusDescription:(id)a0;
- (id)defaultActionDescription;
- (void)echoValueChangeToRequest:(id)a0;
- (char)ignoreValueChangeAfterAction;
- (char)isControlElement;
- (id)itemDescriptionForEcho;
- (char)toggleExpandedWithEvent:(id)a0 request:(id)a1;

@end
