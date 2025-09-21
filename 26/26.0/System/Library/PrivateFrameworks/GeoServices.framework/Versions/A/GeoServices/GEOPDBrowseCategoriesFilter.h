@class PBUnknownFields;

@interface GEOPDBrowseCategoriesFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _includeAllCategoriesForVenue;
    struct { unsigned char has_includeAllCategoriesForVenue : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
