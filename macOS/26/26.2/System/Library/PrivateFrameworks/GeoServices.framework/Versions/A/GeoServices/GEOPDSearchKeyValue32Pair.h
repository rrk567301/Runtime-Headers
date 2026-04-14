@class NSString;

@interface GEOPDSearchKeyValue32Pair : PBCodable <NSCopying> {
    NSString *_key;
    unsigned int _value;
    struct { unsigned char has_value : 1; } _flags;
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
