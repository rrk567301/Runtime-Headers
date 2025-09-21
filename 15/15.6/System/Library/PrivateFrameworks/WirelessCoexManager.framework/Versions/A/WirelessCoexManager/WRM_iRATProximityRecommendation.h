@class WRM_iRATProximityRecommendationLogging;

@interface WRM_iRATProximityRecommendation : NSObject

@property (nonatomic) int RecommendationType;
@property (nonatomic) char linkRecommendationIsValid;
@property (nonatomic) char linkIsRecommended;
@property (retain, nonatomic) WRM_iRATProximityRecommendationLogging *metrics;

- (void)dealloc;
- (id)init;

@end
