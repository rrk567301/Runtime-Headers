@class NSString;

@interface VSAutoSignInToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long authorization;
@property (readonly, nonatomic) NSString *value;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAuthorization:(long long)a0 value:(id)a1;

@end
