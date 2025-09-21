@class PKPeerPaymentQuote, PKPaymentPass;

@interface PKPeerPaymentCardDataItem : PKPaymentDataItem {
    PKPaymentPass *_pass;
}

@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPeerPaymentQuote *quote;

+ (long long)dataType;

- (long long)context;
- (void).cxx_destruct;
- (char)isValidWithError:(id *)a0;
- (char)_validateAccountResolutionsWithError:(id *)a0 errorStatus:(long long *)a1;
- (char)_validateInsufficientBalanceWithError:(id *)a0 errorStatus:(long long *)a1;
- (char)_validateTransferLimitsWithError:(id *)a0 errorStatus:(long long *)a1;
- (char)isValidWithError:(id *)a0 errorStatus:(long long *)a1;
- (char)shouldShowDisclosure;

@end
