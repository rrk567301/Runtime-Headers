@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {
    MapsSuggestionsSignalPack *_signalPack;
}

+ (id)evaluatorFromSignalPack:(id)a0;

- (BOOL)isLowChanceOfSnowing;
- (BOOL)hasTouristInfo;
- (BOOL)userHasAnExpressPaymentCard;
- (BOOL)hasDistanceFromOriginToDestinationInfo;
- (BOOL)isBadWeather;
- (BOOL)isMapTypeTransit;
- (BOOL)isLowChanceOfRaining;
- (BOOL)isWalkable;
- (BOOL)hasSignalForPaymentCard;
- (BOOL)hasDistanceFromHereToOriginInfo;
- (id)initWithSignalPack:(id)a0;
- (BOOL)hasDistanceFromHereToDestinationInfo;
- (BOOL)hasTransitInfo;
- (BOOL)hasSignalForHasATransitCard;
- (BOOL)isCarPlayConnected;
- (BOOL)isUserPreferenceTransit;
- (BOOL)isTransitCurrentlyPossible;
- (BOOL)hasUserTransportTypePreferenceInfo;
- (BOOL)hasWeatherInfo;
- (BOOL)isUserPreferenceWalking;
- (void).cxx_destruct;
- (BOOL)isHighChanceOfSnowing;
- (BOOL)hasCarPlayInfo;
- (BOOL)isColdWeather;
- (BOOL)isTouristHere;
- (BOOL)hasRidesharingInfo;
- (BOOL)hasSignalForUpcomingTrip;
- (BOOL)isHotWeather;
- (BOOL)isUserPreferenceDriving;
- (BOOL)isEasilyWalkable;
- (BOOL)hasWeatherPrecipitationInfo;
- (BOOL)hasSignalForIsCurrentlyInATrip;
- (BOOL)hasMapTypeInfo;
- (BOOL)userHasAPaymentCard;
- (BOOL)hasSignalForExpressPaymentCard;
- (BOOL)hasWeatherTemperatureInfo;
- (double)isTransitUserConfidence;
- (BOOL)isMildWeather;
- (BOOL)userHasATransitCard;
- (BOOL)userHasAnUpcomingTrip;
- (BOOL)userIsCurrentlyInATrip;
- (BOOL)isRideSharingAppsInstalled;
- (BOOL)isUserPreferenceRidesharing;
- (BOOL)isHighChanceOfRaining;
- (double)isTransitUserHereConfidence;

@end
