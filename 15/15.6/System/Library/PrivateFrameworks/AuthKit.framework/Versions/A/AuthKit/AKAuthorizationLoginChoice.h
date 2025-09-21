@class NSString;

@interface AKAuthorizationLoginChoice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *user;
@property (copy, nonatomic) NSString *site;
@property (nonatomic, getter=isAppleIDAuthorization) char appleIDAuth;
@property (nonatomic, getter=shouldCreateAppleID) char createAppleID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUser:(id)a0 site:(id)a1;

@end
