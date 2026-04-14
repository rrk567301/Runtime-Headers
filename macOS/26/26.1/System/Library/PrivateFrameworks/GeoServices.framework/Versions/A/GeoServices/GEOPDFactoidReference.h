@class PBUnknownFields;

@interface GEOPDFactoidReference : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _factoidItemIndex;
    int _style;
    struct { unsigned char has_factoidItemIndex : 1; unsigned char has_style : 1; } _flags;
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

@end
