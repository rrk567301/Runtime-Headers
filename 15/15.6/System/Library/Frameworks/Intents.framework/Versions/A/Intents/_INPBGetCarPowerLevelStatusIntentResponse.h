@class _INPBInteger, NSString, _INPBDateTime, _INPBJSONDictionary, _INPBDouble, _INPBDistance, _INPBEnergy;

@interface _INPBGetCarPowerLevelStatusIntentResponse : PBCodable <_INPBGetCarPowerLevelStatusIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char activeConnector : 1; unsigned char charging : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int activeConnector;
@property (nonatomic) char hasActiveConnector;
@property (copy, nonatomic) NSString *carIdentifier;
@property (readonly, nonatomic) char hasCarIdentifier;
@property (retain, nonatomic) _INPBDouble *chargePercentRemaining;
@property (readonly, nonatomic) char hasChargePercentRemaining;
@property (nonatomic) char charging;
@property (nonatomic) char hasCharging;
@property (retain, nonatomic) _INPBJSONDictionary *chargingFormulaArguments;
@property (readonly, nonatomic) char hasChargingFormulaArguments;
@property (retain, nonatomic) _INPBJSONDictionary *consumptionFormulaArguments;
@property (readonly, nonatomic) char hasConsumptionFormulaArguments;
@property (retain, nonatomic) _INPBEnergy *currentBatteryCapacity;
@property (readonly, nonatomic) char hasCurrentBatteryCapacity;
@property (retain, nonatomic) _INPBDateTime *dateOfLastStateUpdate;
@property (readonly, nonatomic) char hasDateOfLastStateUpdate;
@property (retain, nonatomic) _INPBDistance *distanceRemaining;
@property (readonly, nonatomic) char hasDistanceRemaining;
@property (retain, nonatomic) _INPBDistance *distanceRemainingElectric;
@property (readonly, nonatomic) char hasDistanceRemainingElectric;
@property (retain, nonatomic) _INPBDistance *distanceRemainingFuel;
@property (readonly, nonatomic) char hasDistanceRemainingFuel;
@property (retain, nonatomic) _INPBDouble *fuelPercentRemaining;
@property (readonly, nonatomic) char hasFuelPercentRemaining;
@property (retain, nonatomic) _INPBEnergy *maximumBatteryCapacity;
@property (readonly, nonatomic) char hasMaximumBatteryCapacity;
@property (retain, nonatomic) _INPBDistance *maximumDistance;
@property (readonly, nonatomic) char hasMaximumDistance;
@property (retain, nonatomic) _INPBDistance *maximumDistanceElectric;
@property (readonly, nonatomic) char hasMaximumDistanceElectric;
@property (retain, nonatomic) _INPBDistance *maximumDistanceFuel;
@property (readonly, nonatomic) char hasMaximumDistanceFuel;
@property (retain, nonatomic) _INPBEnergy *minimumBatteryCapacity;
@property (readonly, nonatomic) char hasMinimumBatteryCapacity;
@property (retain, nonatomic) _INPBInteger *minutesToFull;
@property (readonly, nonatomic) char hasMinutesToFull;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsActiveConnector:(id)a0;
- (id)activeConnectorAsString:(int)a0;

@end
