@interface PKApplePayTrustSession : PKPaymentSession

- (id)createKeyWithRequest:(id)a0 error:(id *)a1;
- (char)deleteKeyWithIdentifier:(id)a0;
- (id)initWithInternalSession:(id)a0 targetQueue:(id)a1;
- (id)keyWithIdentifier:(id)a0;
- (id)signatureForRequest:(id)a0 withAuthorization:(id)a1;

@end
