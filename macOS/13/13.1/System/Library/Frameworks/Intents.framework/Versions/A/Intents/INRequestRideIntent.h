@class INDateComponentsRange, NSString, CLPlacemark, INPaymentMethod, INSpeakableString, NSNumber;

@interface INRequestRideIntent : INIntent <INRequestRideIntentExport>

@property (readonly, copy) CLPlacemark *pickupLocation;
@property (readonly, copy) CLPlacemark *dropOffLocation;
@property (readonly, copy) INSpeakableString *rideOptionName;
@property (readonly, copy) NSNumber *partySize;
@property (readonly, copy) INPaymentMethod *paymentMethod;
@property (readonly, copy) INDateComponentsRange *scheduledPickupTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_ignoredParameters;

- (id)domain;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (void)setPartySize:(id)a0;
- (id)_typedBackingStore;
- (void)_setMetadata:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (BOOL)_isUserConfirmationRequired;
- (void)setPickupLocation:(id)a0;
- (void)setDropOffLocation:(id)a0;
- (void)setRideOptionName:(id)a0;
- (void)setPaymentMethod:(id)a0;
- (void)setScheduledPickupTime:(id)a0;
- (id)initWithPickupLocation:(id)a0 dropOffLocation:(id)a1 rideOptionName:(id)a2 partySize:(id)a3 paymentMethod:(id)a4 scheduledPickupTime:(id)a5;
- (id)initWithPickupLocation:(id)a0 dropOffLocation:(id)a1 rideOptionName:(id)a2 partySize:(id)a3 paymentMethod:(id)a4;

@end
