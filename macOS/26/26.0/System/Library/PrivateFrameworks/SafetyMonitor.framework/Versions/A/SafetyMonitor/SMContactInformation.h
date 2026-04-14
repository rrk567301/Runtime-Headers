@class NSString;

@interface SMContactInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *phoneNumber;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEmail:(id)a0 phoneNumber:(id)a1;

@end
