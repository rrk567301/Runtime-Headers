@class PKPassProvisioningMetadata;

@interface PKPassIngestionProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPassProvisioningMetadata *provisioningMetadata;
@property (nonatomic) BOOL hasCustomizedSettings;
@property (nonatomic) unsigned long long settings;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
