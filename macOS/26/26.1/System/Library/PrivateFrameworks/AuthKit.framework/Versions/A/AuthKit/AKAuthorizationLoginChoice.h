@class NSString;

@interface AKAuthorizationLoginChoice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *user;
@property (copy, nonatomic) NSString *site;
@property (nonatomic, getter=isAppleIDAuthorization) BOOL appleIDAuth;
@property (nonatomic, getter=shouldCreateAppleID) BOOL createAppleID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUser:(id)a0 site:(id)a1;

@end
