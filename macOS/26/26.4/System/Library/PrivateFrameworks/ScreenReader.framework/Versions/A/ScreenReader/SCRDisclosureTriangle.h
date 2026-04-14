@interface SCRDisclosureTriangle : SCRElement

- (id)statusDescription;
- (BOOL)isExpanded;
- (void)addActionDescription:(id)a0 toRequest:(id)a1;
- (id)_theCorrectDefaultActionDescription;
- (void)appendExpandedStatusDescription:(id)a0;
- (id)defaultActionDescription;
- (void)echoValueChangeToRequest:(id)a0;
- (BOOL)ignoreValueChangeAfterAction;
- (BOOL)isControlElement;
- (id)itemDescriptionForEcho;
- (BOOL)toggleExpandedWithEvent:(id)a0 request:(id)a1;

@end
