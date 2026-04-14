@class NSArray, PKAccountFundingSourceVerificationAttempt;

@interface PKAccountFundingSourceVerification : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long status;
@property (readonly, copy, nonatomic) NSArray *options;
@property (readonly, copy, nonatomic) PKAccountFundingSourceVerificationAttempt *pendingAttempt;
@property (readonly, nonatomic) PKAccountFundingSourceVerificationAttempt *failedAttempt;
@property (readonly, nonatomic) NSArray *recoveryActions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
