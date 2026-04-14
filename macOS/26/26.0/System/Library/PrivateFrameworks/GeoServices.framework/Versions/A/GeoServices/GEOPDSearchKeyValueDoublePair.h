@class NSString;

@interface GEOPDSearchKeyValueDoublePair : PBCodable <NSCopying> {
    NSString *_key;
    double _value;
    struct { unsigned char has_value : 1; } _flags;
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
