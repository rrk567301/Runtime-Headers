@class NSNumber, CLPlacemark, INDateComponentsRange;

@interface INLodgingReservation : INReservation <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) CLPlacemark *lodgingBusinessLocation;
@property (readonly, copy) INDateComponentsRange *reservationDuration;
@property (readonly, copy) NSNumber *numberOfAdults;
@property (readonly, copy) NSNumber *numberOfChildren;

- (id)_dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_duration;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 URL:(id)a6 lodgingBusinessLocation:(id)a7 reservationDuration:(id)a8 numberOfAdults:(id)a9 numberOfChildren:(id)a10;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 lodgingBusinessLocation:(id)a6 reservationDuration:(id)a7 numberOfAdults:(id)a8 numberOfChildren:(id)a9;

@end
