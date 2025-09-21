@class NSDictionary, NSString;

@interface AMSMetricsFigaroEventModifier : NSObject

@property (readonly, nonatomic) NSDictionary *fieldFilters;
@property (readonly, nonatomic) NSDictionary *metricsDictionary;
@property (readonly, nonatomic) NSDictionary *overrideDictionary;
@property (readonly, nonatomic) NSString *sampleSessionKey;
@property (readonly, nonatomic) double flushInterval;

- (void).cxx_destruct;
- (id)_createSampleSessionKey;
- (id)_fieldFiltersFromOverrides:(id)a0;
- (id)_overridePropertyForKey:(id)a0;
- (char)_shouldSampleEvent:(id)a0;
- (char)fieldFiltersMatchEvent:(id)a0;
- (id)initWithMetricsDictionary:(id)a0 overrideDictionary:(id)a1;
- (id)preparedEventWithEvent:(id)a0;
- (id)reportingURLForEvent:(id)a0;
- (char)shouldDropEvent:(id)a0;
- (char)shouldSkipEvent:(id)a0;

@end
