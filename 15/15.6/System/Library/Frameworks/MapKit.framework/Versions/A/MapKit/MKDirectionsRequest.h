@class NSDate, NSArray, GEOAutomobileOptions, GEOCyclingOptions, GEOWalkingOptions, GEOTransitOptions, MKMapItem;

@interface MKDirectionsRequest : NSObject <NSCopying> {
    unsigned long long _transportType;
    char _requestsAlternateRoutes;
    NSDate *_departureDate;
    NSDate *_arrivalDate;
    long long _tollPreference;
    long long _highwayPreference;
}

@property (readonly, nonatomic) char _includeTravelTimes;
@property (readonly, nonatomic) char _includeTrafficIncidents;
@property (readonly, nonatomic) char _includeRoutePoints;
@property (readonly, nonatomic) char _resolveExtraAutomobileOptions;
@property (nonatomic, getter=_includeDistanceInETA, setter=_setIncludeDistanceInETA:) char includeDistanceInETA;
@property (retain, nonatomic, getter=_additionalTransportTypesRequested, setter=_setAdditionalTransportTypesRequested:) NSArray *additionalTransportTypesRequested;
@property (nonatomic, getter=_useBackgroundURL, setter=_setUseBackgroundURL:) char useBackgroundURL;
@property (retain, nonatomic, getter=_automobileOptions, setter=_setAutomobileOptions:) GEOAutomobileOptions *automobileOptions;
@property (retain, nonatomic, getter=_transitOptions, setter=_setTransitOptions:) GEOTransitOptions *transitOptions;
@property (retain, nonatomic, getter=_walkingOptions, setter=_setWalkingOptions:) GEOWalkingOptions *walkingOptions;
@property (retain, nonatomic, getter=_cyclingOptions, setter=_setCyclingOptions:) GEOCyclingOptions *cyclingOptions;
@property (retain, nonatomic) MKMapItem *source;
@property (retain, nonatomic) MKMapItem *destination;

+ (char)isDirectionsRequestURL:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0;
- (char)writeToURL:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;
- (unsigned long long)transportType;
- (id)arrivalDate;
- (id)departureDate;
- (void)setTransportType:(unsigned long long)a0;
- (void)setDepartureDate:(id)a0;
- (void)setArrivalDate:(id)a0;
- (unsigned long long)_transportType;
- (id)_arrivalDate;
- (id)_departureDate;
- (id)_mapkit_initWithDictionaryRepresentation:(id)a0;
- (id)_mapkit_initWithSource:(id)a0 destination:(id)a1 transportType:(unsigned long long)a2 arrivalDate:(id)a3;
- (id)_mapkit_initWithSource:(id)a0 destination:(id)a1 transportType:(unsigned long long)a2 departureDate:(id)a3 includeTravelTimes:(char)a4 includeTrafficIncidents:(char)a5 includeRoutePoints:(char)a6 resolveExtraAutomobileOptions:(char)a7;
- (long long)highwayPreference;
- (char)requestsAlternateRoutes;
- (void)setHighwayPreference:(long long)a0;
- (void)setRequestsAlternateRoutes:(char)a0;
- (void)setTollPreference:(long long)a0;
- (long long)tollPreference;

@end
