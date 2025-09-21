@interface AWDCoreRoutineTrafficConditions : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char precisionRecall : 1; unsigned char trafficDensity : 1; unsigned char predictedLocationOfInterest : 1; unsigned char vehicleConnected : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasVehicleConnected;
@property (nonatomic) char vehicleConnected;
@property (nonatomic) char hasPredictedLocationOfInterest;
@property (nonatomic) char predictedLocationOfInterest;
@property (nonatomic) char hasTrafficDensity;
@property (nonatomic) int trafficDensity;
@property (nonatomic) char hasPrecisionRecall;
@property (nonatomic) int precisionRecall;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsTrafficDensity:(id)a0;
- (int)StringAsPrecisionRecall:(id)a0;
- (id)precisionRecallAsString:(int)a0;
- (id)trafficDensityAsString:(int)a0;

@end
