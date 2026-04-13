@class GEOPDViewportInfo, PBUnknownFields;

@interface GEOPDPlaceSuggestionParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDViewportInfo *_viewportInfo;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
