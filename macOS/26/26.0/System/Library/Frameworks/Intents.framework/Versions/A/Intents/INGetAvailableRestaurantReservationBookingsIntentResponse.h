@class NSString, INTermsAndConditions, NSArray;

@interface INGetAvailableRestaurantReservationBookingsIntentResponse : INIntentResponse <INImageProxyInjecting, INGetAvailableRestaurantReservationBookingsIntentResponseExport>

@property (readonly) long long code;
@property (copy) NSString *localizedRestaurantDescriptionText;
@property (copy) NSString *localizedBookingAdvisementText;
@property (copy) INTermsAndConditions *termsAndConditions;
@property (readonly) NSArray *availableBookings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBackingStore:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithAvailableBookings:(id)a0 code:(long long)a1 userActivity:(id)a2;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
