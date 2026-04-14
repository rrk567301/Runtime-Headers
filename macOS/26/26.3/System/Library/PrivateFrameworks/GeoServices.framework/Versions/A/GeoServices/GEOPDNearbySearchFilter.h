@class NSMutableArray, PBUnknownFields;

@interface GEOPDNearbySearchFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_includedCategoryFilters;
    int _poiAgeFilter;
    struct { unsigned char has_poiAgeFilter : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
