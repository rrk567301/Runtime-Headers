@class GEOChargerPlugsInfo, NSString, PBDataReader, PBUnknownFields;

@interface GEOEVInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOChargerPlugsInfo *_chargerPlugsInfo;
    NSString *_chargingArguments;
    NSString *_consumptionArguments;
    NSString *_vehicleArguments;
    NSString *_vehicleIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _criticalBatteryCharge;
    unsigned int _currentBatteryCharge;
    unsigned int _currentBatteryPercentage;
    unsigned int _lastSocUpdateDate;
    unsigned int _lowBatteryCharge;
    unsigned int _maxBatteryCharge;
    unsigned int _maxRange;
    unsigned int _minBatteryCharge;
    char _isCharging;
    struct { unsigned char has_criticalBatteryCharge : 1; unsigned char has_currentBatteryCharge : 1; unsigned char has_currentBatteryPercentage : 1; unsigned char has_lastSocUpdateDate : 1; unsigned char has_lowBatteryCharge : 1; unsigned char has_maxBatteryCharge : 1; unsigned char has_maxRange : 1; unsigned char has_minBatteryCharge : 1; unsigned char has_isCharging : 1; unsigned char read_unknownFields : 1; unsigned char read_chargerPlugsInfo : 1; unsigned char read_chargingArguments : 1; unsigned char read_consumptionArguments : 1; unsigned char read_vehicleArguments : 1; unsigned char read_vehicleIdentifier : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasCurrentBatteryPercentage;
@property (nonatomic) unsigned int currentBatteryPercentage;
@property (nonatomic) char hasMaxRange;
@property (nonatomic) unsigned int maxRange;
@property (readonly, nonatomic) char hasConsumptionArguments;
@property (retain, nonatomic) NSString *consumptionArguments;
@property (readonly, nonatomic) char hasChargingArguments;
@property (retain, nonatomic) NSString *chargingArguments;
@property (nonatomic) char hasCurrentBatteryCharge;
@property (nonatomic) unsigned int currentBatteryCharge;
@property (nonatomic) char hasMaxBatteryCharge;
@property (nonatomic) unsigned int maxBatteryCharge;
@property (nonatomic) char hasIsCharging;
@property (nonatomic) char isCharging;
@property (nonatomic) char hasMinBatteryCharge;
@property (nonatomic) unsigned int minBatteryCharge;
@property (readonly, nonatomic) char hasVehicleIdentifier;
@property (retain, nonatomic) NSString *vehicleIdentifier;
@property (readonly, nonatomic) char hasChargerPlugsInfo;
@property (retain, nonatomic) GEOChargerPlugsInfo *chargerPlugsInfo;
@property (nonatomic) char hasLastSocUpdateDate;
@property (nonatomic) unsigned int lastSocUpdateDate;
@property (nonatomic) char hasLowBatteryCharge;
@property (nonatomic) unsigned int lowBatteryCharge;
@property (nonatomic) char hasCriticalBatteryCharge;
@property (nonatomic) unsigned int criticalBatteryCharge;
@property (readonly, nonatomic) char hasVehicleArguments;
@property (retain, nonatomic) NSString *vehicleArguments;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
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
