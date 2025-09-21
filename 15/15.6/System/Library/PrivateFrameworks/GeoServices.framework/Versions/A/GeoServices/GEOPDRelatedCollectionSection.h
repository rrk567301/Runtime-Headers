@class NSMutableArray, PBUnknownFields;

@interface GEOPDRelatedCollectionSection : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_collectionIds;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
