@class CPLFingerprintSchemeV1, NSString;

@interface CPLFingerprintScheme : NSObject {
    long long _zeroByteFileFingerprintOnce;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) CPLFingerprintSchemeV1 *defaultMMCSv1FingerprintScheme;
@property (class, readonly, nonatomic) char supportsEPPAutoEnable;
@property (class, nonatomic) char disableInvalidFingerprintScheme;
@property (class, readonly, nonatomic) CPLFingerprintScheme *nonPrivateFingerprintScheme;
@property (class, readonly, nonatomic) CPLFingerprintScheme *fingerprintSchemeForStableHash;
@property (class, readonly, nonatomic) CPLFingerprintScheme *invalidFingerprintScheme;
@property (class, readonly, nonatomic) char supportsEPP;
@property (class, readonly, nonatomic) char alwaysCreateEPPMomentShares;

@property (readonly, nonatomic) char canMatchSignatureToFingerprint;
@property (readonly, nonatomic) char shouldUseEncryptedPropertiesIfPossible;
@property (readonly, nonatomic) char isMMCSv2;
@property (readonly, nonatomic) NSString *zeroByteFileFingerprint;
@property (readonly, nonatomic) char allowsStreaming;
@property (readonly, nonatomic) NSString *fingerprintSchemeDescription;
@property (readonly, nonatomic, getter=isForStableHash) char forStableHash;
@property (readonly, nonatomic) char providesEnhancedPrivacy;
@property (readonly, nonatomic, getter=isValid) char valid;

+ (void)initialize;
+ (char)isStableHash:(id)a0;
+ (char)isMMCSv1Fingerprint:(id)a0;
+ (char)isMMCSv1Signature:(id)a0;
+ (char)isMMCSv2Fingerprint:(id)a0;
+ (char)isMMCSv2Signature:(id)a0;
+ (id)normalizeBoundaryKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (char)isValidSignature:(id)a0;
- (void **)_createSignatureGenerator;
- (id)fingerPrintForFileAtURL:(id)a0 error:(id *)a1;
- (char)isCompatibleWithFingerprintScheme:(id)a0;
- (char)isValidFingerprint:(id)a0;
- (id)fingerPrintForData:(id)a0 error:(id *)a1;
- (id)fingerPrintForFD:(int)a0 error:(id *)a1;

@end
