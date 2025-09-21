@interface EDPBInteractionEventAppLaunch : PBCodable <EDPBDataSetters, NSCopying>

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)withHasher:(id)a0 setMessage:(id)a1 data:(id)a2;

@end
