@class PBUnknownFields;

@interface GEOPDActionDataFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _linkTypes;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
