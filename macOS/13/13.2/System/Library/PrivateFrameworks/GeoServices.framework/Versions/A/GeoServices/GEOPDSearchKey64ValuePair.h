@class NSString;

@interface GEOPDSearchKey64ValuePair : PBCodable <NSCopying> {
    unsigned long long _key;
    NSString *_value;
    struct { unsigned char has_key : 1; } _flags;
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
