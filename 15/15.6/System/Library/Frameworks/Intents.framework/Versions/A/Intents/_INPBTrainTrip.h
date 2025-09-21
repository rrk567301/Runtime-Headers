@class NSString, _INPBLocationValue, _INPBDateTime, _INPBDateTimeRange;

@interface _INPBTrainTrip : PBCodable <_INPBTrainTrip, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *arrivalPlatform;
@property (readonly, nonatomic) char hasArrivalPlatform;
@property (retain, nonatomic) _INPBLocationValue *arrivalStationLocation;
@property (readonly, nonatomic) char hasArrivalStationLocation;
@property (copy, nonatomic) NSString *departurePlatform;
@property (readonly, nonatomic) char hasDeparturePlatform;
@property (retain, nonatomic) _INPBLocationValue *departureStationLocation;
@property (readonly, nonatomic) char hasDepartureStationLocation;
@property (retain, nonatomic) _INPBDateTime *onlineCheckInTime;
@property (readonly, nonatomic) char hasOnlineCheckInTime;
@property (copy, nonatomic) NSString *provider;
@property (readonly, nonatomic) char hasProvider;
@property (copy, nonatomic) NSString *trainName;
@property (readonly, nonatomic) char hasTrainName;
@property (copy, nonatomic) NSString *trainNumber;
@property (readonly, nonatomic) char hasTrainNumber;
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
