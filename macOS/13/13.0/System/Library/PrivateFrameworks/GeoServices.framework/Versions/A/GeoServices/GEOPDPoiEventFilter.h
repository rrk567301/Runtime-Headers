@class PBUnknownFields;

@interface GEOPDPoiEventFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _includeEventCategoryId;
    struct { unsigned char has_includeEventCategoryId : 1; } _flags;
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
