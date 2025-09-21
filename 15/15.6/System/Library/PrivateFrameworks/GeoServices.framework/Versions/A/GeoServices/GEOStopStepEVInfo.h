@class PBUnknownFields;

@interface GEOStopStepEVInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _gainedBatteryPercentage;
    unsigned long long _muid;
    double _remainingBatteryPercentage;
    unsigned int _chargingTime;
    unsigned int _gainedBatteryCharge;
    unsigned int _gainedTravelRange;
    unsigned int _zilchPathIndex;
    struct { unsigned char has_gainedBatteryPercentage : 1; unsigned char has_muid : 1; unsigned char has_remainingBatteryPercentage : 1; unsigned char has_chargingTime : 1; unsigned char has_gainedBatteryCharge : 1; unsigned char has_gainedTravelRange : 1; unsigned char has_zilchPathIndex : 1; } _flags;
}

@property (nonatomic) char hasChargingTime;
@property (nonatomic) unsigned int chargingTime;
@property (nonatomic) char hasGainedBatteryPercentage;
@property (nonatomic) double gainedBatteryPercentage;
@property (nonatomic) char hasGainedTravelRange;
@property (nonatomic) unsigned int gainedTravelRange;
@property (nonatomic) char hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) char hasGainedBatteryCharge;
@property (nonatomic) unsigned int gainedBatteryCharge;
@property (nonatomic) char hasZilchPathIndex;
@property (nonatomic) unsigned int zilchPathIndex;
@property (nonatomic) char hasRemainingBatteryPercentage;
@property (nonatomic) double remainingBatteryPercentage;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
