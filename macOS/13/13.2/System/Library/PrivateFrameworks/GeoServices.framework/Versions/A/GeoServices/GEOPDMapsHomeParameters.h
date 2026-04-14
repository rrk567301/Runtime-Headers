@class GEOPDCollectionSuggestionParameters, PBUnknownFields;

@interface GEOPDMapsHomeParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDCollectionSuggestionParameters *_collectionSuggestionParameters;
    BOOL _shouldPopulateExploreGuidesEntry;
    struct { unsigned char has_shouldPopulateExploreGuidesEntry : 1; } _flags;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
