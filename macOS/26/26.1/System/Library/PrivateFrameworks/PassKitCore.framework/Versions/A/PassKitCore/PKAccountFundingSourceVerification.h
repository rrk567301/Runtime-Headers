@class NSArray, PKAccountFundingSourceVerificationAttempt;

@interface PKAccountFundingSourceVerification : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSArray *options;
@property (retain, nonatomic) PKAccountFundingSourceVerificationAttempt *pendingAttempt;
@property (retain, nonatomic) PKAccountFundingSourceVerificationAttempt *failedAttempt;
@property (retain, nonatomic) NSArray *recoveryActions;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
