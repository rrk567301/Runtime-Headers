@class _INPBRentalCar, _INPBDateTimeRange, _INPBLocationValue, _INPBReservation, NSString;

@interface _INPBRentalCarReservation : PBCodable <_INPBRentalCarReservation, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBLocationValue *dropOffLocation;
@property (readonly, nonatomic) char hasDropOffLocation;
@property (retain, nonatomic) _INPBLocationValue *pickupLocation;
@property (readonly, nonatomic) char hasPickupLocation;
@property (retain, nonatomic) _INPBRentalCar *rentalCar;
@property (readonly, nonatomic) char hasRentalCar;
@property (retain, nonatomic) _INPBDateTimeRange *rentalDuration;
@property (readonly, nonatomic) char hasRentalDuration;
@property (retain, nonatomic) _INPBReservation *reservation;
@property (readonly, nonatomic) char hasReservation;
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
