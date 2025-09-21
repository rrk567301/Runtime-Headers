@interface HKMCPregnancyStateQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) char isRunningForMaintenance;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
