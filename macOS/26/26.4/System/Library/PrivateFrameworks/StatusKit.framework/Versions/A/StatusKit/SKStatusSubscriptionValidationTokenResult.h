@interface SKStatusSubscriptionValidationTokenResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long validity;
@property (readonly, nonatomic) long long unmatchedField;
@property (readonly, nonatomic) BOOL isExpectedFailure;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initInvalidWithUnmatchedField:(long long)a0 isExpectedFailure:(BOOL)a1;
- (id)initUnknown;
- (id)initValid;

@end
