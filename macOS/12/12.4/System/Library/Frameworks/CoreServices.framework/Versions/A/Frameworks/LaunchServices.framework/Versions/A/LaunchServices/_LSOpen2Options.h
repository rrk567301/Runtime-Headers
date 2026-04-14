@class NSString, NSDictionary, NSURL, NSArray, NSNumber;

@interface _LSOpen2Options : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char preferRunningInstance;
@property (nonatomic) BOOL captureDiagnostics;
@property (nonatomic) BOOL allowErrorUI;
@property (copy, nonatomic) NSString *launchReason;
@property (copy, nonatomic) NSDictionary *launchInfo;
@property (copy, nonatomic) NSURL *referrerURL;
@property (nonatomic) BOOL requiresUniversalLinks;
@property (copy, nonatomic) id userInfo;
@property (copy, nonatomic) NSString *overrideBackgroundPriorityName;
@property (copy, nonatomic) NSNumber *launchUID;
@property (copy, nonatomic) NSNumber *launchSessionID;
@property (copy, nonatomic) NSString *overrideApplicationType;
@property (copy, nonatomic) NSURL *stdInPath;
@property (copy, nonatomic) NSURL *stdOutPath;
@property (copy, nonatomic) NSURL *stdErrPath;
@property (nonatomic) BOOL skipWaitForCheckIn;
@property (nonatomic) BOOL launchWhenThisProcessExits;
@property (nonatomic) BOOL notRelaunchedForTAL;
@property (copy, nonatomic) NSArray *requestedArchitectures;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
