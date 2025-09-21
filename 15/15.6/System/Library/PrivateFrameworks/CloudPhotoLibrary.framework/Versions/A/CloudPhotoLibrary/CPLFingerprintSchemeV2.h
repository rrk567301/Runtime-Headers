@class NSData, NSString;

@interface CPLFingerprintSchemeV2 : CPLFingerprintScheme

@property (readonly, nonatomic) NSData *boundaryKey;
@property (readonly, nonatomic) NSString *boundaryKeyDescription;

- (void).cxx_destruct;
- (id)initWithBoundaryKey:(id)a0;
- (char)isValidSignature:(id)a0;
- (id)fingerprintSchemeDescription;
- (void **)_createSignatureGenerator;
- (char)isValidFingerprint:(id)a0;
- (char)isMMCSv2;

@end
