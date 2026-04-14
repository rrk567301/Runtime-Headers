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

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)sectionTitle;

@end
