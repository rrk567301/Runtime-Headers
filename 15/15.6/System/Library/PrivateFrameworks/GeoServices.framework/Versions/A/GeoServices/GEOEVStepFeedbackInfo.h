@interface GEOEVStepFeedbackInfo : PBCodable <NSCopying> {
    unsigned int _remainingBatteryCharge;
    unsigned int _remainingBatteryPercentage;
    unsigned int _remainingTravelRange;
    unsigned int _stateOfChargeDiff;
    struct { unsigned char has_remainingBatteryCharge : 1; unsigned char has_remainingBatteryPercentage : 1; unsigned char has_remainingTravelRange : 1; unsigned char has_stateOfChargeDiff : 1; } _flags;
}

@property (nonatomic) char hasRemainingBatteryPercentage;
@property (nonatomic) unsigned int remainingBatteryPercentage;
@property (nonatomic) char hasRemainingTravelRange;
@property (nonatomic) unsigned int remainingTravelRange;
@property (nonatomic) char hasRemainingBatteryCharge;
@property (nonatomic) unsigned int remainingBatteryCharge;
@property (nonatomic) char hasStateOfChargeDiff;
@property (nonatomic) unsigned int stateOfChargeDiff;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
