@class NSString, _INPBColor, NSArray, _INPBCarHeadUnit;

@interface _INPBCar : PBCodable <_INPBCar, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *carIdentifier;
@property (readonly, nonatomic) char hasCarIdentifier;
@property (retain, nonatomic) _INPBColor *color;
@property (readonly, nonatomic) char hasColor;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) _INPBCarHeadUnit *headUnit;
@property (readonly, nonatomic) char hasHeadUnit;
@property (copy, nonatomic) NSString *make;
@property (readonly, nonatomic) char hasMake;
@property (copy, nonatomic) NSString *model;
@property (readonly, nonatomic) char hasModel;
@property (copy, nonatomic) NSArray *powerPerConnectors;
@property (readonly, nonatomic) unsigned long long powerPerConnectorsCount;
@property (copy, nonatomic) NSArray *supportedChargingConnectors;
@property (readonly, nonatomic) unsigned long long supportedChargingConnectorsCount;
@property (copy, nonatomic) NSString *year;
@property (readonly, nonatomic) char hasYear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)powerPerConnectorType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSupportedChargingConnectors:(id)a0;
- (void)addPowerPerConnector:(id)a0;
- (void)clearPowerPerConnectors;
- (void)clearSupportedChargingConnectors;
- (id)powerPerConnectorAtIndex:(unsigned long long)a0;
- (id)supportedChargingConnectorsAtIndex:(unsigned long long)a0;

@end
