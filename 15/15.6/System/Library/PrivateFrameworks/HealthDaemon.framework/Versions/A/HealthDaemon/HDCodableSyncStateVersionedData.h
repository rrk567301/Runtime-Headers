@class NSData, HDCodableSyncStateOrigin;

@interface HDCodableSyncStateVersionedData : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) int version;
@property (readonly, nonatomic) char hasOrigin;
@property (retain, nonatomic) HDCodableSyncStateOrigin *origin;
@property (readonly, nonatomic) char hasObjectData;
@property (retain, nonatomic) NSData *objectData;

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
