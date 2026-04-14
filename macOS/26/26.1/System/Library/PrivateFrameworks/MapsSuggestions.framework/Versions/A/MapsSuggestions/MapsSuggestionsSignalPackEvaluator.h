@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {
    MapsSuggestionsSignalPack *_signalPack;
}

+ (id)evaluatorFromSignalPack:(id)a0;

- (BOOL)hasCarPlayInfo;
- (BOOL)hasSignalForUpcomingTrip;
- (BOOL)userHasAPaymentCard;
- (BOOL)hasWeatherPrecipitationInfo;
- (BOOL)isLowChanceOfSnowing;
- (BOOL)isBadWeather;
- (BOOL)isTransitCurrentlyPossible;
- (BOOL)isHighChanceOfSnowing;
- (BOOL)hasTransitInfo;
- (id)initWithSignalPack:(id)a0;
- (BOOL)isEasilyWalkable;
- (BOOL)isUserPreferenceDriving;
- (BOOL)isUserPreferenceRidesharing;
- (BOOL)userIsCurrentlyInATrip;
- (BOOL)isMapTypeTransit;
- (BOOL)userHasAnUpcomingTrip;
- (BOOL)hasSignalForExpressPaymentCard;
- (BOOL)isCarPlayConnected;
- (BOOL)isMildWeather;
- (BOOL)hasDistanceFromHereToDestinationInfo;
- (BOOL)hasTouristInfo;
- (BOOL)hasSignalForIsCurrentlyInATrip;
- (double)isTransitUserHereConfidence;
- (BOOL)isHighChanceOfRaining;
- (BOOL)isColdWeather;
- (BOOL)isRideSharingAppsInstalled;
- (BOOL)hasWeatherTemperatureInfo;
- (BOOL)hasSignalForPaymentCard;
- (void).cxx_destruct;
- (BOOL)isHotWeather;
- (BOOL)isWalkable;
- (BOOL)userHasATransitCard;
- (BOOL)isTouristHere;
- (BOOL)isLowChanceOfRaining;
- (BOOL)hasUserTransportTypePreferenceInfo;
- (BOOL)hasSignalForHasATransitCard;
- (BOOL)hasWeatherInfo;
- (double)isTransitUserConfidence;
- (BOOL)userHasAnExpressPaymentCard;
- (BOOL)hasDistanceFromHereToOriginInfo;
- (BOOL)hasDistanceFromOriginToDestinationInfo;
- (BOOL)isUserPreferenceTransit;
- (BOOL)hasRidesharingInfo;
- (BOOL)hasMapTypeInfo;
- (BOOL)isUserPreferenceWalking;

@end
