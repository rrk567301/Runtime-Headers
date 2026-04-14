@class NSString, INRestaurant;

@interface INGetAvailableRestaurantReservationBookingDefaultsIntent : INIntent <INGetAvailableRestaurantReservationBookingDefaultsIntentExport>

@property (copy) INRestaurant *restaurant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)intentDescription;

- (id)_dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRestaurant:(id)a0;

@end
