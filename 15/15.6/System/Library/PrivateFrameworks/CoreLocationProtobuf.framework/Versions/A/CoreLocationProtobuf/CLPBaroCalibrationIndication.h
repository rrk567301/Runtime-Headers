@interface CLPBaroCalibrationIndication : PBCodable <NSCopying> {
    struct { unsigned char outdoorConfidence : 1; unsigned char mapMatchRoadType : 1; unsigned char isCalibratedBarometricAlt : 1; unsigned char isMapMatched : 1; unsigned char isOutdoorContext : 1; } _has;
}

@property (nonatomic) char hasIsCalibratedBarometricAlt;
@property (nonatomic) char isCalibratedBarometricAlt;
@property (nonatomic) char hasIsMapMatched;
@property (nonatomic) char isMapMatched;
@property (nonatomic) char hasIsOutdoorContext;
@property (nonatomic) char isOutdoorContext;
@property (nonatomic) char hasOutdoorConfidence;
@property (nonatomic) double outdoorConfidence;
@property (nonatomic) char hasMapMatchRoadType;
@property (nonatomic) int mapMatchRoadType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMapMatchRoadType:(id)a0;
- (id)mapMatchRoadTypeAsString:(int)a0;

@end
