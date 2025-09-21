@class GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse, NSDateInterval, NSError, GEOComposedETARoute, NSArray;

@interface Navigation.MNETAUpdateResponseInfo : NSObject {
    void /* unknown type, empty encoding */ responseTime;
    void /* function */ alternateRoutes;
}

@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) GEOETATrafficUpdateRequest *request;
@property (nonatomic, readonly) GEOETATrafficUpdateResponse *response;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSDateInterval *responseTime;
@property (nonatomic, readonly) GEOComposedETARoute *etaRoute;
@property (nonatomic, readonly) NSArray *alternateRoutes;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
