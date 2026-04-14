@class NSNumber, NSData;

@interface MTRTLSCertificateManagementClusterClientCSRResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *ccdid;
@property (copy, nonatomic) NSData *csr;
@property (copy, nonatomic) NSData *nonceSignature;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const void *)a0;
- (id)initWithDecodableStruct:(const void *)a0;

@end
