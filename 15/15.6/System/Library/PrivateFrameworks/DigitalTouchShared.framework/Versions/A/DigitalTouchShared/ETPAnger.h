@class NSData;

@interface ETPAnger : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char normalizedCenterX : 1; unsigned char normalizedCenterY : 1; } _has;
}

@property (nonatomic) char hasDuration;
@property (nonatomic) float duration;
@property (nonatomic) char hasNormalizedCenterX;
@property (nonatomic) float normalizedCenterX;
@property (nonatomic) char hasNormalizedCenterY;
@property (nonatomic) float normalizedCenterY;
@property (readonly, nonatomic) char hasDelays;
@property (retain, nonatomic) NSData *delays;
@property (readonly, nonatomic) char hasPoints;
@property (retain, nonatomic) NSData *points;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
