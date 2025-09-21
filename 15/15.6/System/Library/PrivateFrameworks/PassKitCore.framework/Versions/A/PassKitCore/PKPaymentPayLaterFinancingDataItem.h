@class PKPayLaterFinancingOption, PKPayLaterProductAssessmentCollection;

@interface PKPaymentPayLaterFinancingDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKPayLaterFinancingOption *selectedFinancingOption;
@property (readonly, nonatomic) PKPayLaterFinancingOption *previouslySelectedFinancingOption;
@property (readonly, nonatomic) PKPayLaterProductAssessmentCollection *assessmentCollection;

+ (long long)dataType;

- (long long)context;
- (id)errors;
- (char)isValidWithError:(id *)a0;
- (id)billingAddress;
- (char)isValidWithError:(id *)a0 errorStatus:(long long *)a1;
- (id)paymentContactFormatErrors;
- (char)requiresBillingAddress;

@end
