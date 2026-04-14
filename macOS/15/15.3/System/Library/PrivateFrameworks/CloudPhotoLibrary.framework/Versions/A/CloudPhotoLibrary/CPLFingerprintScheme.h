@class CPLFingerprintSchemeV1, NSString;

@interface CPLFingerprintScheme : NSObject {
    long long _zeroByteFileFingerprintOnce;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) CPLFingerprintSchemeV1 *defaultMMCSv1FingerprintScheme;
@property (class, readonly, nonatomic) BOOL alwaysCreateEPPMomentShares;
@property (class, nonatomic) BOOL disableInvalidFingerprintScheme;
@property (class, readonly, nonatomic) CPLFingerprintScheme *nonPrivateFingerprintScheme;
@property (class, readonly, nonatomic) CPLFingerprintScheme *fingerprintSchemeForStableHash;
@property (class, readonly, nonatomic) CPLFingerprintScheme *invalidFingerprintScheme;
@property (class, readonly, nonatomic) CPLFingerprintScheme *defaultFingerprintSchemeForUnknownRecord;
@property (class, readonly, nonatomic) BOOL supportsEPP;

@property (readonly, nonatomic) BOOL canMatchSignatureToFingerprint;
@property (readonly, nonatomic) BOOL shouldUseEncryptedPropertiesIfPossible;
@property (readonly, nonatomic) BOOL isMMCSv2;
@property (readonly, nonatomic) NSString *zeroByteFileFingerprint;
@property (readonly, nonatomic) BOOL allowsStreaming;
@property (readonly, nonatomic) NSString *fingerprintSchemeDescription;
@property (readonly, nonatomic, getter=isForStableHash) BOOL forStableHash;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (BOOL)isMMCSv1Fingerprint:(id)a0;
+ (BOOL)isMMCSv1Signature:(id)a0;
+ (BOOL)isMMCSv1SignatureBytes:(const void *)a0;
+ (BOOL)isMMCSv1SignatureBytesKnownNotMMCSv2:(const void *)a0;
+ (BOOL)isMMCSv2Fingerprint:(id)a0;
+ (BOOL)isMMCSv2Signature:(id)a0;
+ (BOOL)isMMCSv2SignatureBytes:(const void *)a0;
+ (id)normalizeBoundaryKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isValidSignature:(id)a0;
- (void **)_createSignatureGenerator;
- (id)fingerPrintForFileAtURL:(id)a0 error:(id *)a1;
- (id)fingerPrintForData:(id)a0 error:(id *)a1;
- (id)fingerPrintForFD:(int)a0 error:(id *)a1;
- (BOOL)isValidSignatureBytes:(const void *)a0;

@end
