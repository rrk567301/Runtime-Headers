@class EDBiomeBlackPearlLogger, EMCoreAnalyticsCollector;
@protocol EFScheduler;

@interface EDCategoryCoreAnalyticsLogger : NSObject

@property (retain, nonatomic) EMCoreAnalyticsCollector *analyticsCollector;
@property (readonly, nonatomic) id<EFScheduler> analyticsScheduler;
@property (retain, nonatomic) EDBiomeBlackPearlLogger *biomeFedStatsCollector;
@property (retain, nonatomic) EDBiomeBlackPearlLogger *biomeCollector;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (id)_modelMetadata:(id)a0;
- (long long)_accountTypeForMessage:(id)a0;
- (id)_convertModelMetadata:(id)a0;
- (id)_defaultModelMetadata;
- (id)_emSharedModelMetadata;
- (id)_getCommmaSeparatedString:(id)a0;
- (id)_getMetadataIntValue:(id)a0;
- (id)_getMetadataStringValue:(id)a0;
- (id)_hashedGlobalMessageId:(long long)a0;
- (void)_logAllEventsToCoreAnalyticsForMessageID:(id)a0;
- (long long)_loggingCategoryTypeFromType:(unsigned long long)a0 isHighImpact:(BOOL)a1;
- (id)_mailboxFromMessage:(id)a0;
- (void)_sendCategorizationAnalyticsForAppLaunchNotification:(id)a0;
- (id)_senderIDFromMessage:(id)a0;
- (void)logCategorizationEventForMessagesWithResult:(id)a0;

@end
