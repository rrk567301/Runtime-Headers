@class NSDictionary, NSString;

@interface AMSMetricsFigaroEventModifier : NSObject

@property (readonly) NSDictionary *fieldFilters;
@property (readonly) NSDictionary *metricsDictionary;
@property (readonly) NSDictionary *overrideDictionary;
@property (readonly) NSString *sampleSessionKey;
@property (readonly) double flushInterval;

- (void).cxx_destruct;
- (id)_createSampleSessionKey;
- (id)_fieldFiltersFromOverrides:(id)a0;
- (id)_overridePropertyForKey:(id)a0;
- (BOOL)_shouldSampleEvent:(id)a0;
- (BOOL)fieldFiltersMatchEvent:(id)a0;
- (id)initWithMetricsDictionary:(id)a0 overrideDictionary:(id)a1;
- (id)preparedEventPromiseWithEvent:(id)a0;
- (id)reportingURLForEvent:(id)a0;
- (BOOL)shouldDropEvent:(id)a0;
- (BOOL)shouldSkipEvent:(id)a0;

@end
