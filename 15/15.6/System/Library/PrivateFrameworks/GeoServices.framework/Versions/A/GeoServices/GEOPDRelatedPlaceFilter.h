@class PBUnknownFields;

@interface GEOPDRelatedPlaceFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _relatedPlaceTemplateItemCount;
    char _canSupportTemplateModule;
    struct { unsigned char has_relatedPlaceTemplateItemCount : 1; unsigned char has_canSupportTemplateModule : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
