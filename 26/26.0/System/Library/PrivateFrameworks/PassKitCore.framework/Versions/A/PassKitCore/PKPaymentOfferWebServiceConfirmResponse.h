@class NSString, NSURL, PKPaymentRewardsRedemption;

@interface PKPaymentOfferWebServiceConfirmResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *paymentHash;
@property (readonly, nonatomic) NSURL *issuerInstallmentManagementURL;
@property (readonly, nonatomic) PKPaymentRewardsRedemption *redemption;
@property (readonly, nonatomic) unsigned long long followUpAction;

+ (BOOL)jsonDataOptional;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
