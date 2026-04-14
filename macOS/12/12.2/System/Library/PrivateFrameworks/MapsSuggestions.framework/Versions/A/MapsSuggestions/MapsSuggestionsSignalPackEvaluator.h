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
- (id)initWithSignalPack:(id)a0;
- (BOOL)isTouristHere;
- (double)isTransitUserHereConfidence;
- (BOOL)hasWeatherTemperatureInfo;
- (BOOL)hasWeatherPrecipitationInfo;
- (BOOL)isHotWeather;
- (BOOL)isColdWeather;
- (BOOL)isHighChanceOfRaining;
- (BOOL)isHighChanceOfSnowing;
- (double)isTransitUserConfidence;
- (BOOL)isUserPreferenceTransit;
- (BOOL)hasWeatherInfo;
- (BOOL)isMildWeather;
- (BOOL)isLowChanceOfRaining;
- (BOOL)isLowChanceOfSnowing;
- (BOOL)isBadWeather;
- (BOOL)hasUserTransportTypePreferenceInfo;
- (BOOL)isUserPreferenceDriving;
- (BOOL)isUserPreferenceWalking;
- (BOOL)isUserPreferenceRidesharing;
- (BOOL)hasDistanceFromHereToDestinationInfo;
- (BOOL)hasDistanceFromHereToOriginInfo;
- (BOOL)hasDistanceFromOriginToDestinationInfo;
- (BOOL)isEasilyWalkable;
- (BOOL)hasMapTypeInfo;
- (BOOL)isMapTypeTransit;
- (BOOL)hasTransitInfo;
- (BOOL)isTransitCurrentlyPossible;
- (BOOL)hasRidesharingInfo;
- (BOOL)isRideSharingAppsInstalled;

@end
