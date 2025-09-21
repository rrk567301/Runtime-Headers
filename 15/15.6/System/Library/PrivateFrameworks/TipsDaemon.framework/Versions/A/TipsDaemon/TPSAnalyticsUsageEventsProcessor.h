@class NSDate;

@interface TPSAnalyticsUsageEventsProcessor : TPSAnalyticsProcessor {
    NSDate *_currentDate;
}

+ (char)_tipStatusValidForLiftProcessing:(id)a0 contextualInfo:(id)a1 firstShownDate:(id)a2;
+ (id)_firstShownDateForTipStatus:(id)a0;
+ (id)_notifiedDateForTipStatus:(id)a0;
+ (id)_preHintRangeOutOfBoundsForIdentifier:(id)a0;
+ (id)_preHintUsageKeyForIdentifier:(id)a0;
+ (id)_usageEventsProcessedKeyForIdentifier:(id)a0;
+ (char)_validateContextualInfo:(id)a0 forDisplayType:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)setCurrentDate:(id)a0;
- (void)_calculateLift:(id)a0 completion:(id /* block */)a1;
- (void)_countsForEvent:(id)a0 interval:(id)a1 completion:(id /* block */)a2;
- (void)_saveHistoricalUsage:(id)a0 completion:(id /* block */)a1;
- (void)_savePreHintRangeOutOfBounds:(char)a0 forIdentifier:(id)a1;
- (char)_shouldCalculateLift:(id)a0;
- (void)processAnalytics:(id /* block */)a0;
- (void)resetAnalytics;

@end
