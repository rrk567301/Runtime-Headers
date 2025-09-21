@class NSString, PKPayLaterFinancingAmount, NSArray, PKPayLaterFinancingOptionTermsDetails, NSSet, PKCurrencyAmount, NSDictionary, NSDecimalNumber;

@interface PKPayLaterFinancingOption : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long productType;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *selectionIdentifier;
@property (nonatomic) long long installmentCount;
@property (nonatomic) unsigned long long autoPayment;
@property (retain, nonatomic) PKCurrencyAmount *authAmount;
@property (retain, nonatomic) PKPayLaterFinancingAmount *totalAmount;
@property (retain, nonatomic) PKPayLaterFinancingAmount *totalFees;
@property (retain, nonatomic) PKPayLaterFinancingAmount *dueNow;
@property (retain, nonatomic) PKPayLaterFinancingAmount *installmentAmount;
@property (retain, nonatomic) PKPayLaterFinancingAmount *installmentFees;
@property (retain, nonatomic) PKPayLaterFinancingAmount *totalPrincipal;
@property (retain, nonatomic) PKPayLaterFinancingAmount *totalInterest;
@property (nonatomic) char hasAPR;
@property (copy, nonatomic) NSDecimalNumber *apr;
@property (retain, nonatomic) NSArray *installments;
@property (retain, nonatomic) PKPayLaterFinancingOptionTermsDetails *termsDetails;
@property (copy, nonatomic) NSArray *supportedRepaymentNetworks;
@property (nonatomic) unsigned long long merchantCapabilities;
@property (nonatomic) unsigned long long supportedRepaymentTypes;
@property (copy, nonatomic) NSSet *supportedRepaymentCountries;
@property (copy, nonatomic) NSSet *supportedRepaymentFundingSourceIdentifiers;
@property (copy, nonatomic) NSDictionary *financingOptionData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 productType:(unsigned long long)a1;
- (id)analyticsValueForAPR;
- (id)analyticsValueForInstallmentCount;
- (char)isAmountDetailsEqualToFinancingOption:(id)a0;
- (char)isEqualToFinancingOption:(id)a0;

@end
