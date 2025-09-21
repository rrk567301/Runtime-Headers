@class NSString, NSData;

@interface _LSLauncherOptions : NSObject <NSSecureCoding, NSCopying> {
    NSData *_launcherAuditTokenData;
    BOOL _launcherInSandboxChecked;
    BOOL _launcherInSandbox;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *launcherBundleIdentifier;
@property (readonly) int launcherPID;
@property (readonly) const struct { unsigned int x0[8]; } *launcherAuditToken;
@property (nonatomic) unsigned int launcherPlatform;
@property (nonatomic) unsigned int launcherSDKVersion;
@property (readonly) BOOL launcherInSandbox;
@property BOOL launcherShouldBeTreatedAsIfInSandbox;

- (void)setAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)permissibleEnvironmentVariables;
- (BOOL)allowedToLaunchWithArguments;
- (BOOL)allowedToLaunchWithEnvironmentVariables;
- (BOOL)allowedToLaunchWithSTDIO;
- (id)initWithSelf;

@end
