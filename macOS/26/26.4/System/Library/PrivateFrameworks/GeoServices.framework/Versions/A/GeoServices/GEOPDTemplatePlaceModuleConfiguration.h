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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)sectionTitle;

@end
