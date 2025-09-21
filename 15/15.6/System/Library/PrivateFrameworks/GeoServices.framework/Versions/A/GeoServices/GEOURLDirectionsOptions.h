@class NSNumber;

@interface GEOURLDirectionsOptions : NSObject

@property (readonly, nonatomic) char avoidTolls;
@property (readonly, nonatomic) char avoidHighways;
@property (readonly, nonatomic) char avoidHills;
@property (readonly, nonatomic) char avoidBusyRoads;
@property (readonly, nonatomic) char avoidStairs;
@property (readonly, nonatomic) char transitPreferBus;
@property (readonly, nonatomic) char transitPreferSubway;
@property (readonly, nonatomic) char transitPreferCommuter;
@property (readonly, nonatomic) char transitPreferFerry;
@property (readonly, nonatomic) char hasDrivingPreferences;
@property (readonly, nonatomic) char hasWalkingOrCyclingPreferences;
@property (readonly, nonatomic) char hasTransitPreferences;
@property (copy, nonatomic) NSNumber *navigationAutoLaunchDelay;

- (void).cxx_destruct;
- (id)avoidOptionsString;
- (void)setAvoidOptions:(id)a0;
- (void)setTransitOptions:(id)a0;
- (id)transitOptionsString;

@end
