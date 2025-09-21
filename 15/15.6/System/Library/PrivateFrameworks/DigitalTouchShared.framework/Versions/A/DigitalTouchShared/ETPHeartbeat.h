@interface ETPHeartbeat : PBCodable <NSCopying> {
    struct { unsigned char beatsPerMinute : 1; unsigned char duration : 1; unsigned char heartbreakTime : 1; unsigned char normalizedCenterX : 1; unsigned char normalizedCenterY : 1; unsigned char rotation : 1; } _has;
}

@property (nonatomic) char hasBeatsPerMinute;
@property (nonatomic) float beatsPerMinute;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) char hasNormalizedCenterX;
@property (nonatomic) float normalizedCenterX;
@property (nonatomic) char hasNormalizedCenterY;
@property (nonatomic) float normalizedCenterY;
@property (nonatomic) char hasRotation;
@property (nonatomic) float rotation;
@property (nonatomic) char hasHeartbreakTime;
@property (nonatomic) float heartbreakTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
