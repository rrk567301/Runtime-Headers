@class CKDPZoneCryptoFeatureSet, CKDPZoneZoneReference, NSString, CKDPProtectionInfoKeysToRemove, CKDPIdentifier, CKDPRecordStableUrl, CKDPShareIdentifier, CKDPZoneSignedCryptoRequirements, CKDPProtectionInfo, CKDPStorageExpiration, CKDPRecordZoneIdentifier, NSMutableArray;

@interface CKDPZone : PBCodable <NSCopying> {
    struct { unsigned char isAllowedInHierarchy : 1; } _has;
}

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
@property (nonatomic) BOOL hasIsAllowedInHierarchy;
@property (nonatomic) BOOL isAllowedInHierarchy;
@property (readonly, nonatomic) BOOL hasClosestAncestorShareId;
@property (retain, nonatomic) CKDPShareIdentifier *closestAncestorShareId;
@property (readonly, nonatomic) BOOL hasCreatorUserId;
@property (retain, nonatomic) CKDPIdentifier *creatorUserId;

+ (Class)protectionInfoKeysToRemoveType;

- (id)protectionInfoKeysToRemoveAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addProtectionInfoKeysToRemove:(id)a0;
- (void)clearProtectionInfoKeysToRemoves;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)protectionInfoKeysToRemovesCount;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
