@class PBUnknownFields;

@interface GEOARSessionThermalPressure : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _timestamp;
    int _chargingState;
    int _collectionTrigger;
    unsigned int _thermalPressure;
    struct { unsigned char has_timestamp : 1; unsigned char has_chargingState : 1; unsigned char has_collectionTrigger : 1; unsigned char has_thermalPressure : 1; } _flags;
}

@property (nonatomic) char hasThermalPressure;
@property (nonatomic) unsigned int thermalPressure;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasChargingState;
@property (nonatomic) int chargingState;
@property (nonatomic) char hasCollectionTrigger;
@property (nonatomic) int collectionTrigger;
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
- (int)StringAsChargingState:(id)a0;
- (int)StringAsCollectionTrigger:(id)a0;
- (id)chargingStateAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)collectionTriggerAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
