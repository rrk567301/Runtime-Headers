@class NSString, _INPBInteger, _INPBDouble, _INPBIntentMetadata, _INPBString;

@interface _INPBSetRadioStationIntent : PBCodable <_INPBSetRadioStationIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char radioType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBString *channel;
@property (readonly, nonatomic) char hasChannel;
@property (retain, nonatomic) _INPBDouble *frequency;
@property (readonly, nonatomic) char hasFrequency;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBInteger *presetNumber;
@property (readonly, nonatomic) char hasPresetNumber;
@property (nonatomic) int radioType;
@property (nonatomic) char hasRadioType;
@property (retain, nonatomic) _INPBString *stationName;
@property (readonly, nonatomic) char hasStationName;
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
- (int)StringAsRadioType:(id)a0;
- (id)radioTypeAsString:(int)a0;

@end
