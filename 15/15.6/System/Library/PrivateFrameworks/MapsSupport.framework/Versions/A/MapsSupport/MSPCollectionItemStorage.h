@class NSData, PBUnknownFields;

@interface MSPCollectionItemStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) char hasStorageIdentifier;
@property (retain, nonatomic) NSData *storageIdentifier;
@property (readonly, nonatomic) char hasContents;
@property (retain, nonatomic) NSData *contents;
@property (readonly, nonatomic) char hasContentsTimestamp;
@property (retain, nonatomic) NSData *contentsTimestamp;
@property (readonly, nonatomic) char hasPosition;
@property (retain, nonatomic) NSData *position;
@property (readonly, nonatomic) char hasPositionTimestamp;
@property (retain, nonatomic) NSData *positionTimestamp;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
