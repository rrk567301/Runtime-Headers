@interface SCRNotificationCenterAlertOrBanner : SCRGroup

- (id)_fullDescriptionWithAppName:(id)a0 date:(id)a1 title:(id)a2 subtitle:(id)a3 body:(id)a4 summary:(id)a5;
- (void)addItemDescriptionToRequest:(id)a0;
- (char)allowsChildrenToInheritCustomActions;
- (id)fullNameDescriptionWithDate;
- (long long)groupBehavior;

@end
