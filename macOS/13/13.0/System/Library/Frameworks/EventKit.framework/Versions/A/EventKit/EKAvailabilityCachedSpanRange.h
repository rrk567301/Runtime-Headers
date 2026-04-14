@class NSMutableArray;

@interface EKAvailabilityCachedSpanRange : NSObject {
    NSMutableArray *_cachedSpans;
}

+ (id)_clampDateRangeForSpans:(id)a0 startDate:(id)a1 endDate:(id)a2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)spans;
- (id)gatherFreshlyCachedSpansBetweenStartDate:(id)a0 endDate:(id)a1;
- (long long)_currentMaxSpanTypeIn:(id)a0;
- (void)sanitizeAndInsertResults:(id)a0 inRange:(id)a1;
- (id)cachedSpansFromSpans:(id)a0;
- (BOOL)spanType:(long long)a0 isSimilarToSpanType:(long long)a1;
- (id)mergeSpansOfSameType:(id)a0;
- (void)insertSpans:(id)a0;
- (BOOL)_rangeCompletelyCoversPeriodBetweenStartDate:(id)a0 endDate:(id)a1;

@end
