@class MSPTransitStorageLine, PBUnknownFields;

@interface MSPTransitLineBookmark : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) BOOL hasTransitLineStorage;
@property (retain, nonatomic) MSPTransitStorageLine *transitLineStorage;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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

@end
