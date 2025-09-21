@interface SEMSandboxSettings : SEMSettings <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

+ (id)defaultSandboxSettings;
+ (id)sandboxSettingsWithLocale:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)refresh;
- (char)isSupportedDevicePlatform:(unsigned char)a0;
- (char)isVanillaContainersEnabled;

@end
