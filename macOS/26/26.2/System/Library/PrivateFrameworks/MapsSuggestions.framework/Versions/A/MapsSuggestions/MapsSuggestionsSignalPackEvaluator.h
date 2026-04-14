@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {
    MapsSuggestionsSignalPack *_signalPack;
}

+ (id)evaluatorFromSignalPack:(id)a0;

- (BOOL)hasSignalForExpressPaymentCard;
- (BOOL)userHasATransitCard;
- (BOOL)hasRidesharingInfo;
- (BOOL)isTransitCurrentlyPossible;
- (BOOL)hasCarPlayInfo;
- (BOOL)userHasAnUpcomingTrip;
- (BOOL)isTouristHere;
- (BOOL)hasTransitInfo;
- (BOOL)isLowChanceOfRaining;
- (BOOL)userHasAPaymentCard;
- (BOOL)userIsCurrentlyInATrip;
- (BOOL)isUserPreferenceDriving;
- (BOOL)hasUserTransportTypePreferenceInfo;
- (BOOL)isUserPreferenceRidesharing;
- (BOOL)isHighChanceOfSnowing;
- (BOOL)isColdWeather;
- (BOOL)isBadWeather;
- (BOOL)hasSignalForHasATransitCard;
- (BOOL)isRideSharingAppsInstalled;
- (BOOL)hasDistanceFromOriginToDestinationInfo;
- (double)isTransitUserHereConfidence;
- (void).cxx_destruct;
- (BOOL)hasDistanceFromHereToOriginInfo;
- (BOOL)hasSignalForIsCurrentlyInATrip;
- (id)initWithSignalPack:(id)a0;
- (BOOL)isEasilyWalkable;
- (BOOL)isMapTypeTransit;
- (BOOL)userHasAnExpressPaymentCard;
- (BOOL)hasTouristInfo;
- (BOOL)hasWeatherInfo;
- (BOOL)isMildWeather;
- (BOOL)hasDistanceFromHereToDestinationInfo;
- (BOOL)isWalkable;
- (BOOL)isCarPlayConnected;
- (BOOL)isHotWeather;
- (BOOL)hasSignalForPaymentCard;
- (BOOL)hasWeatherTemperatureInfo;
- (BOOL)isHighChanceOfRaining;
- (BOOL)isLowChanceOfSnowing;
- (BOOL)hasWeatherPrecipitationInfo;
- (BOOL)hasSignalForUpcomingTrip;
- (double)isTransitUserConfidence;
- (BOOL)isUserPreferenceTransit;
- (BOOL)hasMapTypeInfo;
- (BOOL)isUserPreferenceWalking;

@end
