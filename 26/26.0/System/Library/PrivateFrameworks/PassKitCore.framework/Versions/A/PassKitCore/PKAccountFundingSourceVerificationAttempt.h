@class NSDate;

@interface PKAccountFundingSourceVerificationAttempt : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDate *sentDate;
@property (copy, nonatomic) NSDate *expiryDate;
@property (nonatomic) unsigned long long failureReason;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
