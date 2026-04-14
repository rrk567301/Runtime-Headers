@interface HealthKit.HKWorkoutMetricsDataSourceConfiguration : HKTaskConfiguration {
    void /* unknown type, empty encoding */ workoutConfiguration;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
