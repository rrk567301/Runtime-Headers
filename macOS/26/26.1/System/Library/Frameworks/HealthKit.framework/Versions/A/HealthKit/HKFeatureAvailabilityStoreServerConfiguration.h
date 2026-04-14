@class NSString;

@interface HKFeatureAvailabilityStoreServerConfiguration : HKTaskConfiguration

@property (readonly, copy, nonatomic) NSString *featureIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithFeatureIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
