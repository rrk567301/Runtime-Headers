@class NSString, NSDictionary, NSURL, NSData, NSNumber, NSArray;

@interface _LSOpen2Options : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned char preferRunningInstance;
@property (nonatomic) char captureDiagnostics;
@property (nonatomic) char allowErrorUI;
@property (copy, nonatomic) NSString *launchReason;
@property (copy, nonatomic) NSDictionary *launchInfo;
@property (copy, nonatomic) NSURL *referrerURL;
@property (nonatomic) char requiresUniversalLinks;
@property (copy, nonatomic) id userInfo;
@property (copy, nonatomic) NSString *overrideBackgroundPriorityName;
@property (copy, nonatomic) NSNumber *launchUID;
@property (copy, nonatomic) NSNumber *launchSessionID;
@property (copy, nonatomic) NSString *overrideApplicationType;
@property (copy, nonatomic) NSURL *stdInPath;
@property (copy, nonatomic) NSURL *stdOutPath;
@property (copy, nonatomic) NSURL *stdErrPath;
@property (nonatomic) char skipWaitForCheckIn;
@property (nonatomic) char launchWhenThisProcessExits;
@property (nonatomic) char notRelaunchedForTAL;
@property (nonatomic) char launchOutOfProcess;
@property (nonatomic) const struct { unsigned int x0[8]; } *launcherAuditToken;
@property (copy, nonatomic) NSData *launcherAuditTokenData;
@property (copy, nonatomic) NSArray *requestedArchitectures;
@property (nonatomic) char inheritCurrentEnvironment;
@property (copy, nonatomic) NSDictionary *overriddenSpawnConstraints;
@property (copy, nonatomic) NSDictionary *spawnConstraints;
@property (copy, nonatomic) NSURL *templateApplicationBundleURL;
@property (readonly, nonatomic) NSDictionary *_creationDictionary;

+ (id)defaultOptions;
+ (id)open2OptionsFromOptionsDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (const struct { unsigned int x0[8]; } *)launcherAuditToken;
- (void)setLauncherAuditToken:(const struct { unsigned int x0[8]; } *)a0;

@end
