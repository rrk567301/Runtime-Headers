@interface SEMSandboxSettings : SEMSettings <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultSandboxSettings;
+ (id)sandboxSettingsWithLocale:(id)a0 error:(id *)a1;

- (void)refresh;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isSupportedDevicePlatform:(unsigned char)a0;
- (BOOL)isVanillaContainersEnabled;

@end
