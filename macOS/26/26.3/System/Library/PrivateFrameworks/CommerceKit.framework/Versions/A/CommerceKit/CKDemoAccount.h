@class NSString;

@interface CKDemoAccount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *username;
@property (readonly) NSString *password;
@property BOOL autoLogin;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUsername:(id)a0 password:(id)a1;

@end
