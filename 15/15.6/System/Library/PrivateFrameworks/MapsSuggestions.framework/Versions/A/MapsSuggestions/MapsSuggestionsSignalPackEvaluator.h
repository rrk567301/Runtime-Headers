@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {
    MapsSuggestionsSignalPack *_signalPack;
}

+ (id)evaluatorFromSignalPack:(id)a0;

- (void).cxx_destruct;
- (char)hasCarPlayInfo;
- (char)hasTouristInfo;
- (char)isWalkable;
- (char)isCarPlayConnected;
- (char)hasDistanceFromHereToOriginInfo;
- (char)hasDistanceFromHereToDestinationInfo;
- (char)hasDistanceFromOriginToDestinationInfo;
- (char)hasMapTypeInfo;
- (char)hasRidesharingInfo;
- (char)hasSignalForExpressPaymentCard;
- (char)hasSignalForHasATransitCard;
- (char)hasSignalForIsCurrentlyInATrip;
- (char)hasSignalForPaymentCard;
- (char)hasSignalForUpcomingTrip;
- (char)hasTransitInfo;
- (char)hasUserTransportTypePreferenceInfo;
- (char)hasWeatherInfo;
- (char)hasWeatherPrecipitationInfo;
- (char)hasWeatherTemperatureInfo;
- (id)initWithSignalPack:(id)a0;
- (char)isBadWeather;
- (char)isColdWeather;
- (char)isEasilyWalkable;
- (char)isHighChanceOfRaining;
- (char)isHighChanceOfSnowing;
- (char)isHotWeather;
- (char)isLowChanceOfRaining;
- (char)isLowChanceOfSnowing;
- (char)isMapTypeTransit;
- (char)isMildWeather;
- (char)isRideSharingAppsInstalled;
- (char)isTouristHere;
- (char)isTransitCurrentlyPossible;
- (double)isTransitUserConfidence;
- (double)isTransitUserHereConfidence;
- (char)isUserPreferenceDriving;
- (char)isUserPreferenceRidesharing;
- (char)isUserPreferenceTransit;
- (char)isUserPreferenceWalking;
- (char)userHasAPaymentCard;
- (char)userHasATransitCard;
- (char)userHasAnExpressPaymentCard;
- (char)userHasAnUpcomingTrip;
- (char)userIsCurrentlyInATrip;

@end
