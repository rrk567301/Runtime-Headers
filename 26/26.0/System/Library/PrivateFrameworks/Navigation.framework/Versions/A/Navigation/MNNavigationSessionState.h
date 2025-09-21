@class NSString, NSArray, MNLocation, GEOComposedRouteLeg, GEOApplicationAuditToken, GEOComposedWaypoint, MNActiveRouteInfo, GEOMapServiceTraits, NSMutableArray, geo_isolater;

@interface MNNavigationSessionState : NSObject <NSCopying> {
    geo_isolater *_userIncidentReportsIsolater;
}

@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (retain, nonatomic) NSString *requestingAppIdentifier;
@property (retain, nonatomic) GEOMapServiceTraits *traits;
@property (nonatomic) unsigned long long initialRouteSource;
@property (nonatomic) int navigationState;
@property (retain, nonatomic) MNLocation *location;
@property (copy, nonatomic) NSArray *alternateRouteInfos;
@property (nonatomic) unsigned long long targetLegIndex;
@property (nonatomic) long long upcomingAnchorPointIndex;
@property (nonatomic) BOOL hasBeenOnRouteOnce;
@property (nonatomic) long long arrivalState;
@property (nonatomic) BOOL isDisplayingNavigationTray;
@property (readonly, nonatomic) MNActiveRouteInfo *currentRouteInfo;
@property (readonly, nonatomic) unsigned long long lastRerouteReason;
@property (readonly, nonatomic) GEOComposedWaypoint *currentWaypoint;
@property (readonly, nonatomic) GEOComposedWaypoint *destination;
@property (readonly, nonatomic) GEOComposedRouteLeg *targetLeg;
@property (readonly, nonatomic) GEOComposedRouteLeg *nextLeg;
@property (readonly, nonatomic) BOOL isOnLastLeg;
@property (readonly, nonatomic) NSMutableArray *userIncidentReports;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addUserIncidentReport:(id)a0;
- (id)_locationStateAsString:(unsigned long long)a0;
- (BOOL)areRoutesSame:(id)a0;
- (id)initWithLocation:(id)a0 currentRouteInfo:(id)a1 alternateRouteInfos:(id)a2 targetLegIndex:(unsigned long long)a3;
- (void)updateCurrentRouteInfo:(id)a0 rerouteReason:(unsigned long long)a1;

@end
