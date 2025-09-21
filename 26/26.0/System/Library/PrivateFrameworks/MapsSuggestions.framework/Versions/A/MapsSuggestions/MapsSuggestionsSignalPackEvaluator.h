@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {
    MapsSuggestionsSignalPack *_signalPack;
}

+ (id)evaluatorFromSignalPack:(id)a0;

- (BOOL)isColdWeather;
- (BOOL)hasTouristInfo;
- (BOOL)hasSignalForPaymentCard;
- (BOOL)userHasAPaymentCard;
- (BOOL)hasMapTypeInfo;
- (BOOL)hasCarPlayInfo;
- (BOOL)isTransitCurrentlyPossible;
- (BOOL)isMapTypeTransit;
- (BOOL)userIsCurrentlyInATrip;
- (BOOL)isUserPreferenceRidesharing;
- (BOOL)userHasATransitCard;
- (double)isTransitUserConfidence;
- (BOOL)userHasAnExpressPaymentCard;
- (BOOL)hasRidesharingInfo;
- (BOOL)hasDistanceFromHereToOriginInfo;
- (BOOL)isRideSharingAppsInstalled;
- (BOOL)hasTransitInfo;
- (BOOL)hasUserTransportTypePreferenceInfo;
- (BOOL)hasWeatherTemperatureInfo;
- (BOOL)isHighChanceOfSnowing;
- (BOOL)hasSignalForHasATransitCard;
- (BOOL)userHasAnUpcomingTrip;
- (BOOL)hasWeatherPrecipitationInfo;
- (BOOL)isUserPreferenceWalking;
- (BOOL)hasSignalForIsCurrentlyInATrip;
- (BOOL)hasSignalForExpressPaymentCard;
- (BOOL)hasWeatherInfo;
- (BOOL)isHighChanceOfRaining;
- (BOOL)isCarPlayConnected;
- (BOOL)hasDistanceFromHereToDestinationInfo;
- (BOOL)hasSignalForUpcomingTrip;
- (double)isTransitUserHereConfidence;
- (BOOL)isBadWeather;
- (BOOL)isMildWeather;
- (id)initWithSignalPack:(id)a0;
- (BOOL)hasDistanceFromOriginToDestinationInfo;
- (BOOL)isUserPreferenceDriving;
- (BOOL)isHotWeather;
- (BOOL)isTouristHere;
- (BOOL)isUserPreferenceTransit;
- (BOOL)isWalkable;
- (BOOL)isLowChanceOfRaining;
- (BOOL)isEasilyWalkable;
- (BOOL)isLowChanceOfSnowing;
- (void).cxx_destruct;

@end
