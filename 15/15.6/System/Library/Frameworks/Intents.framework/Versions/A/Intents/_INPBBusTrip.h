@class NSString, _INPBLocationValue, _INPBDateTimeRange;

@interface _INPBBusTrip : PBCodable <_INPBBusTrip, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBLocationValue *arrivalBusStopLocation;
@property (readonly, nonatomic) char hasArrivalBusStopLocation;
@property (copy, nonatomic) NSString *arrivalPlatform;
@property (readonly, nonatomic) char hasArrivalPlatform;
@property (copy, nonatomic) NSString *busName;
@property (readonly, nonatomic) char hasBusName;
@property (copy, nonatomic) NSString *busNumber;
@property (readonly, nonatomic) char hasBusNumber;
@property (retain, nonatomic) _INPBLocationValue *departureBusStopLocation;
@property (readonly, nonatomic) char hasDepartureBusStopLocation;
@property (copy, nonatomic) NSString *departurePlatform;
@property (readonly, nonatomic) char hasDeparturePlatform;
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
