@class NSString, PKPaymentRewardsRedemptionDetails, NSURL, NSDate;

@interface PKPaymentRewardsRedemption : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *balanceIdentifier;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSURL *statusLink;
@property (copy, nonatomic) NSString *paymentHash;
@property (copy, nonatomic) NSDate *createdAt;
@property (copy, nonatomic) NSDate *updatedAt;
@property (copy, nonatomic) PKPaymentRewardsRedemptionDetails *details;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (BOOL)hasOriginalTransactionDetails;
- (id)initWithIdentifier:(id)a0 balanceIdentifier:(id)a1 status:(unsigned long long)a2 statusLink:(id)a3 paymentHash:(id)a4;
- (id)initWithIdentifier:(id)a0 balanceIdentifier:(id)a1 status:(unsigned long long)a2 statusLink:(id)a3 paymentHash:(id)a4 createdAt:(id)a5 updatedAt:(id)a6;
- (void)setOriginalTransactionDetails:(id)a0;

@end
