@class NSString, PCLocationDirectionEstimatorConfig;

@interface PCLocationOnlyDirectionScaleFactorEstimator : NSObject <PCDynamicsScaleFactorEstimator>

@property (retain, nonatomic) PCLocationDirectionEstimatorConfig *cfg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)computeScaleForCandidates:(id)a0 locationHistory:(id)a1 motionActivity:(id)a2 currentLocation:(id)a3 currentTime:(double)a4 lastVisitExitTime:(double)a5 isInTransition:(BOOL)a6;

@end
