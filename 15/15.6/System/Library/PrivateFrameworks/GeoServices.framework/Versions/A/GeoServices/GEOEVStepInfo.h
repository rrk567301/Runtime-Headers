@class PBUnknownFields;

@interface GEOEVStepInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _remainingBatteryPercentage;
    unsigned int _remainingTravelRange;
    struct { unsigned char has_remainingBatteryPercentage : 1; unsigned char has_remainingTravelRange : 1; } _flags;
}

@property (nonatomic) char hasRemainingBatteryPercentage;
@property (nonatomic) double remainingBatteryPercentage;
@property (nonatomic) char hasRemainingTravelRange;
@property (nonatomic) unsigned int remainingTravelRange;
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
