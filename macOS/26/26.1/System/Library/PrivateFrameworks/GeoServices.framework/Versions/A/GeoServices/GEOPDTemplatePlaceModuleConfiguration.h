@class NSMutableArray, PBUnknownFields;

@interface GEOPDTemplatePlaceModuleConfiguration : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_sectionTitles;
    int _layoutType;
    int _numberOfRows;
    int _orientation;
    int _templatePlaceComponentId;
    struct { unsigned char has_layoutType : 1; unsigned char has_numberOfRows : 1; unsigned char has_orientation : 1; unsigned char has_templatePlaceComponentId : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)sectionTitle;

@end
