@class NSMutableArray, PBUnknownFields;

@interface GEOPDRelatedPlaceModuleConfiguration : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_sectionTitles;
    int _numberOfRows;
    int _relatedPlaceComponentId;
    struct { unsigned char has_numberOfRows : 1; unsigned char has_relatedPlaceComponentId : 1; } _flags;
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
