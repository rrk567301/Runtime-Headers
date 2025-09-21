@class PKAccountPaymentFundingSource, PKApplyVerificationPage;

@interface PKAccountWebServiceAddFundingSourceResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKAccountPaymentFundingSource *fundingSource;
@property (readonly, copy, nonatomic) PKApplyVerificationPage *confirmationPage;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
