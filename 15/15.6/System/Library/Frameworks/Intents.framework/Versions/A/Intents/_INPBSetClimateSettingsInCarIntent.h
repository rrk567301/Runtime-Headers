@class NSString, _INPBInteger, _INPBDataString, _INPBDouble, _INPBIntentMetadata, _INPBTemperature;

@interface _INPBSetClimateSettingsInCarIntent : PBCodable <_INPBSetClimateSettingsInCarIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char airCirculationMode : 1; unsigned char climateZone : 1; unsigned char enableAirConditioner : 1; unsigned char enableAutoMode : 1; unsigned char enableClimateControl : 1; unsigned char enableFan : 1; unsigned char relativeFanSpeedSetting : 1; unsigned char relativeTemperatureSetting : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int airCirculationMode;
@property (nonatomic) char hasAirCirculationMode;
@property (retain, nonatomic) _INPBDataString *carName;
@property (readonly, nonatomic) char hasCarName;
@property (nonatomic) int climateZone;
@property (nonatomic) char hasClimateZone;
@property (nonatomic) char enableAirConditioner;
@property (nonatomic) char hasEnableAirConditioner;
@property (nonatomic) char enableAutoMode;
@property (nonatomic) char hasEnableAutoMode;
@property (nonatomic) char enableClimateControl;
@property (nonatomic) char hasEnableClimateControl;
@property (nonatomic) char enableFan;
@property (nonatomic) char hasEnableFan;
@property (retain, nonatomic) _INPBInteger *fanSpeedIndex;
@property (readonly, nonatomic) char hasFanSpeedIndex;
@property (retain, nonatomic) _INPBDouble *fanSpeedPercentage;
@property (readonly, nonatomic) char hasFanSpeedPercentage;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (nonatomic) int relativeFanSpeedSetting;
@property (nonatomic) char hasRelativeFanSpeedSetting;
@property (nonatomic) int relativeTemperatureSetting;
@property (nonatomic) char hasRelativeTemperatureSetting;
@property (retain, nonatomic) _INPBTemperature *temperature;
@property (readonly, nonatomic) char hasTemperature;
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
- (int)StringAsClimateZone:(id)a0;
- (int)StringAsRelativeFanSpeedSetting:(id)a0;
- (int)StringAsRelativeTemperatureSetting:(id)a0;
- (int)StringAsAirCirculationMode:(id)a0;
- (id)airCirculationModeAsString:(int)a0;
- (id)climateZoneAsString:(int)a0;
- (id)relativeFanSpeedSettingAsString:(int)a0;
- (id)relativeTemperatureSettingAsString:(int)a0;

@end
