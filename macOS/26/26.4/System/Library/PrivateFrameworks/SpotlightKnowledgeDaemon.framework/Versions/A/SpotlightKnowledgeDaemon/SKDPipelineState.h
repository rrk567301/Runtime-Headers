@class NSString, NSMutableDictionary;
@protocol SKDTimestampedStore, SKDMappedStore;

@interface SKDPipelineState : NSObject {
    NSString *_domain;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_keysToName;
    NSMutableDictionary *_namesToKey;
    id<SKDMappedStore, SKDTimestampedStore> _persistedStore;
}

@property (readonly, nonatomic) id<SKDMappedStore, SKDTimestampedStore> persistedStore;
@property (readonly, nonatomic) double timestamp;

+ (id)sharedState;

- (unsigned long long)versionNumber;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithDomain:(id)a0;
- (void)setTimestamp:(double)a0;
- (void)setVersionNumber:(unsigned long long)a0;
- (int)_lock_calculateAndResetChangeSinceLastFetchForKey:(id)a0 withLastMetricsFetchKey:(id)a1 forPipelineMapName:(id)a2;
- (id)_lock_nameForMapKey:(id)a0 value:(id)a1;
- (void)addItemsProcessed:(id)a0 jobType:(id)a1 forPipeline:(id)a2;
- (void)addItemsUnprocessed:(id)a0 jobType:(id)a1 forPipeline:(id)a2;
- (void)addJournalsPurged:(id)a0 forPipeline:(id)a1;
- (void)addTimeSpentProcessing:(id)a0 forPipeline:(id)a1;
- (void)decrementItemsAwaitingRedonationForBundleID:(id)a0 forPipeline:(id)a1;
- (id)estimatedItemsAwaitingRedonationByBundleForPipeline:(id)a0;
- (id)fetchMetricsFieldsAndSetDate:(id)a0 forPipelines:(id)a1;
- (void)incrementCountForStatus:(unsigned char)a0 hasProcessingResult:(BOOL)a1 forPipeline:(id)a2;
- (void)incrementItemsAwaitingRedonationForBundleID:(id)a0 forPipeline:(id)a1;
- (void)incrementProcessedRedonationRequestsForBundleID:(id)a0 forPipeline:(id)a1;
- (void)incrementRedonationRequestsForBundleID:(id)a0 forPipelines:(id)a1 existingRequest:(BOOL)a2;
- (id)journalCookieForPipeline:(id)a0 indexType:(unsigned int)a1;
- (id)mapKeyForName:(id)a0;
- (id)nameForMapKey:(id)a0 value:(id)a1;
- (id)pipelinesByTimestamp;
- (void)removeSerialNumberForPipeline:(id)a0 forIndexType:(unsigned int)a1;
- (unsigned long long)serialNumberForPipeline:(id)a0 indexType:(unsigned int)a1;
- (void)setJournalCookie:(id)a0 forPipeline:(id)a1 forIndexType:(unsigned int)a2;
- (void)setNumItemsAwaitingRedonationPerBundleID:(id)a0 forPipeline:(id)a1;
- (void)setPipelineEnablement:(BOOL)a0 forPipeline:(id)a1 version:(id)a2 atDate:(id)a3;
- (void)setSerialNumber:(unsigned long long)a0 forPipeline:(id)a1 forIndexType:(unsigned int)a2;
- (void)setSerialNumber:(unsigned long long)a0 journalCookie:(id)a1 forPipeline:(id)a2 forIndexType:(unsigned int)a3;

@end
