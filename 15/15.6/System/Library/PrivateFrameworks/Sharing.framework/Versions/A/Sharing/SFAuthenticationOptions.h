@class NSData, NSString;

@interface SFAuthenticationOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *acmContext;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *appName;
@property (nonatomic) char biometricOnly;
@property (copy, nonatomic) NSData *authorizationToken;
@property (copy, nonatomic) NSString *idsDeviceID;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
