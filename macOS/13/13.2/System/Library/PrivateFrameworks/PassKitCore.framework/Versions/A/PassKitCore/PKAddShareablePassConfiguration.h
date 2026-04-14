@class NSArray, NSString;

@interface PKAddShareablePassConfiguration : PKAddSecureElementPassConfiguration

@property (readonly, nonatomic) BOOL requiresUnifiedAccessCapableDevice;
@property (nonatomic) BOOL skipNonceValidityChecks;
@property (readonly, nonatomic) unsigned long long primaryAction;
@property (readonly, nonatomic) NSArray *credentialsMetadata;
@property (readonly, nonatomic) NSString *provisioningPolicyIdentifier;

+ (BOOL)supportsSecureCoding;
+ (void)configurationForPassMetadata:(id)a0 provisioningPolicyIdentifier:(id)a1 primaryAction:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)configurationForPassMetadata:(id)a0 primaryAction:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)_configurationForPassMetadata:(id)a0 provisioningPolicyIdentifier:(id)a1 primaryAction:(unsigned long long)a2 completion:(id /* block */)a3;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)initWithPrimaryAction:(unsigned long long)a0 credentialsMetadata:(id)a1;
- (BOOL)hasRequiredDataForProvisioning;
- (id)_PKAddShareablePassConfigurationPrimaryActionToString:(unsigned long long)a0;

@end
