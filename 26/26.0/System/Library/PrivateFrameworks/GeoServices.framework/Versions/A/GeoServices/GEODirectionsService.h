@class NSURL, GEODirectionsRequester;

@interface GEODirectionsService : NSObject {
    GEODirectionsRequester *_directionsRequester;
}

@property (class, readonly, nonatomic) GEODirectionsService *sharedService;

@property (readonly, nonatomic) NSURL *directionsURL;

+ (BOOL)_canCurrentVoiceLanguageHandleWrittenText;
+ (BOOL)canSpeakWrittenAddresses;
+ (BOOL)canSpeakWrittenPlaceNames;
+ (void)customRouteCreationSupportedForLocation:(id)a0 queue:(id)a1 handler:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (id)requestDirections:(id)a0 handler:(id /* block */)a1;
- (id)requestDirectionsWithRequester:(id)a0 request:(id)a1 waypoints:(id)a2 parameters:(id)a3 handler:(id /* block */)a4;
- (id)requestRoutes:(id)a0 handler:(id /* block */)a1;

@end
