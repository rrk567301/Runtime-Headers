@class RTManagedConfiguration;

@interface RTWorkoutMetricsManager : NSObject

@property (retain, nonatomic) RTManagedConfiguration *managedConfiguration;

+ (id)stringFromWorkoutMetricsEvent:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithManagedConfiguration:(id)a0;
- (BOOL)submitMetricsForEvent:(unsigned long long)a0 data:(id)a1 error:(id *)a2;

@end
