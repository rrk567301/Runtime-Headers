@class NSDictionary, NSString;

@interface AMSMetricsFigaroEventModifier : NSObject

@property (readonly) NSDictionary *fieldFilters;
@property (readonly) NSDictionary *metricsDictionary;
@property (readonly) NSDictionary *overrideDictionary;
@property (readonly) NSString *sampleSessionKey;
@property (readonly) double flushInterval;

- (void).cxx_destruct;
- (id)initWithMetricsDictionary:(id)a0 overrideDictionary:(id)a1;
- (BOOL)fieldFiltersMatchEvent:(id)a0;
- (id)_fieldFiltersFromOverrides:(id)a0;
- (id)_createSampleSessionKey;
- (id)_overridePropertyForKey:(id)a0;
- (id)_treatmentsPayloadForTopic:(id)a0;
- (BOOL)_shouldSampleEvent:(id)a0;
- (id)prepareEvent:(id)a0;
- (id)reportingURLForEvent:(id)a0;
- (BOOL)shouldDropEvent:(id)a0;
- (BOOL)shouldSkipEvent:(id)a0;

@end
