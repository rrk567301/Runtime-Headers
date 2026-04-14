@class _INPBPower, NSString;

@interface _INPBCarChargingConnectorPower : PBCodable <_INPBCarChargingConnectorPower, NSSecureCoding, NSCopying> {
    struct { unsigned char chargingConnector : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int chargingConnector;
@property (nonatomic) BOOL hasChargingConnector;
@property (retain, nonatomic) _INPBPower *maximumPower;
@property (readonly, nonatomic) BOOL hasMaximumPower;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsChargingConnector:(id)a0;
- (id)chargingConnectorAsString:(int)a0;

@end
