@class CKDPProtectionInfo, CKDPRecordStableUrl, CKDPShareIdentifier, CKDPStorageExpiration, CKDPRecordZoneIdentifier, NSMutableArray;

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

+ (Class)protectionInfoKeysToRemoveType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearProtectionInfoKeysToRemoves;
- (void)addProtectionInfoKeysToRemove:(id)a0;
- (unsigned long long)protectionInfoKeysToRemovesCount;
- (id)protectionInfoKeysToRemoveAtIndex:(unsigned long long)a0;

@end
