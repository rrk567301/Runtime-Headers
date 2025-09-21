@interface HKCodableQuantitySeriesDatum : PBCodable <NSCopying> {
    struct { unsigned char timeInterval : 1; unsigned char value : 1; unsigned char duration : 1; } _has;
}

@property (nonatomic) char hasTimeInterval;
@property (nonatomic) double timeInterval;
@property (nonatomic) char hasValue;
@property (nonatomic) double value;
@property (nonatomic) char hasDuration;
@property (nonatomic) float duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
