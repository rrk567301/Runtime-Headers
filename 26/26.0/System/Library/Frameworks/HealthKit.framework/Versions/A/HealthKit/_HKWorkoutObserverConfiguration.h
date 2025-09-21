@interface _HKWorkoutObserverConfiguration : HKTaskConfiguration

@property (nonatomic) BOOL reportInactiveSessions;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
