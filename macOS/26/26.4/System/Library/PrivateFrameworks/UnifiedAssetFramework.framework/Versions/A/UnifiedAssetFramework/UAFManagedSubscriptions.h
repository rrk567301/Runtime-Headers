@interface UAFManagedSubscriptions : NSObject

+ (void)manageNLSystemLanguageSubscription:(id)a0 subscriber:(id)a1 subscriptionName:(id)a2;
+ (id)_assistantUsageAliasForMode:(unsigned long long)a0;
+ (BOOL)_deviceSupportsGenerativeModelSystems;
+ (void)_stageAssetsUponPlatformAssetSetUpdate;
+ (id)createHoldSubscription:(id)a0;
+ (id)getConcurrentQueue;
+ (id)getExistingSubscription:(id)a0 subscriber:(id)a1;
+ (BOOL)isOnDemandAssetSubscriptionAllowed;
+ (void)manageAssistantSubscription:(id)a0 withMode:(unsigned long long)a1;
+ (void)manageAssistantSubscription:(id)a0 withMode:(unsigned long long)a1 subscriber:(id)a2 subscriptionName:(id)a3 shouldReport:(BOOL)a4;
+ (void)manageGMSSiriLanguageSubscription:(BOOL)a0 language:(id)a1 mode:(unsigned long long)a2;
+ (void)manageMorphunSystemLocaleSubscription:(id)a0;
+ (void)manageNLSystemLanguageSubscription:(id)a0;
+ (id)managePlatformSubscription;
+ (id)manageSubscription:(id)a0 subscriber:(id)a1 assetSets:(id)a2 usageAliases:(id)a3 useHold:(BOOL)a4 userInitiated:(BOOL)a5;
+ (void)manageSummarizationKitSubscription;
+ (id)morphunUsagesForLocale:(id)a0;
+ (id)validateUsageAlias:(id)a0 usageAliasValue:(id)a1;

@end
