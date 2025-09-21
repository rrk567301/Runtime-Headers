@class NSArray, NSString, _INPBTimestamp, _INPBPriceRangeValue, _INPBImageValue, _INPBUserActivity;

@interface _INPBRideOption : PBCodable <_INPBRideOption, NSSecureCoding, NSCopying> {
    struct { unsigned char usesMeteredFare : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *availablePartySizeOptions;
@property (readonly, nonatomic) unsigned long long availablePartySizeOptionsCount;
@property (copy, nonatomic) NSString *availablePartySizeOptionsSelectionPrompt;
@property (readonly, nonatomic) char hasAvailablePartySizeOptionsSelectionPrompt;
@property (copy, nonatomic) NSString *disclaimerMessage;
@property (readonly, nonatomic) char hasDisclaimerMessage;
@property (retain, nonatomic) _INPBTimestamp *estimatedPickupDate;
@property (readonly, nonatomic) char hasEstimatedPickupDate;
@property (copy, nonatomic) NSArray *fareLineItems;
@property (readonly, nonatomic) unsigned long long fareLineItemsCount;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) _INPBPriceRangeValue *priceRange;
@property (readonly, nonatomic) char hasPriceRange;
@property (copy, nonatomic) NSString *specialPricing;
@property (readonly, nonatomic) char hasSpecialPricing;
@property (retain, nonatomic) _INPBImageValue *specialPricingBadgeImage;
@property (readonly, nonatomic) char hasSpecialPricingBadgeImage;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) char hasSubtitle;
@property (retain, nonatomic) _INPBUserActivity *userActivityForBookingInApplication;
@property (readonly, nonatomic) char hasUserActivityForBookingInApplication;
@property (nonatomic) char usesMeteredFare;
@property (nonatomic) char hasUsesMeteredFare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)availablePartySizeOptionsType;
+ (Class)fareLineItemsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAvailablePartySizeOptions:(id)a0;
- (void)addFareLineItems:(id)a0;
- (id)availablePartySizeOptionsAtIndex:(unsigned long long)a0;
- (void)clearAvailablePartySizeOptions;
- (void)clearFareLineItems;
- (id)fareLineItemsAtIndex:(unsigned long long)a0;

@end
