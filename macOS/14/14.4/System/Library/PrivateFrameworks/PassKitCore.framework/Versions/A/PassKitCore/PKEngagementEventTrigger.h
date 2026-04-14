@interface PKEngagementEventTrigger : NSObject

+ (id)metrics;
+ (void)fireApplePayContextChangedEvent;
+ (void)fireExpressPassInfoChangedEvent;
+ (id)eventWithType:(id)a0;
+ (void)fireAccountAddedEvent;
+ (void)fireAccountRemovedEvent;
+ (void)fireAccountUpdatedEvent;
+ (void)fireCurrentLocaleChangedEvent;
+ (void)fireDCINotificationForMarketAddedEvent;
+ (void)fireDayChangedEvent;
+ (BOOL)fireEngagementEventNamed:(id)a0;
+ (void)fireFamilyCircleChangedEvent;
+ (void)fireFeatureApplicationAddedEvent;
+ (void)fireFeatureApplicationRemovedEvent;
+ (void)fireFeatureApplicationUpdatedEvent;
+ (void)fireLocationChangedEvent;
+ (void)fireOpenLoopUpgradeNotificationForMarketAddedEvent;
+ (void)firePassAddedEvent;
+ (void)firePassRemovedEvent;
+ (void)firePeerPaymentAccountUpdatedEvent;
+ (void)fireRenotifyNotificationForMarketAddedEvent;
+ (void)fireScheduledPaymentsChangedEvent;
+ (void)fireTransactionsUpdatedEvent;

@end
