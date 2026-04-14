@class NSMutableArray, PBUnknownFields;

@interface GEOPDRelatedPlaceModuleConfiguration : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_sectionTitles;
    int _numberOfRows;
    int _relatedPlaceComponentId;
    struct { unsigned char has_numberOfRows : 1; unsigned char has_relatedPlaceComponentId : 1; } _flags;
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
