@class NSArray;

@interface GEOTransitRouteBuilderOutput : GEORouteBuilderOutput

@property (readonly, nonatomic) char isWalkingOnlyRoute;
@property (readonly, nonatomic) NSArray *rideSelections;
@property (readonly, nonatomic) NSArray *sectionOptions;

- (void).cxx_destruct;
- (void)setIsWalkingOnlyRoute:(char)a0;
- (void)setRideSelections:(id)a0;
- (void)setSectionOptions:(id)a0;

@end
