@class NSArray, PKExternalProvisioningPolicy;

@interface PKExternalProvisioningOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKExternalProvisioningPolicy *policy;
@property (nonatomic) unsigned long long authorizationType;
@property (retain, nonatomic) NSArray *devices;

+ (id)mockOptions;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToExternalProvisioningOptions:(id)a0;

@end
