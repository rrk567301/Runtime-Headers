@class NSString, NSCalendar, NSMutableDictionary, NSDate, NSMutableSet;

@interface CSEventFeedback : NSObject {
    NSDate *_currentDate;
    NSCalendar *_currentCalendar;
    NSString *_currentDateKey;
    NSMutableDictionary *_stats;
    NSMutableDictionary *_receiverStats;
    NSMutableSet *_textSizes;
    NSMutableSet *_languages;
    NSMutableSet *_errors;
    unsigned long long _maxCount;
    unsigned long long _numPeriods;
    unsigned long long _unitGranularity;
    double _startTime;
    unsigned long long _numProcessedItemsInBatch;
    unsigned long long _numProcessedOnBudget;
    BOOL _forTesting;
    BOOL _completedBatch;
    BOOL _ignoredBatch;
}

@property (readonly, nonatomic) NSCalendar *currentCalendar;
@property (readonly, nonatomic) NSDate *currentDate;
@property (nonatomic) unsigned long long numItemsInBatch;
@property (nonatomic) int indexType;
@property (copy, nonatomic) NSString *bundleID;

+ (void)removeKey:(id)a0;
+ (void)reset;
+ (id)defaultValueWithKey:(id)a0;
+ (long long)version;
+ (id)defaults;
+ (void)setDefaultWithKey:(id)a0 value:(id)a1;
+ (id)defaultProperties;
+ (void)removeDefaults;
+ (id)versionName;
+ (id)defaultValueWithKey:(id)a0 versionName:(id)a1;
+ (double)elapsedTimeSinceFlushForEvent:(long long)a0;
+ (BOOL)eventAllowed:(id)a0;
+ (BOOL)flagWithKey:(id)a0;
+ (void)logEmbeddingPrewarmRequestTime;
+ (id)receiverFeedback;
+ (void)setFlagWithKey:(id)a0 value:(BOOL)a1;
+ (void)setIndexWithKey:(id)a0 value:(unsigned long long)a1;
+ (void)setTimeWithKey:(id)a0 value:(double)a1;
+ (double)timeWithKey:(id)a0;
+ (void)updateDefaultWithKey:(id)a0 value:(id)a1;

- (double)elapsedTime;
- (void)clear;
- (void)end;
- (unsigned long long)maxCount;
- (void)reset;
- (void)start;
- (void)setMaxCount:(unsigned long long)a0;
- (id)init;
- (void)flush;
- (void)logError:(long long)a0;
- (id)feedback;
- (void)setCurrentDate:(id)a0;
- (void).cxx_destruct;
- (void)logErrorItemForBundleID:(id)a0 counts:(id)a1;
- (unsigned long long)bucketedSizeForValue:(id)a0 numBuckets:(unsigned long long)a1;
- (BOOL)canProcessEvent:(id)a0;
- (void)commonInitWithVersionName:(id)a0 dateComponents:(id)a1;
- (BOOL)completedBatch;
- (BOOL)ignoredBatch;
- (unsigned long long)indexWithKey:(id)a0;
- (id)initWithVersionName:(id)a0 dateComponents:(id)a1;
- (void)logCachedItemForBundleID:(id)a0 counts:(id)a1;
- (void)logError:(long long)a0 message:(id)a1;
- (void)logFlag:(long long)a0 message:(id)a1;
- (void)logProcessedItemForBundleID:(id)a0 language:(id)a1 textSize:(unsigned long long)a2 counts:(id)a3;
- (void)logReceivedItemForBundleID:(id)a0 counts:(id)a1 onBattery:(BOOL)a2;
- (long long)periodForMax:(long long)a0;
- (void)sendAnalytics;
- (void)setCompletedBatch:(BOOL)a0;
- (void)setIgnoredBatch:(BOOL)a0;
- (void)setUnitGranularity:(unsigned long long)a0;
- (void)setUnitGranularity:(unsigned long long)a0 periods:(long long)a1;
- (void)updateProcessedItemsDefaults;

@end
