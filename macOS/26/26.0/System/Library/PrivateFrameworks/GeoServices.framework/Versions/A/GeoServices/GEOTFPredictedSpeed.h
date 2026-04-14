@interface GEOTFPredictedSpeed : PBCodable <NSCopying> {
    unsigned int _deltaMinutesInFuture;
    unsigned int _speed;
    struct { unsigned char has_deltaMinutesInFuture : 1; unsigned char has_speed : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
