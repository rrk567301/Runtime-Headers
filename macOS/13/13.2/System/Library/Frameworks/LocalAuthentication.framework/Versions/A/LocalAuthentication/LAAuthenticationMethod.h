@class NSString;

@interface LAAuthenticationMethod : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) LAAuthenticationMethod *passwordMethod;
@property (class, readonly, nonatomic) LAAuthenticationMethod *biometricMethod;
@property (class, readonly, nonatomic) LAAuthenticationMethod *tokenMethod;
@property (class, readonly, nonatomic) LAAuthenticationMethod *watchMethod;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) long long priority;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
