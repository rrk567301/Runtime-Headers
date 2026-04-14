@class NSDate, NSString, PKPayLaterFinancingPlanScheduleSummary, NSArray, PKPayLaterFinancingPlanSummary, PKPayLaterFinancingPlanFundingSource, PKPayLaterPaymentSource, PKPayLaterMerchant, PKPayLaterFinancingPlanTermsDetails;

@interface PKPayLaterFinancingPlan : NSObject <NSSecureCoding, NSCopying> {
    PKPayLaterPaymentSource *_paymentSource;
    NSString *_fundingSourceName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *planIdentifier;
@property (nonatomic) unsigned long long productType;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long stateReason;
@property (nonatomic) unsigned long long planChannel;
@property (retain, nonatomic) PKPayLaterFinancingPlanSummary *planSummary;
@property (retain, nonatomic) PKPayLaterFinancingPlanScheduleSummary *scheduleSummary;
@property (retain, nonatomic) NSArray *disputes;
@property (retain, nonatomic) PKPayLaterMerchant *merchant;
@property (retain, nonatomic) PKPayLaterFinancingPlanFundingSource *fundingSource;
@property (retain, nonatomic) PKPayLaterFinancingPlanTermsDetails *termsDetails;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) unsigned long long updateReasons;

+ (id)aprStringForNumber:(id)a0;
+ (BOOL)canMakePaymentsWithAccountState:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)displayableLoanIdentiifer;
- (BOOL)installmentWasPaidEarly:(id)a0;
- (id)nextDueInstallmentAfterInstallmentIdentifier:(id)a0;
- (id)paymentSource;
- (id)fundingSourceName;
- (void)_loadPaymentSource;
- (BOOL)updateReasonIsInitialDownload;
- (void)addUpdateReasons:(unsigned long long)a0;
- (id)refundPaymentsNotAssociatedWithDispute;
- (id)disputeWithIdentifier:(id)a0;
- (BOOL)isEqualToPayLaterFinancingPlan:(id)a0;

@end
