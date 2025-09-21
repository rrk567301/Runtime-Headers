@class NSString, NSDate;

@interface IMCoreSpotlightUtilities : NSObject

@property (class, copy, nonatomic) NSDate *reindexingSuspendedUntilDate;
@property (class, copy, nonatomic) NSString *reindexingSuspensionReason;
@property (class, nonatomic) char notifyForSpotlightEvents;
@property (class, nonatomic) char notifyForVerboseSpotlightEvents;
@property (class, nonatomic) char spotlightEventsAreTimeSensitive;
@property (class, readonly, nonatomic) char reindexingSuspended;
@property (class, nonatomic) char exitOnIndexingTimeout;
@property (class, nonatomic) long long spotlightTimeoutSeconds;
@property (class, nonatomic) long long extendedSpotlightTimeoutSeconds;
@property (class, nonatomic) long long chatBatchSize;
@property (class, nonatomic) long long messageSubBatchSize;
@property (class, nonatomic) long long messageRecordBatchSize;
@property (class, nonatomic) long long reindexFirstBatchSize;
@property (class, nonatomic) long long reindexSupplementalBatchSize;
@property (class, readonly, nonatomic) char withdrawDonationsForFailedPreviewGenerations;
@property (class, readonly, nonatomic) char ignorePreviewGenerationNotifications;

+ (char)verboseLoggingEnabled;
+ (id)_chatBatchSizeKey;
+ (id)_exitOnIndexingTimeoutKey;
+ (id)_extendedSpotlightTimeoutSecondsKey;
+ (id)_ignorePreviewGenerationNotificationsKey;
+ (id)_messageRecordBatchSizeKey;
+ (id)_messageSubBatchSizeKey;
+ (id)_notifyForSpotlightEventsKey;
+ (id)_notifyForVerboseSpotlightEventsKey;
+ (id)_reindexFirstBatchSizeKey;
+ (id)_reindexSupplementalBatchSizeKey;
+ (id)_reindexSuspendedUntilKey;
+ (id)_reindexSuspensionReasonKey;
+ (id)_spotlightEventsAreTimeSensitiveKey;
+ (id)_spotlightTimeoutSecondsKey;
+ (id)_withdrawDonationsForFailedPreviewGenerationsKey;
+ (id)descriptionForReindexReason:(unsigned long long)a0;
+ (unsigned long long)lastDonatedRowID;
+ (char)needsDeferredIndexing;
+ (char)needsDonation;
+ (char)needsIndexing;
+ (char)needsInitialDonation;
+ (unsigned long long)reindexReason;
+ (void)setIgnorePreviewGenerationNotifications:(char)a0;
+ (void)setNeedsDeferredIndexing;
+ (void)setNeedsInitialDonation:(char)a0;
+ (void)setWithdrawDonationsForFailedPreviewGenerations:(char)a0;
+ (char)skipIndexing;

@end
