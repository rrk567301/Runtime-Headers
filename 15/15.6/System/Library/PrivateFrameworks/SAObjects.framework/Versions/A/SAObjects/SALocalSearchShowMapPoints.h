@class SALocalSearchMapItemList, NSString, SALocalSearchMapItem, SALocalSearchCarRouteOptions, NSDate, NSNumber;

@interface SALocalSearchShowMapPoints : SADomainCommand

@property (copy, nonatomic) NSDate *arrivalDate;
@property (retain, nonatomic) SALocalSearchCarRouteOptions *carRouteOptions;
@property (nonatomic) char chainResultSet;
@property (copy, nonatomic) NSDate *departureDate;
@property (copy, nonatomic) NSString *directionsType;
@property (retain, nonatomic) SALocalSearchMapItem *itemDestination;
@property (retain, nonatomic) SALocalSearchMapItem *itemSource;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *preferredDirectionsMode;
@property (copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;
@property (nonatomic) char searchAlongRoute;
@property (retain, nonatomic) SALocalSearchMapItemList *searchItems;
@property (nonatomic) char showDirections;
@property (nonatomic) char showTraffic;
@property (nonatomic) char suppressNavigation;

+ (id)showMapPoints;
+ (id)showMapPointsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
