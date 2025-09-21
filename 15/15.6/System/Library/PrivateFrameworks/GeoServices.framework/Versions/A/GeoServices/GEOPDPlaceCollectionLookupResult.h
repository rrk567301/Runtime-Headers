@class GEOPDComponent, PBUnknownFields;

@interface GEOPDPlaceCollectionLookupResult : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDComponent *_collectionComponent;
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
