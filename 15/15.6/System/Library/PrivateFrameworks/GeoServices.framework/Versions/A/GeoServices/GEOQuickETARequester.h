@class GEODirectionsRequest, NSString, GEOETARequest, GEOQuickETARequest;

@interface GEOQuickETARequester : NSObject {
    GEOQuickETARequest *_request;
    GEOETARequest *_simpleETARequest;
    GEODirectionsRequest *_directionsETARequest;
    NSString *_loggingFacility;
}

+ (char)requestETAFromOrigin:(id)a0 toDestinations:(id)a1 transportType:(int)a2 timepoint:(struct GEOTimepoint { double x0; double x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; })a3 includeDistance:(char)a4 commonOptions:(id)a5 automobileOptions:(id)a6 walkingOptions:(id)a7 transitOptions:(id)a8 cyclingOptions:(id)a9 auditToken:(id)a10 handler:(id /* block */)a11 callbackQueue:(id)a12;
+ (char)requestTrafficAndETAFromWaypoint:(id)a0 toWaypoints:(id)a1 transportType:(int)a2 automobileOptions:(id)a3 handler:(id /* block */)a4;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithRequest:(id)a0;
- (void)_calculateRoutingETAWithHandler:(id /* block */)a0;
- (void)_calculateRoutingETAWithSummary:(char)a0 handler:(id /* block */)a1;
- (void)_calculateSimpleETAFromAPI:(char)a0 WithHandler:(id /* block */)a1;
- (void)_calculateSimpleETAFromAPI:(char)a0 includeSummary:(char)a1 WithHandler:(id /* block */)a2;
- (void)calculateETAFromAPI:(char)a0 WithResponseHandler:(id /* block */)a1;
- (void)calculateETAFromAPI:(char)a0 includeSummary:(char)a1 WithResponseHandler:(id /* block */)a2;
- (void)calculateETAWithResponseHandler:(id /* block */)a0;

@end
