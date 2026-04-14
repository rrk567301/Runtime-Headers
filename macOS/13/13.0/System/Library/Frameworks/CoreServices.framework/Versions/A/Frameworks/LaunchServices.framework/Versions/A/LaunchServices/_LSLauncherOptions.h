@class NSData;

@interface _LSLauncherOptions : NSObject <NSSecureCoding, NSCopying> {
    NSData *_launcherAuditTokenData;
    BOOL _launcherInSandboxChecked;
    BOOL _launcherInSandbox;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) int launcherPID;
@property (readonly) const struct { unsigned int x0[8]; } *launcherAuditToken;
@property (nonatomic) unsigned int launcherPlatform;
@property (nonatomic) unsigned int launcherSDKVersion;
@property (readonly) BOOL launcherInSandbox;
@property BOOL launcherShouldBeTreatedAsIfInSandbox;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)initWithSelf;
- (BOOL)allowedToLaunchWithEnvironmentVariables;
- (BOOL)allowedToLaunchWithArguments;
- (BOOL)allowedToLaunchWithSTDIO;
- (id)permissibleEnvironmentVariables;

@end
