@class NSString, NSData, PKPaymentRewardsRedemption, NSURL, PKAccount;

@interface PKPaymentRewrapResponseBase : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSData *rewrappedPaymentData;
@property (readonly, copy, nonatomic) NSString *transactionIdentifier;
@property (readonly, copy, nonatomic) NSString *primaryAccountNumberSuffix;
@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) PKPaymentRewardsRedemption *redemption;
@property (readonly, nonatomic) NSURL *issuerInstallmentManagementURL;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
