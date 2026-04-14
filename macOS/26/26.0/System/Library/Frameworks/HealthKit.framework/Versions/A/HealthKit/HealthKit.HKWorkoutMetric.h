@interface HealthKit.HKWorkoutMetric : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ metric;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
