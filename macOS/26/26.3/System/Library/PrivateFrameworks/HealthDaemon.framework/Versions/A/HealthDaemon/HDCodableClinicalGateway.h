@class NSData, HDCodableSyncIdentity, HDCodableMessageVersion;

@interface HDCodableClinicalGateway : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRawContent;
@property (retain, nonatomic) NSData *rawContent;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
