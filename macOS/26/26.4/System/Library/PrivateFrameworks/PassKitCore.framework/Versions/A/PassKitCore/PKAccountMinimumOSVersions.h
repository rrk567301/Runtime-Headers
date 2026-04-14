@class PKOSVersionRequirement, NSURL, NSDate;

@interface PKAccountMinimumOSVersions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKOSVersionRequirement *versions;
@property (nonatomic, setter=setDeviceEligibleForUpgrade:) BOOL isDeviceEligibleForUpgrade;
@property (retain, nonatomic) NSDate *effectiveDate;
@property (nonatomic) BOOL shouldDisplayEffectiveDate;
@property (retain, nonatomic) NSURL *ineligibleLearnMoreURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToAccountMinimumOSVersions:(id)a0;

@end
