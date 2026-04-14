@interface PKHomeKeyCredential : PKPaymentLocalPassCredential {
    BOOL _detailDescriptionAvailable;
}

- (id)detailDescription;
- (id)initWithPaymentPass:(id)a0;
- (id)paymentApplications;
- (BOOL)supportsSuperEasyProvisioning;

@end
