@class CKDPRecordCryptoFeatureSet, CKDPFieldPermittedCryptoFeatureSet, CKDPFieldCryptoFeatureSet, CKDPRecordZoneIdentifier, CKDPZonePermittedCryptoFeatureSet, CKDPZoneCryptoFeatureSet, CKDPRecordPermittedCryptoFeatureSet, CKDPAdopterFeatureSet;

@interface CKDPZoneCryptoFeatureRequirements : PBCodable <NSCopying> {
    struct { unsigned char minimumSchemaVersion : 1; unsigned char revision : 1; } _has;
}

@property (nonatomic) char hasMinimumSchemaVersion;
@property (nonatomic) int minimumSchemaVersion;
@property (nonatomic) char hasRevision;
@property (nonatomic) int revision;
@property (readonly, nonatomic) char hasRequiredZoneCryptoFeatures;
@property (retain, nonatomic) CKDPZoneCryptoFeatureSet *requiredZoneCryptoFeatures;
@property (readonly, nonatomic) char hasRequiredRecordCryptoFeatures;
@property (retain, nonatomic) CKDPRecordCryptoFeatureSet *requiredRecordCryptoFeatures;
@property (readonly, nonatomic) char hasRequiredFieldCryptoFeatures;
@property (retain, nonatomic) CKDPFieldCryptoFeatureSet *requiredFieldCryptoFeatures;
@property (readonly, nonatomic) char hasPermittedZoneCryptoFeatures;
@property (retain, nonatomic) CKDPZonePermittedCryptoFeatureSet *permittedZoneCryptoFeatures;
@property (readonly, nonatomic) char hasPermittedRecordCryptoFeatures;
@property (retain, nonatomic) CKDPRecordPermittedCryptoFeatureSet *permittedRecordCryptoFeatures;
@property (readonly, nonatomic) char hasPermittedFieldCryptoFeatures;
@property (retain, nonatomic) CKDPFieldPermittedCryptoFeatureSet *permittedFieldCryptoFeatures;
@property (readonly, nonatomic) char hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) char hasRequiredAdopterFeatures;
@property (retain, nonatomic) CKDPAdopterFeatureSet *requiredAdopterFeatures;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
