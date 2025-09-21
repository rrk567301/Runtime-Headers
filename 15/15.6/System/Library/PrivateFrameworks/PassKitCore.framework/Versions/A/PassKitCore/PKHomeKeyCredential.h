@class NSSet;

@interface PKHomeKeyCredential : PKPaymentLocalPassCredential {
    char _detailDescriptionAvailable;
    NSSet *_paymentApplications;
}

- (void).cxx_destruct;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;
- (id)initWithPaymentPass:(id)a0;
- (id)paymentApplications;
- (char)supportsSuperEasyProvisioning;

@end
