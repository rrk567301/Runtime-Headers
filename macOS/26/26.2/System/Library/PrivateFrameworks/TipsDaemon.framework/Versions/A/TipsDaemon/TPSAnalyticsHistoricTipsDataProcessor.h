@class NSDate;

@interface TPSAnalyticsHistoricTipsDataProcessor : TPSAnalyticsProcessor {
    NSDate *_currentDate;
}

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)_daysBetweenDate:(id)a0 andOtherDate:(id)a1;
- (id)_furthestLookbackDate;
- (BOOL)_shouldProceedWithCrunching;
- (void)processAnalytics:(id /* block */)a0;
- (void)resetAnalytics;
- (void)updateDisplayedCount:(long long *)a0 andFrequencyControlCount:(long long *)a1 forTipStatus:(id)a2 andLookbackDate:(id)a3;

@end
