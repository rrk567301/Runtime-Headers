@class NSString, _INPBLocationValue, _INPBDateTimeRange;

@interface _INPBBoatTrip : PBCodable <_INPBBoatTrip, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBLocationValue *arrivalBoatTerminalLocation;
@property (readonly, nonatomic) char hasArrivalBoatTerminalLocation;
@property (copy, nonatomic) NSString *boatName;
@property (readonly, nonatomic) char hasBoatName;
@property (copy, nonatomic) NSString *boatNumber;
@property (readonly, nonatomic) char hasBoatNumber;
@property (retain, nonatomic) _INPBLocationValue *departureBoatTerminalLocation;
@property (readonly, nonatomic) char hasDepartureBoatTerminalLocation;
@property (copy, nonatomic) NSString *provider;
@property (readonly, nonatomic) char hasProvider;
@property (retain, nonatomic) _INPBDateTimeRange *tripDuration;
@property (readonly, nonatomic) char hasTripDuration;
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
