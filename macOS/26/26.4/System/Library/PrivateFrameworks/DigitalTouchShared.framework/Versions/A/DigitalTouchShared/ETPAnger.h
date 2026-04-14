@class NSData;

@interface ETPAnger : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char normalizedCenterX : 1; unsigned char normalizedCenterY : 1; } _has;
}

@property (nonatomic) BOOL hasDuration;
@property (nonatomic) float duration;
@property (nonatomic) BOOL hasNormalizedCenterX;
@property (nonatomic) float normalizedCenterX;
@property (nonatomic) BOOL hasNormalizedCenterY;
@property (nonatomic) float normalizedCenterY;
@property (readonly, nonatomic) BOOL hasDelays;
@property (retain, nonatomic) NSData *delays;
@property (readonly, nonatomic) BOOL hasPoints;
@property (retain, nonatomic) NSData *points;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
