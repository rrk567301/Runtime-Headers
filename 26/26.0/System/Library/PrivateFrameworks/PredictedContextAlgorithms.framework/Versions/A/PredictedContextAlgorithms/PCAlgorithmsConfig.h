@class PCVisitHistoryPredictorConfig, PCDynamicsWeightingConfig;

@interface PCAlgorithmsConfig : NSObject

@property (retain, nonatomic) PCVisitHistoryPredictorConfig *visitHistoryConfig;
@property (retain, nonatomic) PCDynamicsWeightingConfig *dynamicsConfig;
@property (nonatomic) BOOL useVisitHistoryPredictor;
@property (nonatomic) BOOL useCalendarVisitPredictor;
@property (nonatomic) BOOL useScheduledTravelPredictor;
@property (nonatomic) BOOL useMapsViewedPlacesPredictor;
@property (nonatomic) BOOL useHomeKitPredictor;
@property (nonatomic) BOOL useProbabilityModifier;
@property (nonatomic) BOOL useProbabilityCuller;
@property (nonatomic) BOOL useParkedCarLocationPredictor;
@property (nonatomic) BOOL usePropagatedPosition;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
