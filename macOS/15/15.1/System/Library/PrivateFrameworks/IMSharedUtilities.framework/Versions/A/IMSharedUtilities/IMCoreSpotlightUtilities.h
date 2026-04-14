@class NSString, NSDate;

@interface IMCoreSpotlightUtilities : NSObject

@property (class, copy, nonatomic) NSDate *reindexingSuspendedUntilDate;
@property (class, copy, nonatomic) NSString *reindexingSuspensionReason;
@property (class, nonatomic) BOOL notifyForSpotlightEvents;
@property (class, nonatomic) BOOL notifyForVerboseSpotlightEvents;
@property (class, nonatomic) BOOL spotlightEventsAreTimeSensitive;
@property (class, readonly, nonatomic) BOOL reindexingSuspended;
@property (class, nonatomic) long long chatBatchSize;
@property (class, nonatomic) long long messageSubBatchSize;
@property (class, nonatomic) long long messageRecordBatchSize;
@property (class, nonatomic) long long reindexFirstBatchSize;
@property (class, nonatomic) long long reindexSupplementalBatchSize;

+ (BOOL)verboseLoggingEnabled;
+ (id)_chatBatchSizeKey;
+ (id)_messageRecordBatchSizeKey;
+ (id)_messageSubBatchSizeKey;
+ (id)_notifyForSpotlightEventsKey;
+ (id)_notifyForVerboseSpotlightEventsKey;
+ (id)_reindexFirstBatchSizeKey;
+ (id)_reindexSupplementalBatchSizeKey;
+ (id)_reindexSuspendedUntilKey;
+ (id)_reindexSuspensionReasonKey;
+ (id)_spotlightEventsAreTimeSensitiveKey;
+ (id)descriptionForReindexReason:(unsigned long long)a0;
+ (unsigned long long)lastDonatedRowID;
+ (BOOL)needsDeferredIndexing;
+ (BOOL)needsDonation;
+ (BOOL)needsIndexing;
+ (BOOL)needsInitialDonation;
+ (unsigned long long)reindexReason;
+ (void)setNeedsDeferredIndexing;
+ (void)setNeedsInitialDonation:(BOOL)a0;
+ (BOOL)skipIndexing;

@end
