@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {
    MapsSuggestionsSignalPack *_signalPack;
}

+ (id)evaluatorFromSignalPack:(id)a0;

- (BOOL)hasTouristInfo;
- (BOOL)hasCarPlayInfo;
- (BOOL)hasDistanceFromOriginToDestinationInfo;
- (id)initWithSignalPack:(id)a0;
- (BOOL)isLowChanceOfRaining;
- (BOOL)userHasAnUpcomingTrip;
- (BOOL)hasSignalForHasATransitCard;
- (BOOL)hasWeatherPrecipitationInfo;
- (BOOL)hasWeatherTemperatureInfo;
- (BOOL)hasRidesharingInfo;
- (BOOL)hasDistanceFromHereToOriginInfo;
- (BOOL)isTransitCurrentlyPossible;
- (double)isTransitUserHereConfidence;
- (BOOL)userHasAnExpressPaymentCard;
- (BOOL)isUserPreferenceRidesharing;
- (BOOL)isTouristHere;
- (BOOL)userHasATransitCard;
- (BOOL)isColdWeather;
- (BOOL)isCarPlayConnected;
- (BOOL)isRideSharingAppsInstalled;
- (BOOL)isHotWeather;
- (BOOL)isWalkable;
- (BOOL)hasSignalForIsCurrentlyInATrip;
- (BOOL)hasMapTypeInfo;
- (BOOL)hasSignalForUpcomingTrip;
- (BOOL)hasWeatherInfo;
- (BOOL)isBadWeather;
- (BOOL)hasDistanceFromHereToDestinationInfo;
- (BOOL)isLowChanceOfSnowing;
- (BOOL)isHighChanceOfRaining;
- (BOOL)userIsCurrentlyInATrip;
- (void).cxx_destruct;
- (BOOL)isHighChanceOfSnowing;
- (BOOL)isMildWeather;
- (BOOL)userHasAPaymentCard;
- (BOOL)isMapTypeTransit;
- (BOOL)isUserPreferenceTransit;
- (BOOL)hasSignalForExpressPaymentCard;
- (BOOL)hasUserTransportTypePreferenceInfo;
- (BOOL)isEasilyWalkable;
- (BOOL)isUserPreferenceDriving;
- (BOOL)hasSignalForPaymentCard;
- (BOOL)hasTransitInfo;
- (double)isTransitUserConfidence;
- (BOOL)isUserPreferenceWalking;

@end
