@class PBUnknownFields, GEOChargerPlugsInfo;

@interface GEOEVChargingInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOChargerPlugsInfo *_chargerPlugsInfo;
    unsigned int _batteryChargeAfterCharging;
    unsigned int _batteryPercentageAfterCharging;
    unsigned int _chargingTime;
    struct { unsigned char has_batteryChargeAfterCharging : 1; unsigned char has_batteryPercentageAfterCharging : 1; unsigned char has_chargingTime : 1; } _flags;
}

@property (nonatomic) char hasChargingTime;
@property (nonatomic) unsigned int chargingTime;
@property (nonatomic) char hasBatteryPercentageAfterCharging;
@property (nonatomic) unsigned int batteryPercentageAfterCharging;
@property (nonatomic) char hasBatteryChargeAfterCharging;
@property (nonatomic) unsigned int batteryChargeAfterCharging;
@property (readonly, nonatomic) char hasChargerPlugsInfo;
@property (retain, nonatomic) GEOChargerPlugsInfo *chargerPlugsInfo;
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
