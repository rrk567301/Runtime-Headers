@class NSMutableDictionary, NSDate;

@interface RTPlaceInferenceMetrics : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (void)setPlaceInferenceOptions:(id)a0;
- (void)setTopPersonalizedLabelsInferredMapItems:(id)a0 topBluePOIInferredMapItem:(id)a1;
- (void)submitMetrics;
- (id)objectForKey:(id)a0;
- (id)description;
- (void)setPlaceInferences:(id)a0;
- (void)setTopPlaceInference:(id)a0;
- (void).cxx_destruct;
- (double)entropyOfConflictFromTopResults:(id)a0;
- (id)initWithClientIdentifier:(id)a0 placeInferenceOptions:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;

@end
