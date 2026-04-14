@class PBUnknownFields;

@interface GEOPDRelatedPlaceFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _relatedPlaceTemplateItemCount;
    BOOL _canSupportTemplateModule;
    struct { unsigned char has_relatedPlaceTemplateItemCount : 1; unsigned char has_canSupportTemplateModule : 1; } _flags;
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
