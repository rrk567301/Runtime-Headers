@class PBUnknownFields;

@interface GEOLogMsgEventThermalPressure : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _disableMapFeatures;
    int _chargingState;
    int _collectionTrigger;
    int _navMapType;
    unsigned int _thermalPressure;
    struct { unsigned char has_chargingState : 1; unsigned char has_collectionTrigger : 1; unsigned char has_navMapType : 1; unsigned char has_thermalPressure : 1; } _flags;
}

@property (nonatomic) char hasThermalPressure;
@property (nonatomic) unsigned int thermalPressure;
@property (readonly, nonatomic) unsigned long long disableMapFeaturesCount;
@property (readonly, nonatomic) int *disableMapFeatures;
@property (nonatomic) char hasNavMapType;
@property (nonatomic) int navMapType;
@property (nonatomic) char hasCollectionTrigger;
@property (nonatomic) int collectionTrigger;
@property (nonatomic) char hasChargingState;
@property (nonatomic) int chargingState;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (void)dealloc;
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
- (int)StringAsNavMapType:(id)a0;
- (int)StringAsCollectionTrigger:(id)a0;
- (int)StringAsDisableMapFeatures:(id)a0;
- (void)addDisableMapFeatures:(int)a0;
- (id)chargingStateAsString:(int)a0;
- (void)clearDisableMapFeatures;
- (void)clearUnknownFields:(char)a0;
- (id)collectionTriggerAsString:(int)a0;
- (id)disableMapFeaturesAsString:(int)a0;
- (int)disableMapFeaturesAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)navMapTypeAsString:(int)a0;
- (void)readAll:(char)a0;
- (void)setDisableMapFeatures:(int *)a0 count:(unsigned long long)a1;

@end
