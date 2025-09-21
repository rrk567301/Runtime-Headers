@class GEOComposedGeometryRoutePersistentData, NSString, GEOCommonOptions, NSArray, GEORouteAttributes, GEOResumeRouteHandle, GEOApplicationAuditToken, GEOMapServiceTraits, GEOLocation, GEOMapRegion, GEODirectionsRequestFeedback;

@interface MNDirectionsRequestDetails : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *waypoints;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (retain, nonatomic) GEOMapServiceTraits *traits;
@property (nonatomic) unsigned long long maxRouteCount;
@property (retain, nonatomic) GEOLocation *currentUserLocation;
@property (retain, nonatomic) GEOMapRegion *currentMapRegion;
@property (retain, nonatomic) GEODirectionsRequestFeedback *directionsRequestFeedback;
@property (retain, nonatomic) GEOCommonOptions *commonOptions;
@property (nonatomic) char isResumingMultipointRoute;
@property (retain, nonatomic) GEOResumeRouteHandle *resumeRouteHandle;
@property (retain, nonatomic) GEOComposedGeometryRoutePersistentData *persistentData;
@property (retain, nonatomic) NSString *tracePath;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTracePath:(id)a0;
- (id)initWithWaypoints:(id)a0 routeAttributes:(id)a1;

@end
