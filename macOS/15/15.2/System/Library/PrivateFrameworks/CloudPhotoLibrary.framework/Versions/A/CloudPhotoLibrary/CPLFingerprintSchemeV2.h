@class NSData;

@interface CPLFingerprintSchemeV2 : CPLFingerprintScheme

@property (readonly, nonatomic) NSData *boundaryKey;

- (void).cxx_destruct;
- (id)initWithBoundaryKey:(id)a0;
- (id)fingerprintSchemeDescription;
- (void **)_createSignatureGenerator;
- (BOOL)isMMCSv2;
- (BOOL)isValidSignatureBytes:(const void *)a0;

@end
