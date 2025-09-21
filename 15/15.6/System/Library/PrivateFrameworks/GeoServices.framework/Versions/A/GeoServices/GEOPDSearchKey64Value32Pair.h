@interface GEOPDSearchKey64Value32Pair : PBCodable <NSCopying> {
    unsigned long long _key;
    unsigned int _value;
    struct { unsigned char has_key : 1; unsigned char has_value : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
