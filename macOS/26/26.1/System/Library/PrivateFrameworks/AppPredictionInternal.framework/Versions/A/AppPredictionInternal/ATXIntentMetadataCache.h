@class ATXIntentMetadataCacheInvalidationMonitor, _ATXDataStore;

@interface ATXIntentMetadataCache : NSObject <ATXIntentMetadataCacheInvalidationDelegate> {
    _ATXDataStore *_dataStore;
    ATXIntentMetadataCacheInvalidationMonitor *_invalidationCriteria;
}

+ (id)sharedInstance;

- (void)applicationsDidUninstall:(id)a0;
- (void)_setEligibleForWidgets:(BOOL)a0 intent:(id)a1;
- (id)titleForIntent:(id)a0 localeIdentifier:(id)a1;
- (id)initWithDataStore:(id)a0 cacheInvalidationCriteria:(id)a1 startMonitoring:(BOOL)a2;
- (id)initInternal;
- (void)setValidParameterCombinationsWithSchema:(id)a0 intent:(id)a1;
- (void)_setTitle:(id)a0 cacheKey:(id)a1;
- (id)_getCachedSubtitleForCacheKey:(id)a0;
- (void)applicationsDidUpdate:(id)a0;
- (id)_getCachedEligibleForWidgetsForIntent:(id)a0;
- (id)validParameterCombinationsWithSchemaForIntent:(id)a0;
- (id)_getCachedSupportsBackgroundExecutionForIntent:(id)a0;
- (void).cxx_destruct;
- (void)_setSubtitle:(id)a0 cacheKey:(id)a1;
- (void)_setSupportsBackgroundExecution:(BOOL)a0 intent:(id)a1;
- (id)_getCachedTitleForCacheKey:(id)a0;
- (BOOL)isEligibleForWidgetsForIntent:(id)a0;
- (void)systemDidUpdate;
- (id)subtitleForIntent:(id)a0 localeIdentifier:(id)a1;
- (BOOL)supportsBackgroundExecutionForIntent:(id)a0;

@end
