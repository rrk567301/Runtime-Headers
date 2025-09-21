@class NSString, HDCodableSyncIdentity;

@interface HDCloudSyncCodableRegisteredStore : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasOwnerIdentifier;
@property (retain, nonatomic) NSString *ownerIdentifier;
@property (readonly, nonatomic) BOOL hasStoreIdentifier;
@property (retain, nonatomic) NSString *storeIdentifier;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
