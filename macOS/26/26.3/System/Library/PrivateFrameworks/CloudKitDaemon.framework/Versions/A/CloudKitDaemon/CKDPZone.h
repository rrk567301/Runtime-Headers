@class CKDPZoneCryptoFeatureSet, CKDPZoneZoneReference, NSString, CKDPProtectionInfoKeysToRemove, CKDPRecordStableUrl, CKDPShareIdentifier, CKDPZoneSignedCryptoRequirements, CKDPProtectionInfo, CKDPStorageExpiration, CKDPRecordZoneIdentifier, NSMutableArray;

@interface CKDPZone : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (readonly, nonatomic) BOOL hasRecordProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *recordProtectionInfo;
@property (readonly, nonatomic) BOOL hasStableUrl;
@property (retain, nonatomic) CKDPRecordStableUrl *stableUrl;
@property (readonly, nonatomic) BOOL hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (retain, nonatomic) NSMutableArray *protectionInfoKeysToRemoves;
@property (readonly, nonatomic) BOOL hasStorageExpiration;
@property (retain, nonatomic) CKDPStorageExpiration *storageExpiration;
@property (readonly, nonatomic) BOOL hasSignedCryptoRequirements;
@property (retain, nonatomic) CKDPZoneSignedCryptoRequirements *signedCryptoRequirements;
@property (readonly, nonatomic) BOOL hasAppliedCryptoFeatures;
@property (retain, nonatomic) CKDPZoneCryptoFeatureSet *appliedCryptoFeatures;
@property (readonly, nonatomic) BOOL hasZoneProtectionInfoKeysToRemove;
@property (retain, nonatomic) CKDPProtectionInfoKeysToRemove *zoneProtectionInfoKeysToRemove;
@property (readonly, nonatomic) BOOL hasRecordProtectionInfoKeysToRemove;
@property (retain, nonatomic) CKDPProtectionInfoKeysToRemove *recordProtectionInfoKeysToRemove;
@property (readonly, nonatomic) BOOL hasParentReference;
@property (retain, nonatomic) CKDPZoneZoneReference *parentReference;
@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;

+ (Class)protectionInfoKeysToRemoveType;

- (id)protectionInfoKeysToRemoveAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)protectionInfoKeysToRemovesCount;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearProtectionInfoKeysToRemoves;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addProtectionInfoKeysToRemove:(id)a0;

@end
