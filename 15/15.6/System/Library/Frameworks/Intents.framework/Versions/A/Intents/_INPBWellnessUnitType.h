@class NSString;

@interface _INPBWellnessUnitType : PBCodable <_INPBWellnessUnitType, NSSecureCoding, NSCopying> {
    struct { unsigned char bloodGlucoseUnit : 1; unsigned char bloodPressureUnit : 1; unsigned char energyUnit : 1; unsigned char heartRateUnit : 1; unsigned char lengthUnit : 1; unsigned char massUnit : 1; unsigned char respiratoryRateUnit : 1; unsigned char temperatureUnit : 1; unsigned char timeUnit : 1; unsigned char volumeUnit : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int bloodGlucoseUnit;
@property (nonatomic) char hasBloodGlucoseUnit;
@property (nonatomic) int bloodPressureUnit;
@property (nonatomic) char hasBloodPressureUnit;
@property (nonatomic) int energyUnit;
@property (nonatomic) char hasEnergyUnit;
@property (nonatomic) int heartRateUnit;
@property (nonatomic) char hasHeartRateUnit;
@property (nonatomic) int lengthUnit;
@property (nonatomic) char hasLengthUnit;
@property (nonatomic) int massUnit;
@property (nonatomic) char hasMassUnit;
@property (nonatomic) int respiratoryRateUnit;
@property (nonatomic) char hasRespiratoryRateUnit;
@property (nonatomic) int temperatureUnit;
@property (nonatomic) char hasTemperatureUnit;
@property (nonatomic) int timeUnit;
@property (nonatomic) char hasTimeUnit;
@property (nonatomic) int volumeUnit;
@property (nonatomic) char hasVolumeUnit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsBloodGlucoseUnit:(id)a0;
- (int)StringAsLengthUnit:(id)a0;
- (int)StringAsMassUnit:(id)a0;
- (int)StringAsTemperatureUnit:(id)a0;
- (int)StringAsTimeUnit:(id)a0;
- (int)StringAsVolumeUnit:(id)a0;
- (int)StringAsBloodPressureUnit:(id)a0;
- (int)StringAsEnergyUnit:(id)a0;
- (int)StringAsHeartRateUnit:(id)a0;
- (int)StringAsRespiratoryRateUnit:(id)a0;
- (id)bloodGlucoseUnitAsString:(int)a0;
- (id)bloodPressureUnitAsString:(int)a0;
- (id)energyUnitAsString:(int)a0;
- (id)heartRateUnitAsString:(int)a0;
- (id)lengthUnitAsString:(int)a0;
- (id)massUnitAsString:(int)a0;
- (id)respiratoryRateUnitAsString:(int)a0;
- (id)temperatureUnitAsString:(int)a0;
- (id)timeUnitAsString:(int)a0;
- (id)volumeUnitAsString:(int)a0;

@end
