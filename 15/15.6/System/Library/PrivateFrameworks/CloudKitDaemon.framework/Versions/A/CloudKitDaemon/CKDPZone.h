@class CKDPZoneCryptoFeatureSet, CKDPZoneZoneReference, NSString, CKDPProtectionInfoKeysToRemove, CKDPRecordStableUrl, CKDPShareIdentifier, CKDPZoneSignedCryptoRequirements, CKDPProtectionInfo, CKDPStorageExpiration, CKDPRecordZoneIdentifier, NSMutableArray;

@interface CKDPZone : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) char hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (readonly, nonatomic) char hasRecordProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *recordProtectionInfo;
@property (readonly, nonatomic) char hasStableUrl;
@property (retain, nonatomic) CKDPRecordStableUrl *stableUrl;
@property (readonly, nonatomic) char hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (retain, nonatomic) NSMutableArray *protectionInfoKeysToRemoves;
@property (readonly, nonatomic) char hasStorageExpiration;
@property (retain, nonatomic) CKDPStorageExpiration *storageExpiration;
@property (readonly, nonatomic) char hasSignedCryptoRequirements;
@property (retain, nonatomic) CKDPZoneSignedCryptoRequirements *signedCryptoRequirements;
@property (readonly, nonatomic) char hasAppliedCryptoFeatures;
@property (retain, nonatomic) CKDPZoneCryptoFeatureSet *appliedCryptoFeatures;
@property (readonly, nonatomic) char hasZoneProtectionInfoKeysToRemove;
@property (retain, nonatomic) CKDPProtectionInfoKeysToRemove *zoneProtectionInfoKeysToRemove;
@property (readonly, nonatomic) char hasRecordProtectionInfoKeysToRemove;
@property (retain, nonatomic) CKDPProtectionInfoKeysToRemove *recordProtectionInfoKeysToRemove;
@property (readonly, nonatomic) char hasParentReference;
@property (retain, nonatomic) CKDPZoneZoneReference *parentReference;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString *etag;

+ (Class)protectionInfoKeysToRemoveType;

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
- (void)addProtectionInfoKeysToRemove:(id)a0;
- (void)clearProtectionInfoKeysToRemoves;
- (id)protectionInfoKeysToRemoveAtIndex:(unsigned long long)a0;
- (unsigned long long)protectionInfoKeysToRemovesCount;

@end
