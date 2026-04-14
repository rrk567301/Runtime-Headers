@interface HealthKit.HKWorkoutMetric : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ metric;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
