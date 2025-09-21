@class NSArray, PKAccountFundingSourceVerificationAttempt;

@interface PKAccountFundingSourceVerification : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSArray *options;
@property (retain, nonatomic) PKAccountFundingSourceVerificationAttempt *pendingAttempt;
@property (retain, nonatomic) PKAccountFundingSourceVerificationAttempt *failedAttempt;
@property (retain, nonatomic) NSArray *recoveryActions;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
