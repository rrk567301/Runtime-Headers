@class PKPeerPaymentQuote, PKPaymentPass;

@interface PKPeerPaymentCardDataItem : PKPaymentDataItem {
    PKPaymentPass *_pass;
}

@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPeerPaymentQuote *quote;

+ (long long)dataType;

- (void).cxx_destruct;
- (long long)context;
- (BOOL)isValidWithError:(id *)a0;
- (BOOL)_validateAccountResolutionsWithError:(id *)a0 errorStatus:(long long *)a1;
- (BOOL)_validateInsufficientBalanceWithError:(id *)a0 errorStatus:(long long *)a1;
- (BOOL)_validateTransferLimitsWithError:(id *)a0 errorStatus:(long long *)a1;
- (BOOL)isValidWithError:(id *)a0 errorStatus:(long long *)a1;
- (BOOL)shouldShowDisclosure;

@end
