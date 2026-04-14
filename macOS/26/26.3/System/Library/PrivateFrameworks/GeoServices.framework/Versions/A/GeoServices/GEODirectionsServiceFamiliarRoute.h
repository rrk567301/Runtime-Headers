@class NSString, NSArray;

@interface GEODirectionsServiceFamiliarRoute : NSObject {
    void /* function */ routeUUID;
    void /* function */ segments;
}

@property (nonatomic, readonly) NSString *routeUUID;
@property (nonatomic, readonly) NSArray *segments;

- (id)init;
- (void).cxx_destruct;
- (id)geoFamiliarWaypointRoute;
- (id)initWithFamiliarRouteUUID:(id)a0 segments:(id)a1;

@end
