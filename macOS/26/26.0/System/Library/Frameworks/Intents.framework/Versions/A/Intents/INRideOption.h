@class INImage, NSString, NSArray, NSUserActivity, NSDate, NSNumber, INPriceRange;

@interface INRideOption : NSObject <INCacheableContainer, INRideOptionExport, NSCopying, NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *name;
@property (copy) NSDate *estimatedPickupDate;
@property (copy) INPriceRange *priceRange;
@property (copy) NSNumber *usesMeteredFare;
@property (copy) NSString *disclaimerMessage;
@property (copy) NSArray *availablePartySizeOptions;
@property (copy) NSString *availablePartySizeOptionsSelectionPrompt;
@property (copy) NSString *specialPricing;
@property (copy) INImage *specialPricingBadgeImage;
@property (copy) NSArray *fareLineItems;
@property (retain) NSUserActivity *userActivityForBookingInApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_intents_updateContainerWithCache:(id)a0;
- (id)_intents_cacheableObjects;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 estimatedPickupDate:(id)a1;

@end
