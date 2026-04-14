@class GEOComposedWaypoint, NSArray, MNActiveRouteInfo, MNLocation;

@interface MNNavigationSessionState : NSObject <NSCopying>

@property (retain, nonatomic) MNLocation *location;
@property (retain, nonatomic) MNActiveRouteInfo *currentRouteInfo;
@property (copy, nonatomic) NSArray *alternateRouteInfos;
@property (retain, nonatomic) GEOComposedWaypoint *currentWaypoint;
@property (nonatomic) unsigned long long targetLegIndex;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 currentRouteInfo:(id)a1 alternateRouteInfos:(id)a2 targetLegIndex:(unsigned long long)a3;
- (id)_locationStateAsString:(unsigned long long)a0;

@end
