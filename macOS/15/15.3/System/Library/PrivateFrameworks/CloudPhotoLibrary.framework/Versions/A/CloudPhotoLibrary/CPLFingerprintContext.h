@class CPLFingerprintScheme, NSData, CPLFingerprintSchemeV1, CPLFingerprintSchemeV2;

@interface CPLFingerprintContext : NSObject {
    BOOL _isUsingFingerprintSchemeSubclasses;
}

@property (class, retain) CPLFingerprintContext *sharedContext;

@property (readonly, nonatomic) NSData *boundaryKey;
@property (readonly, nonatomic) CPLFingerprintSchemeV1 *mmcsv1FingerprintScheme;
@property (readonly, nonatomic) CPLFingerprintSchemeV2 *mmcsv2FingerprintScheme;
@property (readonly, nonatomic) BOOL usesMMCSv2AsDefault;
@property (readonly, nonatomic) CPLFingerprintScheme *fingerprintSchemeForNewMasterAsset;

+ (BOOL)usesMMCSv2AsDefaultInUniverseName:(id)a0;

- (void).cxx_destruct;
- (id)fingerprintSchemeForFingerprint:(id)a0;
- (id)fingerprintSchemeForMasterIdentifier:(id)a0;
- (id)fingerprintSchemeForSignature:(id)a0;
- (id)initWithBoundaryKey:(id)a0 usesMMCSv2AsDefault:(BOOL)a1;
- (id)initWithFingerprintSchemeV1:(id)a0 fingerprintSchemeV2:(id)a1 usesMMCSv2AsDefault:(BOOL)a2;

@end
