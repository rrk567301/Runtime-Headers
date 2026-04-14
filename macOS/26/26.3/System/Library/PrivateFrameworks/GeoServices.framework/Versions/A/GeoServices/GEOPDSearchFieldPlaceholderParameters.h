@class GEOPDViewportInfo, PBUnknownFields;

@interface GEOPDSearchFieldPlaceholderParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDViewportInfo *_viewportInfo;
    int _version;
    BOOL _isEditServerRecommendedStop;
    struct { unsigned char has_version : 1; unsigned char has_isEditServerRecommendedStop : 1; } _flags;
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
