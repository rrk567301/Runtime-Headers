@class NSString, NSData;

@interface VGVehicleStateStorage : PBCodable <NSCopying> {
    struct { unsigned char batteryPercentage : 1; unsigned char currentBatteryCapacity : 1; unsigned char currentEVRange : 1; unsigned char dateOfUpdate : 1; unsigned char maxBatteryCapacity : 1; unsigned char maxEVRange : 1; unsigned char minBatteryCapacity : 1; unsigned char activeConnector : 1; unsigned char origin : 1; unsigned char isCharging : 1; } _has;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasDateOfUpdate;
@property (nonatomic) double dateOfUpdate;
@property (nonatomic) char hasOrigin;
@property (nonatomic) int origin;
@property (nonatomic) char hasBatteryPercentage;
@property (nonatomic) double batteryPercentage;
@property (nonatomic) char hasCurrentEVRange;
@property (nonatomic) double currentEVRange;
@property (nonatomic) char hasMaxEVRange;
@property (nonatomic) double maxEVRange;
@property (nonatomic) char hasMinBatteryCapacity;
@property (nonatomic) double minBatteryCapacity;
@property (nonatomic) char hasCurrentBatteryCapacity;
@property (nonatomic) double currentBatteryCapacity;
@property (nonatomic) char hasMaxBatteryCapacity;
@property (nonatomic) double maxBatteryCapacity;
@property (readonly, nonatomic) char hasConsumptionArguments;
@property (retain, nonatomic) NSString *consumptionArguments;
@property (readonly, nonatomic) char hasChargingArguments;
@property (retain, nonatomic) NSString *chargingArguments;
@property (nonatomic) char hasIsCharging;
@property (nonatomic) char isCharging;
@property (nonatomic) char hasActiveConnector;
@property (nonatomic) int activeConnector;
@property (readonly, nonatomic) char hasPairedAppInstallSessionIdentifier;
@property (retain, nonatomic) NSData *pairedAppInstallSessionIdentifier;
@property (readonly, nonatomic) char hasPairedAppInstallDeviceIdentifier;
@property (retain, nonatomic) NSString *pairedAppInstallDeviceIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsOrigin:(id)a0;
- (id)originAsString:(int)a0;
- (int)StringAsActiveConnector:(id)a0;
- (id)activeConnectorAsString:(int)a0;

@end
