@class _INPBTicketedEventReservation, _INPBBoatReservation, NSString, _INPBFlightReservation, _INPBTrainReservation, _INPBBusReservation, _INPBRentalCarReservation, _INPBRestaurantReservation, _INPBLodgingReservation;

@interface _INPBReservationWrapper : PBCodable <_INPBReservationWrapper, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBBoatReservation *boatReservation;
@property (readonly, nonatomic) char hasBoatReservation;
@property (retain, nonatomic) _INPBBusReservation *busReservation;
@property (readonly, nonatomic) char hasBusReservation;
@property (retain, nonatomic) _INPBFlightReservation *flightReservation;
@property (readonly, nonatomic) char hasFlightReservation;
@property (retain, nonatomic) _INPBLodgingReservation *lodgingReservation;
@property (readonly, nonatomic) char hasLodgingReservation;
@property (retain, nonatomic) _INPBRentalCarReservation *rentalCarReservation;
@property (readonly, nonatomic) char hasRentalCarReservation;
@property (retain, nonatomic) _INPBRestaurantReservation *restaurantReservation;
@property (readonly, nonatomic) char hasRestaurantReservation;
@property (retain, nonatomic) _INPBTicketedEventReservation *ticketedEventReservation;
@property (readonly, nonatomic) char hasTicketedEventReservation;
@property (retain, nonatomic) _INPBTrainReservation *trainReservation;
@property (readonly, nonatomic) char hasTrainReservation;
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
