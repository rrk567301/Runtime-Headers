@class HKQuantityType, NSString;

@interface HKDataCollectorTaskServerConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKQuantityType *quantityType;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) char canResumeFromLastDatum;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithQuantityType:(id)a0 bundleIdentifier:(id)a1 canResumeFromLastDatum:(char)a2;

@end
