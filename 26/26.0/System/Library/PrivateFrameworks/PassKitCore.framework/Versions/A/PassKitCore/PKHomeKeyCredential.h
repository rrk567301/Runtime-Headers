@class NSSet;

@interface PKHomeKeyCredential : PKPaymentLocalPassCredential {
    BOOL _detailDescriptionAvailable;
    NSSet *_paymentApplications;
}

- (void).cxx_destruct;
- (id)activationMethods;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;
- (id)initWithPaymentPass:(id)a0;
- (id)paymentApplications;

@end
