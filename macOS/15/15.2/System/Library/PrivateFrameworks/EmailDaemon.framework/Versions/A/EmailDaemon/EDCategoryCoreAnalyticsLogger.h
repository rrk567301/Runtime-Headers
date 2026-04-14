@class EDBiomeBlackPearlLogger, EMCoreAnalyticsCollector, NSArray;
@protocol EFScheduler, EDAccountsProvider;

@interface EDCategoryCoreAnalyticsLogger : NSObject

@property (retain, nonatomic) EMCoreAnalyticsCollector *analyticsCollector;
@property (readonly, nonatomic) id<EFScheduler> analyticsScheduler;
@property (retain, nonatomic) EDBiomeBlackPearlLogger *biomeFedStatsCollector;
@property (retain, nonatomic) EDBiomeBlackPearlLogger *biomeCollector;
@property (retain, nonatomic) EDBiomeBlackPearlLogger *receiveBiomeCollector;
@property (retain, nonatomic) EDBiomeBlackPearlLogger *readBiomeCollector;
@property (retain, nonatomic) EDBiomeBlackPearlLogger *recategorizeBiomeCollector;
@property (retain, nonatomic) NSArray *accounts;
@property (retain, nonatomic) id<EDAccountsProvider> accountsProvider;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (int)numberOfAccounts;
- (id)_modelMetadata:(id)a0;
- (id)_isAllInboxesCategoriesEnabled:(id)a0;
- (long long)_accountTypeForAccount:(id)a0;
- (long long)_accountTypeForMessage:(id)a0;
- (id)_blackPearlEnabledAccounts;
- (double)_calculateBiomeETLToCAScheduleDeltaFrom:(id)a0;
- (double)_calculateScheduleDeltaFrom:(id)a0;
- (id)_convertModelMetadata:(id)a0;
- (id)_createMetadataPKWithUserDefaults:(id)a0;
- (id)_defaultModelMetadata;
- (id)_emSharedModelMetadataWithScheduledHour:(BOOL)a0;
- (id)_getCommmaSeparatedString:(id)a0;
- (id)_getMetadataIntValue:(id)a0;
- (id)_getMetadataStringValue:(id)a0;
- (id)_hashedGlobalMessageId:(long long)a0;
- (int)_hourInUTC;
- (void)_logAccountPersonalPreference;
- (long long)_loggingCategoryTypeFromType:(unsigned long long)a0 isHighImpact:(BOOL)a1;
- (long long)_loggingPredecitedCategoryTypeFromType:(unsigned long long)a0 isHighImpact:(BOOL)a1;
- (id)_mailboxFromMessage:(id)a0;
- (void)_sendCategorizationAnalyticsForAppLaunchNotification:(id)a0;
- (id)_senderAddressFromMessage:(id)a0;
- (id)_senderDomainFromMessage:(id)a0;
- (id)_senderIDFromMessage:(id)a0;
- (void)etlFromBiomeToCA;
- (void)logFedStatRecategorizationEventForMessages:(id)a0 categoryChangeAction:(id)a1 categoryPersistence:(id)a2;
- (void)logModelMetadataForMessages:(id)a0 categoryPersistence:(id)a1;
- (void)logReadEventForMessages:(id)a0 categoryPersistence:(id)a1;
- (void)logRecategorizationEventForMessages:(id)a0 categoryType:(unsigned long long)a1 categoryPersistence:(id)a2;
- (void)logRecategorizationEventForMessages:(id)a0 categoryType:(unsigned long long)a1 categoryPersistence:(id)a2 isHighImpactFlagChange:(BOOL)a3;
- (void)logReceiveEventForMessagesWithResult:(id)a0;
- (void)processCoreAnalyticsEvents;
- (void)scheduleNextAnalyticsBackgroundTask;
- (void)scheduleNextBiomeETLToCAScheduleBackgroundTask;
- (id)setOfBlackPearlEnabledAccoutIdentifier;

@end
