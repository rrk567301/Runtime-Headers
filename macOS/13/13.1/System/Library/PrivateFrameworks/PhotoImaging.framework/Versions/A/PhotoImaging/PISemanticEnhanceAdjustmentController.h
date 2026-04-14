@class NSArray;

@interface PISemanticEnhanceAdjustmentController : PIAdjustmentController

@property (nonatomic) double intensity;
@property (readonly, nonatomic) long long scene;
@property (readonly, nonatomic) double sceneConfidence;
@property (readonly, copy, nonatomic) NSArray *boundingBoxes;

+ (id)platedFoodSceneLabel;
+ (id)sunriseSunsetSceneLabel;
+ (id)genericLandscapeSceneLabel;
+ (id)intensityKey;
+ (id)sceneLabelKey;
+ (id)sceneConfidenceKey;
+ (id)faceBoundingBoxesKey;
+ (id)boundingBoxesKey;

- (BOOL)isSettingEqual:(id)a0 forKey:(id)a1;
- (void)setScene:(long long)a0 confidence:(double)a1;
- (void)setBoundingBoxesFromObservations:(id)a0 orientation:(long long)a1;
- (void)setFaceBoundingBoxesFromObservations:(id)a0 orientation:(long long)a1;

@end
