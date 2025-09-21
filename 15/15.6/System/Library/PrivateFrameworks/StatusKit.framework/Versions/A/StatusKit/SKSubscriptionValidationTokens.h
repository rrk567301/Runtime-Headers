@class NSString;

@interface SKSubscriptionValidationTokens : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *subscriptionValidationToken;
@property (readonly, nonatomic) NSString *encryptionValidationToken;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSubscriptionValidationToken:(id)a0 encryptionValidationToken:(id)a1;
- (char)isEqualToSubscriptionValidationTokens:(id)a0;

@end
