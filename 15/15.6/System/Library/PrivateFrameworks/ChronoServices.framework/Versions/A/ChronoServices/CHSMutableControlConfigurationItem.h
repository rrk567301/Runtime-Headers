@interface CHSMutableControlConfigurationItem : CHSControlConfigurationItem

@property (nonatomic) unsigned long long pushPolicy;
@property (nonatomic) char canAppearInSecureEnvironment;
@property (nonatomic) char supportsLowLuminance;
@property (nonatomic) unsigned long long supportedColorSchemes;

- (id)init;
- (id)initWithUniqueIdentifier:(id)a0 controlIdentity:(id)a1;
- (id)initWithUniqueIdentifier:(id)a0 controlIdentity:(id)a1 location:(long long)a2;

@end
