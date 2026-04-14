@class NSMutableArray, PBUnknownFields;

@interface GEOPDRelatedPlaceModuleConfiguration : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_sectionTitles;
    int _numberOfRows;
    int _relatedPlaceComponentId;
    struct { unsigned char has_numberOfRows : 1; unsigned char has_relatedPlaceComponentId : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
