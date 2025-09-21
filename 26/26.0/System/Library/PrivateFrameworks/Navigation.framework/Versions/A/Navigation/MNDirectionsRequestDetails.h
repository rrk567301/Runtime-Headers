@class GEOComposedGeometryRoutePersistentData, NSString, GEOCommonOptions, NSArray, GEORouteAttributes, GEOResumeRouteHandle, GEOApplicationAuditToken, GEOMapServiceTraits, GEOLocation, GEOMapRegion, GEODirectionsRequestFeedback;

@interface MNDirectionsRequestDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *waypoints;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (retain, nonatomic) GEOMapServiceTraits *traits;
@property (nonatomic) unsigned long long maxRouteCount;
@property (retain, nonatomic) GEOLocation *currentUserLocation;
@property (retain, nonatomic) GEOMapRegion *currentMapRegion;
@property (retain, nonatomic) GEODirectionsRequestFeedback *directionsRequestFeedback;
@property (retain, nonatomic) GEOCommonOptions *commonOptions;
@property (nonatomic) BOOL isResumingMultipointRoute;
@property (retain, nonatomic) GEOResumeRouteHandle *resumeRouteHandle;
@property (retain, nonatomic) GEOComposedGeometryRoutePersistentData *persistentData;
@property (retain, nonatomic) NSString *tracePath;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTracePath:(id)a0;
- (id)initWithWaypoints:(id)a0 routeAttributes:(id)a1;

@end
