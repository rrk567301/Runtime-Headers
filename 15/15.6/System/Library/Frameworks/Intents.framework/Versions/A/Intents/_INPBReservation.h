@class NSArray, _INPBTimestamp, _INPBDataString, NSString, _INPBURLValue;

@interface _INPBReservation : PBCodable <_INPBReservation, NSSecureCoding, NSCopying> {
    struct { unsigned char reservationStatus : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBURLValue *url;
@property (readonly, nonatomic) char hasUrl;
@property (copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) unsigned long long actionsCount;
@property (retain, nonatomic) _INPBTimestamp *bookingTime;
@property (readonly, nonatomic) char hasBookingTime;
@property (retain, nonatomic) _INPBDataString *itemReference;
@property (readonly, nonatomic) char hasItemReference;
@property (copy, nonatomic) NSString *reservationHolderName;
@property (readonly, nonatomic) char hasReservationHolderName;
@property (copy, nonatomic) NSString *reservationNumber;
@property (readonly, nonatomic) char hasReservationNumber;
@property (nonatomic) int reservationStatus;
@property (nonatomic) char hasReservationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)actionsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addActions:(id)a0;
- (int)StringAsReservationStatus:(id)a0;
- (id)actionsAtIndex:(unsigned long long)a0;
- (void)clearActions;
- (id)reservationStatusAsString:(int)a0;

@end
