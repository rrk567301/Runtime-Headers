@class NSString;

@interface SKSubscriptionValidationTokens : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *subscriptionValidationToken;
@property (readonly, nonatomic) NSString *encryptionValidationToken;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubscriptionValidationToken:(id)a0 encryptionValidationToken:(id)a1;
- (BOOL)isEqualToSubscriptionValidationTokens:(id)a0;

@end
