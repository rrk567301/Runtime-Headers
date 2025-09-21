@class NSArray, NSMutableDictionary, NSURL, NSDictionary;

@interface PPSValueConverter : NSObject {
    NSURL *_filepath;
    NSArray *_sortedTimelineIntervals;
    NSDictionary *_selectedHistory;
}

@property (retain) NSArray *metrics;
@property (retain) NSMutableDictionary *timeline;

- (void).cxx_destruct;
- (id)_category;
- (id)_latestInterval;
- (char)_allowConversionFromMetric:(id)a0 toMetric:(id)a1;
- (id)_convertEvent:(id)a0;
- (id)_convertValue:(id)a0 atTimestamp:(double)a1 usingMetric:(id)a2;
- (char)_isInitialized;
- (id)_latestHistory;
- (id)_latestMetricForMetricName:(id)a0;
- (void)_performGeneration;
- (char)_shouldConvertAtTimestamp:(double)a0;
- (char)_shouldConvertEvent:(id)a0;
- (id)_sourceMetricForMetricName:(id)a0;
- (id)_subsystem;
- (id)convertEventIfNecessary:(id)a0;
- (id)convertValueIfNeccesary:(id)a0 atTimestamp:(double)a1 usingMetric:(id)a2;
- (id)initWithFilepath:(id)a0 andMetrics:(id)a1;

@end
