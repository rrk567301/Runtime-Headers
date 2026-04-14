@interface CHSMutableControlConfigurationItem : CHSControlConfigurationItem

@property (nonatomic) unsigned long long pushPolicy;
@property (nonatomic) BOOL canAppearInSecureEnvironment;
@property (nonatomic) BOOL supportsLowLuminance;
@property (nonatomic) unsigned long long supportedColorSchemes;
@property (nonatomic) long long location;

- (id)init;
- (id)copyWithZone:(void *)a0;
- (id)initWithUniqueIdentifier:(id)a0 controlIdentity:(id)a1;
- (id)initWithUniqueIdentifier:(id)a0 controlIdentity:(id)a1 location:(long long)a2;

@end
