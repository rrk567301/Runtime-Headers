@class PBUnknownFields;

@interface GEOPDLocationInfoItem : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _style;
    struct { unsigned char has_style : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
