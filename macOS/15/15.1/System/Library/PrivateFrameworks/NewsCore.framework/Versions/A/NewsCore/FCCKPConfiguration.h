@class NSMutableArray;

@interface FCCKPConfiguration : PBCodable <NSCopying> {
    unsigned long long _created;
    unsigned long long _expires;
    NSMutableArray *_fields;
    struct { unsigned char created : 1; unsigned char expires : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
