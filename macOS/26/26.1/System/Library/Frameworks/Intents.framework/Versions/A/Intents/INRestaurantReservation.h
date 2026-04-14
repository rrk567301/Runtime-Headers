@class NSNumber, CLPlacemark, INDateComponentsRange;

@interface INRestaurantReservation : INReservation <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) INDateComponentsRange *reservationDuration;
@property (readonly, copy) NSNumber *partySize;
@property (readonly, copy) CLPlacemark *restaurantLocation;

- (unsigned long long)hash;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_duration;
- (BOOL)isEqual:(id)a0;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 URL:(id)a6 reservationDuration:(id)a7 partySize:(id)a8 restaurantLocation:(id)a9;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 reservationDuration:(id)a6 partySize:(id)a7 restaurantLocation:(id)a8;

@end
