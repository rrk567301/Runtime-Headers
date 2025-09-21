@class NSString;

@interface FMDActivationLockInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (nonatomic) char isActivationLocked;
@property (retain, nonatomic) NSString *maskedAppleID;
@property (retain, nonatomic) NSString *maskedOrganizationID;
@property (nonatomic) char isOfflineFindingEnabled;
@property (retain, nonatomic) NSString *messageICloudAuth;
@property (retain, nonatomic) NSString *messageOSAuth;
@property (retain, nonatomic) NSString *helpURL;
@property (nonatomic) char supportsDeviceAuth;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
