@interface WFUserInteractionResource : WFResource <WFApplicationStateObserver>

+ (BOOL)isSingleton;

- (void)dealloc;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (id)initWithDefinition:(id)a0;
- (void)refreshAvailability;

@end
