@class NSString, _DKPRValue;

@interface _DKPRMetadataEntry : PBCodable <NSCopying> {
    unsigned int _index;
    NSString *_key;
    _DKPRValue *_value;
    struct { unsigned char index : 1; } _has;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
