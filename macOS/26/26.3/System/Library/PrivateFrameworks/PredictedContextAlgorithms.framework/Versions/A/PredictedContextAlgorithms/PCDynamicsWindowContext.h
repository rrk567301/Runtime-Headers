@class PCPLocationHistory, PCLocationsWindow;

@interface PCDynamicsWindowContext : NSObject

@property (readonly, nonatomic) PCLocationsWindow *locationWindow;
@property (readonly, nonatomic) PCPLocationHistory *startFix;
@property (readonly, nonatomic) double travelTimeSec;
@property (readonly, nonatomic) double rampWeight;
@property (readonly, nonatomic) double startTime;

- (void).cxx_destruct;
- (id)initWithRawHistory:(id)a0 currentTime:(double)a1 lastVisitExitTime:(double)a2 minTravelTime:(double)a3 fullEffectTime:(double)a4 maxUncertainty:(double)a5;

@end
