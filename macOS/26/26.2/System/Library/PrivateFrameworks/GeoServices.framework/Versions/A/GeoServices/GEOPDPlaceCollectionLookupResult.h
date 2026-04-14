@class GEOPDComponent, PBUnknownFields;

@interface GEOPDPlaceCollectionLookupResult : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDComponent *_collectionComponent;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;

@end
