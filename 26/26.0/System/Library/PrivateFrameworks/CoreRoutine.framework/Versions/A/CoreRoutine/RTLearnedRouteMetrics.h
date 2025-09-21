@class NSDate;

@interface RTLearnedRouteMetrics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long allRoutesCountForThisODPair;
@property (readonly, nonatomic) unsigned long long allTraversalCountBetweenThisODPair;
@property (readonly, nonatomic) unsigned long long routeTraversalCount;
@property (readonly, nonatomic) unsigned long long routeTraversalCountOnTravelDayOfWeek;
@property (readonly, nonatomic) unsigned long long routeTravelCountOnTravelDayOfWeekHourOfDay;
@property (readonly, nonatomic) NSDate *lastTravelledDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAllRoutesCountForThisODPair:(unsigned long long)a0 allTraversalCountBetweenThisODPair:(unsigned long long)a1 routeTraversalCount:(unsigned long long)a2 routeTraversalCountOnTravelDayOfWeek:(unsigned long long)a3 routeTravelCountOnTravelDayOfWeekHourOfDay:(unsigned long long)a4 lastTravelledDate:(id)a5;

@end
