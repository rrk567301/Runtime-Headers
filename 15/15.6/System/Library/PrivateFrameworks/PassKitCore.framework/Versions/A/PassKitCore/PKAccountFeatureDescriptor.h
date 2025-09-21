@class NSDecimalNumber, NSString, NSArray, PKOSVersionRequirementRange;

@interface PKAccountFeatureDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDecimalNumber *minimumAmount;
@property (copy, nonatomic) NSDecimalNumber *maximumAmount;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSArray *supportedNetworks;
@property (nonatomic) unsigned long long merchantCapabilities;
@property (retain, nonatomic) PKOSVersionRequirementRange *osVersionRange;
@property (copy, nonatomic) NSString *fundingSourceTermsIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)isEqualToAccountFeatureDescriptor:(id)a0;

@end
