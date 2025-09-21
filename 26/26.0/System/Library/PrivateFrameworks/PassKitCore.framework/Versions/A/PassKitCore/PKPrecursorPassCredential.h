@class NSString, PKPaymentRemoteCredential, PKPaymentPass;

@interface PKPrecursorPassCredential : PKPaymentCredential {
    PKPaymentRemoteCredential *_remoteCredential;
}

@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, copy, nonatomic) NSString *passTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *serialNumber;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1;
- (id)activationMethods;
- (id)initWithRemoteCredential:(id)a0;
- (BOOL)supportsSuperEasyProvisioning;

@end
