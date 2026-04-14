@class NSDate, NSString, NSURL, PKPaymentOfferInstallmentMerchantDetails, PKPaymentOfferInstallmentDownpaymentDetails, PKCurrencyAmount, PKPaymentOfferInstallmentInterestDetails, PKPaymentOfferInstallmentFeeDetails, NSDictionary, PKPaymentOfferDynamicContent;

@interface PKPaymentOfferInstallmentAssessmentOffer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSURL *serviceProviderURL;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDate *dueDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) double stickyDuration;
@property (retain, nonatomic) PKCurrencyAmount *totalCost;
@property (nonatomic) long long installmentCount;
@property (nonatomic) unsigned long long installmentPeriod;
@property (nonatomic) long long installmentInterval;
@property (retain, nonatomic) PKCurrencyAmount *installmentAmount;
@property (retain, nonatomic) PKPaymentOfferInstallmentFeeDetails *feeDetails;
@property (retain, nonatomic) PKPaymentOfferInstallmentInterestDetails *interestDetails;
@property (retain, nonatomic) PKPaymentOfferInstallmentDownpaymentDetails *downpaymentDetails;
@property (retain, nonatomic) PKPaymentOfferInstallmentMerchantDetails *merchantDetails;
@property (retain, nonatomic) PKCurrencyAmount *totalInterestAndFeesAmount;
@property (copy, nonatomic) NSDictionary *serviceProviderData;
@property (retain, nonatomic) PKPaymentOfferDynamicContent *dynamicContent;
@property (copy, nonatomic) NSString *preferredLanguage;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
