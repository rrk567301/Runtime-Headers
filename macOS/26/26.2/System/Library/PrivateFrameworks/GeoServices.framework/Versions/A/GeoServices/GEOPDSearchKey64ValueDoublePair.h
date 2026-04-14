@interface GEOPDSearchKey64ValueDoublePair : PBCodable <NSCopying> {
    unsigned long long _key;
    double _value;
    struct { unsigned char has_key : 1; unsigned char has_value : 1; } _flags;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;

@end
