@interface CPSPhotosConfigurationRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (long long)authType;

@end
