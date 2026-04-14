@interface GEOPDSearchKey64Value64Pair : PBCodable <NSCopying> {
    unsigned long long _key;
    unsigned long long _value;
    struct { unsigned char has_key : 1; unsigned char has_value : 1; } _flags;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
