@class NSString;

@interface FMDActivationLockInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isActivationLocked;
@property (retain, nonatomic) NSString *maskedAppleID;
@property (retain, nonatomic) NSString *maskedOrganizationID;
@property (nonatomic) BOOL isOfflineFindingEnabled;
@property (retain, nonatomic) NSString *messageICloudAuth;
@property (retain, nonatomic) NSString *messageOSAuth;
@property (retain, nonatomic) NSString *helpURL;
@property (nonatomic) BOOL supportsDeviceAuth;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
