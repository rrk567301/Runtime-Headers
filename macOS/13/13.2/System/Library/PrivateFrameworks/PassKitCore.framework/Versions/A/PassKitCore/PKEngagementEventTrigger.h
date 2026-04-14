@interface PKEngagementEventTrigger : NSObject

+ (id)metrics;
+ (BOOL)fireEngagementEventNamed:(id)a0;
+ (void)firePassAddedEvent;
+ (void)firePassRemovedEvent;
+ (void)fireExpressPassInfoChangedEvent;
+ (void)fireLocationChangedEvent;
+ (void)fireAccountAddedEvent;
+ (void)fireAccountUpdatedEvent;
+ (void)fireAccountRemovedEvent;
+ (void)firePeerPaymentAccountUpdatedEvent;
+ (void)fireFeatureApplicationAddedEvent;
+ (void)fireFeatureApplicationRemovedEvent;
+ (void)fireFeatureApplicationUpdatedEvent;
+ (void)fireDCINotificationForMarketAddedEvent;
+ (void)fireOpenLoopUpgradeNotificationForMarketAddedEvent;
+ (void)fireRenotifyNotificationForMarketAddedEvent;
+ (void)fireTransactionsUpdatedEvent;
+ (void)fireFamilyCircleChangedEvent;
+ (void)fireCurrentLocaleChangedEvent;
+ (void)fireApplePayContextChangedEvent;
+ (void)fireDayChangedEvent;
+ (id)eventWithType:(id)a0;

@end
