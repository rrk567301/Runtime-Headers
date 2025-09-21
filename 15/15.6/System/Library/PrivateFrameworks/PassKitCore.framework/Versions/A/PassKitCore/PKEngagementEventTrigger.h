@interface PKEngagementEventTrigger : NSObject

+ (id)metrics;
+ (void)fireApplePayContextChangedEvent;
+ (void)_fireEventType:(id)a0;
+ (void)fireExpressPassInfoChangedEvent;
+ (id)eventWithType:(id)a0;
+ (void)fireAccountAddedEvent;
+ (void)fireAccountRemovedEvent;
+ (void)fireAccountUpdatedEvent;
+ (void)fireAppleAccountInStoreTopUpEvent;
+ (void)fireCurrentLocaleChangedEvent;
+ (void)fireDCINotificationForMarketAddedEvent;
+ (void)fireDayChangedEvent;
+ (void)fireDefaultCreditAccountBalancePaidInFullEvent;
+ (void)fireDefaultCreditAccountCreditLimitIncreasedEvent;
+ (void)fireDefaultCreditAccountPurchaseMissedApplePayMerchantRewardsEvent;
+ (void)fireDefaultCreditAccountReceivedBonusDailyCashEvent;
+ (char)fireEngagementEventNamed:(id)a0;
+ (void)fireFamilyCircleChangedEvent;
+ (void)fireFeatureApplicationAddedEvent;
+ (void)fireFeatureApplicationRemovedEvent;
+ (void)fireFeatureApplicationUpdatedEvent;
+ (void)fireLocationChangedEvent;
+ (void)fireOpenLoopUpgradeNotificationForMarketAddedEvent;
+ (void)firePassAddedEvent;
+ (void)firePassRemovedEvent;
+ (void)firePeerPaymentAccountUpdatedEvent;
+ (void)firePeerPaymentDeviceTapTransactionAddedEvent;
+ (void)fireRenotifyNotificationForMarketAddedEvent;
+ (void)fireScheduledPaymentsChangedEvent;
+ (void)fireTransactionsUpdatedEvent;

@end
