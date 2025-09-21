@class NSData, HDCodableSyncStateOrigin;

@interface HDCodableSyncStateVersionedData : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (retain, nonatomic) HDCodableSyncStateOrigin *origin;
@property (readonly, nonatomic) BOOL hasObjectData;
@property (retain, nonatomic) NSData *objectData;

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
