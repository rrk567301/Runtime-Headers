@class NSString;

@interface CHUISMutableControlInstanceConfiguration : CHUISControlInstanceConfiguration

@property (nonatomic) BOOL canAppearInSecureEnvironment;
@property (nonatomic) BOOL supportsLowLuminance;
@property (nonatomic) unsigned long long preferredColorScheme;
@property (nonatomic, copy) NSString *launchOrigin;

- (id)init;
- (id)copyWithZone:(void *)a0;

@end
