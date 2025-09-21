@class _INPBDateTimeRange, _INPBInteger, _INPBReservation, NSString, _INPBLocation;

@interface _INPBLodgingReservation : PBCodable <_INPBLodgingReservation, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBLocation *lodgingBusinessLocation;
@property (readonly, nonatomic) char hasLodgingBusinessLocation;
@property (retain, nonatomic) _INPBInteger *numberOfAdults;
@property (readonly, nonatomic) char hasNumberOfAdults;
@property (retain, nonatomic) _INPBInteger *numberOfChildren;
@property (readonly, nonatomic) char hasNumberOfChildren;
@property (retain, nonatomic) _INPBReservation *reservation;
@property (readonly, nonatomic) char hasReservation;
@property (retain, nonatomic) _INPBDateTimeRange *reservationDuration;
@property (readonly, nonatomic) char hasReservationDuration;
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
