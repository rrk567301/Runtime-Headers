@class NSDate, NSString, PKPayLaterFinancingPlanScheduleSummary, NSArray, PKPayLaterFinancingPlanSummary, PKPayLaterFinancingPlanFundingSource, PKPayLaterPaymentSource, PKPayLaterMerchant, PKPayLaterFinancingPlanTermsDetails;

@interface PKPayLaterFinancingPlan : NSObject <NSSecureCoding, NSCopying> {
    PKPayLaterPaymentSource *_paymentSource;
    NSString *_fundingSourceName;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *planIdentifier;
@property (nonatomic) unsigned long long productType;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long stateReason;
@property (nonatomic) unsigned long long planChannel;
@property (nonatomic) char requiresGenericMessaging;
@property (nonatomic, getter=isCancellable) char cancellable;
@property (retain, nonatomic) PKPayLaterFinancingPlanSummary *planSummary;
@property (retain, nonatomic) PKPayLaterFinancingPlanScheduleSummary *scheduleSummary;
@property (retain, nonatomic) NSArray *disputes;
@property (retain, nonatomic) PKPayLaterMerchant *merchant;
@property (retain, nonatomic) PKPayLaterFinancingPlanFundingSource *fundingSource;
@property (retain, nonatomic) PKPayLaterFinancingPlanTermsDetails *termsDetails;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) unsigned long long updateReasons;

+ (id)activeFinancingPlanStates;
+ (id)aprStringForNumber:(id)a0;
+ (char)canMakePaymentsWithAccountState:(unsigned long long)a0;
+ (id)completedFinancingPlanStates;
+ (id)pendingFinancingPlanStates;
+ (char)requiresGenericMessagingForAccount:(id)a0 financingPlans:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)isEqualToPayLaterFinancingPlan:(id)a0;
- (void)_loadPaymentSource;
- (void)addUpdateReasons:(unsigned long long)a0;
- (id)displayableLoanIdentifier;
- (id)disputeWithIdentifier:(id)a0;
- (id)fundingSourceName;
- (char)installmentWasPaidEarly:(id)a0;
- (id)nextDueInstallmentAfterInstallmentIdentifier:(id)a0;
- (id)paymentSource;
- (id)refundPaymentsNotAssociatedWithDispute;
- (char)updateReasonIsInitialDownload;

@end
