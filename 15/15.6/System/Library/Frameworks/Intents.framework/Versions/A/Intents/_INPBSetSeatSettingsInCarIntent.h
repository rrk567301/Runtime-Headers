@class NSString, _INPBInteger, _INPBDataString, _INPBIntentMetadata;

@interface _INPBSetSeatSettingsInCarIntent : PBCodable <_INPBSetSeatSettingsInCarIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char enableCooling : 1; unsigned char enableHeating : 1; unsigned char enableMassage : 1; unsigned char relativeLevelSetting : 1; unsigned char seat : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *carName;
@property (readonly, nonatomic) char hasCarName;
@property (nonatomic) char enableCooling;
@property (nonatomic) char hasEnableCooling;
@property (nonatomic) char enableHeating;
@property (nonatomic) char hasEnableHeating;
@property (nonatomic) char enableMassage;
@property (nonatomic) char hasEnableMassage;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBInteger *level;
@property (readonly, nonatomic) char hasLevel;
@property (nonatomic) int relativeLevelSetting;
@property (nonatomic) char hasRelativeLevelSetting;
@property (nonatomic) int seat;
@property (nonatomic) char hasSeat;
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
- (int)StringAsSeat:(id)a0;
- (int)StringAsRelativeLevelSetting:(id)a0;
- (id)relativeLevelSettingAsString:(int)a0;
- (id)seatAsString:(int)a0;

@end
