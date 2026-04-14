@interface _ICLLAutoPlaySource : PBCodable <NSCopying>

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
