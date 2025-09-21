@class NSString;

@interface CHUISMutableControlInstanceConfiguration : CHUISControlInstanceConfiguration

@property (nonatomic) char canAppearInSecureEnvironment;
@property (nonatomic) char supportsLowLuminance;
@property (nonatomic) unsigned long long preferredColorScheme;
@property (nonatomic, copy) NSString *launchOrigin;

- (id)copyWithZone:(void *)a0;
- (id)init;

@end
