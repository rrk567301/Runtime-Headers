@class NSString;

@interface SMContactInformation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *phoneNumber;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEmail:(id)a0 phoneNumber:(id)a1;

@end
