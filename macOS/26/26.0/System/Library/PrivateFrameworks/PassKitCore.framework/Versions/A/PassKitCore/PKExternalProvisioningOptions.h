@class NSArray, PKExternalProvisioningPolicy;

@interface PKExternalProvisioningOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKExternalProvisioningPolicy *policy;
@property (nonatomic) unsigned long long authorizationType;
@property (retain, nonatomic) NSArray *devices;

+ (id)mockOptions;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToExternalProvisioningOptions:(id)a0;

@end
