@class NSString, NSData, PKSecureElementSignatureInfo;

@interface PKPaymentInitiateExternalProvisioningRequestDPANAuthorization : NSObject

@property (readonly, copy, nonatomic) NSString *dpanIdentifier;
@property (readonly, copy, nonatomic) NSData *signatureData;
@property (readonly, nonatomic) PKSecureElementSignatureInfo *signatureInfo;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithDPANID:(id)a0 signatureData:(id)a1 signatureInfo:(id)a2;

@end
