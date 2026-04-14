@interface SCRDisclosureTriangle : SCRElement

- (BOOL)isExpanded;
- (id)statusDescription;
- (BOOL)isControlElement;
- (id)itemDescriptionForEcho;
- (void)echoValueChangeToRequest:(id)a0;
- (BOOL)ignoreValueChangeAfterAction;
- (id)defaultActionDescription;
- (id)_theCorrectDefaultActionDescription;
- (void)addActionDescription:(id)a0 toRequest:(id)a1;
- (void)appendExpandedStatusDescription:(id)a0;
- (BOOL)toggleExpandedWithEvent:(id)a0 request:(id)a1;

@end
