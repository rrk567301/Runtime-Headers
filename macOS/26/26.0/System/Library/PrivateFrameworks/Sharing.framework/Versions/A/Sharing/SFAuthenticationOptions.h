@class NSString, NSData;

@interface SFAuthenticationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *idsDeviceID;
@property (nonatomic) BOOL scanForever;
@property (nonatomic) long long scanTimeout;
@property (nonatomic) BOOL checkLocally;
@property (copy, nonatomic) NSData *acmContext;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *appName;
@property (nonatomic) BOOL biometricOnly;
@property (copy, nonatomic) NSData *authorizationToken;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
