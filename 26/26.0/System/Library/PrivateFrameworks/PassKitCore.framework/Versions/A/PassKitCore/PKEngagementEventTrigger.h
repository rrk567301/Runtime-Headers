@interface PKEngagementEventTrigger : NSObject

+ (id)metrics;
+ (void)_fireEventType:(id)a0;
+ (void)fireApplePayContextChangedEvent;
+ (void)fireExpressPassInfoChangedEvent;
+ (void)_fireEventType:(id)a0 eventDetails:(id)a1;
+ (id)eventWithType:(id)a0 eventDetails:(id)a1;
+ (void)fireAccountAddedEvent;
+ (void)fireAccountRemovedEvent;
+ (void)fireAccountUpdatedEvent;
+ (void)fireAppleAccountCardTopUpEventWithSubtype:(long long)a0;
+ (void)fireAppleAccountInStoreTopUpEvent;
+ (void)fireCurrentLocaleChangedEvent;
+ (void)fireDCINotificationForMarketAddedEvent;
+ (void)fireDayChangedEvent;
+ (void)fireDefaultCreditAccountBalancePaidInFullEvent;
+ (void)fireDefaultCreditAccountCreditLimitIncreasedEvent;
+ (void)fireDefaultCreditAccountPropensityRankUpdatedEvent;
+ (void)fireDefaultCreditAccountPurchaseMissedApplePayMerchantRewardsEvent;
+ (void)fireDefaultCreditAccountReceivedBonusDailyCashEvent;
+ (BOOL)fireEngagementEventNamed:(id)a0;
+ (void)fireFamilyCircleChangedEvent;
+ (void)fireFeatureApplicationAddedEvent;
+ (void)fireFeatureApplicationRemovedEvent;
+ (void)fireFeatureApplicationUpdatedEvent;
+ (void)fireIssuerMessagingFlagsChangedEvent;
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
