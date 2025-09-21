@class _INPBPower, NSString;

@interface _INPBCarChargingConnectorPower : PBCodable <_INPBCarChargingConnectorPower, NSSecureCoding, NSCopying> {
    struct { unsigned char chargingConnector : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int chargingConnector;
@property (nonatomic) char hasChargingConnector;
@property (retain, nonatomic) _INPBPower *maximumPower;
@property (readonly, nonatomic) char hasMaximumPower;
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
- (int)StringAsChargingConnector:(id)a0;
- (id)chargingConnectorAsString:(int)a0;

@end
