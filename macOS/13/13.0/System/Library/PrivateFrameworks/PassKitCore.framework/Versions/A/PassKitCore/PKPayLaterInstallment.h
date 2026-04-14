@class NSString, NSArray, PKCurrencyAmount, NSDate;

@interface PKPayLaterInstallment : NSObject <NSSecureCoding, NSCopying> {
    NSDate *_payoffDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *installmentIdentifier;
@property (copy, nonatomic) NSString *planIdentifier;
@property (copy, nonatomic) NSArray *appliedPayments;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) PKCurrencyAmount *totalAmount;
@property (copy, nonatomic) PKCurrencyAmount *currentBalance;
@property (copy, nonatomic) NSDate *dueDate;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *payments;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)amountPaid;
- (id)payoffDate;
- (BOOL)paymentIdentitiferContributedToInstallment:(id)a0;
- (BOOL)isEqualToPayLaterInstallment:(id)a0;

@end
