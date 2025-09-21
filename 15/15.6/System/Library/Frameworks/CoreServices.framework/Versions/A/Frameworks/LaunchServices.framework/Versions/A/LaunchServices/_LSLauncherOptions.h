@class NSData;

@interface _LSLauncherOptions : NSObject <NSSecureCoding, NSCopying> {
    NSData *_launcherAuditTokenData;
    char _launcherInSandboxChecked;
    char _launcherInSandbox;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) int launcherPID;
@property (readonly) const struct { unsigned int x0[8]; } *launcherAuditToken;
@property (nonatomic) unsigned int launcherPlatform;
@property (nonatomic) unsigned int launcherSDKVersion;
@property (readonly) char launcherInSandbox;
@property char launcherShouldBeTreatedAsIfInSandbox;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)permissibleEnvironmentVariables;
- (char)allowedToLaunchWithArguments;
- (char)allowedToLaunchWithEnvironmentVariables;
- (char)allowedToLaunchWithSTDIO;
- (id)initWithSelf;
- (void)setAuditToken:(struct { unsigned int x0[8]; })a0;

@end
