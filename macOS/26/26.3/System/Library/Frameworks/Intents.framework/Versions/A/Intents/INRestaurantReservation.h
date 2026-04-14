@class NSNumber, CLPlacemark, INDateComponentsRange;

@interface INRestaurantReservation : INReservation <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) INDateComponentsRange *reservationDuration;
@property (readonly, copy) NSNumber *partySize;
@property (readonly, copy) CLPlacemark *restaurantLocation;

- (id)_dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_duration;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 URL:(id)a6 reservationDuration:(id)a7 partySize:(id)a8 restaurantLocation:(id)a9;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 reservationDuration:(id)a6 partySize:(id)a7 restaurantLocation:(id)a8;

@end
