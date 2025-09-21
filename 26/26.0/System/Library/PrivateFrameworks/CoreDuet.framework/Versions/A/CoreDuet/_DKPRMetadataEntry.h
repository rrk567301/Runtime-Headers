@class NSString, _DKPRValue;

@interface _DKPRMetadataEntry : PBCodable <NSCopying> {
    unsigned int _index;
    NSString *_key;
    _DKPRValue *_value;
    struct { unsigned char index : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
