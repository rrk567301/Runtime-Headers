@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {
    MapsSuggestionsSignalPack *_signalPack;
}

+ (id)evaluatorFromSignalPack:(id)a0;

- (void).cxx_destruct;
- (BOOL)isWalkable;
- (BOOL)hasCarPlayInfo;
- (BOOL)hasTouristInfo;
- (BOOL)isCarPlayConnected;
- (BOOL)isTouristHere;
- (BOOL)userHasAnExpressPaymentCard;
- (BOOL)userHasAPaymentCard;
- (BOOL)userHasATransitCard;
- (id)initWithSignalPack:(id)a0;
- (BOOL)hasWeatherInfo;
- (BOOL)hasWeatherTemperatureInfo;
- (BOOL)isColdWeather;
- (BOOL)isHotWeather;
- (BOOL)isMildWeather;
- (BOOL)hasWeatherPrecipitationInfo;
- (BOOL)isLowChanceOfRaining;
- (BOOL)isHighChanceOfRaining;
- (BOOL)isLowChanceOfSnowing;
- (BOOL)isHighChanceOfSnowing;
- (BOOL)isBadWeather;
- (BOOL)hasUserTransportTypePreferenceInfo;
- (BOOL)isUserPreferenceDriving;
- (BOOL)isUserPreferenceWalking;
- (BOOL)isUserPreferenceTransit;
- (BOOL)isUserPreferenceRidesharing;
- (BOOL)hasDistanceFromHereToDestinationInfo;
- (BOOL)hasDistanceFromHereToOriginInfo;
- (BOOL)hasDistanceFromOriginToDestinationInfo;
- (BOOL)isEasilyWalkable;
- (BOOL)hasMapTypeInfo;
- (BOOL)isMapTypeTransit;
- (BOOL)hasSignalForExpressPaymentCard;
- (BOOL)hasSignalForPaymentCard;
- (BOOL)hasSignalForHasATransitCard;
- (BOOL)hasTransitInfo;
- (BOOL)isTransitCurrentlyPossible;
- (BOOL)hasRidesharingInfo;
- (BOOL)isRideSharingAppsInstalled;
- (double)isTransitUserHereConfidence;
- (double)isTransitUserConfidence;

@end
