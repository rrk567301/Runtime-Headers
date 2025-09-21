@class _INPBTicketedEvent, _INPBSeat, _INPBReservation, NSString;

@interface _INPBTicketedEventReservation : PBCodable <_INPBTicketedEventReservation, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBTicketedEvent *event;
@property (readonly, nonatomic) char hasEvent;
@property (retain, nonatomic) _INPBReservation *reservation;
@property (readonly, nonatomic) char hasReservation;
@property (retain, nonatomic) _INPBSeat *reservedSeat;
@property (readonly, nonatomic) char hasReservedSeat;
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
