@interface OverallMemoryUsage : NSObject

+ (id)accumulateMemoryAcrossPrioritiesWithFootprints:(id)a0 withComparator:(id /* block */)a1;

- (id)init;
- (void)addProcessFootprint:(unsigned long long)a0 withPriority:(int)a1;
- (id)memoryUsageAtEachPriority;
- (id)memoryUsedAtOrAboveEachPriority;
- (id)memoryAvailableAtOrBelowEachPriority;
- (id)systemMemoryStatsDictionary;

@end
