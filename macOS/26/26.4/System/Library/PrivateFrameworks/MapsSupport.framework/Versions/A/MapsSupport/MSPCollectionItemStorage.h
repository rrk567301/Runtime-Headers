@class NSData, PBUnknownFields;

@interface MSPCollectionItemStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) BOOL hasStorageIdentifier;
@property (retain, nonatomic) NSData *storageIdentifier;
@property (readonly, nonatomic) BOOL hasContents;
@property (retain, nonatomic) NSData *contents;
@property (readonly, nonatomic) BOOL hasContentsTimestamp;
@property (retain, nonatomic) NSData *contentsTimestamp;
@property (readonly, nonatomic) BOOL hasPosition;
@property (retain, nonatomic) NSData *position;
@property (readonly, nonatomic) BOOL hasPositionTimestamp;
@property (retain, nonatomic) NSData *positionTimestamp;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
