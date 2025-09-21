@class PKSelectedPaymentOffer;

@interface PKPaymentPaymentOfferDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKSelectedPaymentOffer *selectedPaymentOffer;

+ (long long)dataType;

- (long long)context;
- (id)errors;
- (char)isValidWithError:(id *)a0;
- (id)_errorLoadingPaymentOffersWithUnderlyingError:(id)a0;
- (char)_loadingDetailsAreValid:(id)a0 error:(id *)a1 errorStatus:(long long *)a2;
- (id)_noPaymentOfferSelectedError;
- (id)_selectedPaymentOfferInvalid;
- (char)_selectedPaymentOfferIsValidWithError:(id *)a0 errorStatus:(long long *)a1;
- (id)billingAddress;
- (char)isValidWithError:(id *)a0 errorStatus:(long long *)a1;
- (id)paymentContactFormatErrors;
- (char)requiresBillingAddress;

@end
