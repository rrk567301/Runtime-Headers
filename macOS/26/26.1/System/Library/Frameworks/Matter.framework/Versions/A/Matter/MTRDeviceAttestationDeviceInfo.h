@class NSNumber, NSData;

@interface MTRDeviceAttestationDeviceInfo : NSObject

@property (readonly, nonatomic) NSNumber *vendorID;
@property (readonly, nonatomic) NSNumber *productID;
@property (readonly, nonatomic) NSNumber *basicInformationVendorID;
@property (readonly, nonatomic) NSNumber *basicInformationProductID;
@property (readonly, nonatomic) NSData *dacCertificate;
@property (readonly, nonatomic) NSData *dacPAICertificate;
@property (readonly, nonatomic) NSData *certificateDeclaration;
@property (readonly, copy, nonatomic) NSData *attestationChallenge;
@property (readonly, copy, nonatomic) NSData *attestationNonce;
@property (readonly, copy, nonatomic) NSData *elementsTLV;
@property (readonly, copy, nonatomic) NSData *certificationDeclaration;
@property (readonly, copy, nonatomic) NSData *elementsSignature;

- (void).cxx_destruct;
- (id)initWithAttestationChallenge:(id)a0 attestationNonce:(id)a1 elementsTLV:(id)a2 elementsSignature:(id)a3 dacCertificate:(id)a4 dacPAICertificate:(id)a5 certificationDeclaration:(id)a6 basicInformationVendorID:(id)a7 basicInformationProductID:(id)a8;

@end
