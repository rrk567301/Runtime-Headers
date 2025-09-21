@class _INPBDateTimeRange, _INPBAirportGate, _INPBAirline, NSString;

@interface _INPBFlight : PBCodable <_INPBFlight, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBAirline *airline;
@property (readonly, nonatomic) char hasAirline;
@property (retain, nonatomic) _INPBAirportGate *arrivalAirportGate;
@property (readonly, nonatomic) char hasArrivalAirportGate;
@property (retain, nonatomic) _INPBDateTimeRange *boardingTime;
@property (readonly, nonatomic) char hasBoardingTime;
@property (retain, nonatomic) _INPBAirportGate *departureAirportGate;
@property (readonly, nonatomic) char hasDepartureAirportGate;
@property (retain, nonatomic) _INPBDateTimeRange *flightDuration;
@property (readonly, nonatomic) char hasFlightDuration;
@property (copy, nonatomic) NSString *flightNumber;
@property (readonly, nonatomic) char hasFlightNumber;
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

@end
