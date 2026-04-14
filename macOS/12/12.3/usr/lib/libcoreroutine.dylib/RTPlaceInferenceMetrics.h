@class NSMutableDictionary, NSDate;

@interface RTPlaceInferenceMetrics : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)description;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0 placeInferenceOptions:(id)a1;
- (void)setPlaceInferences:(id)a0;
- (void)setTopPersonalizedLabelsInferredMapItems:(id)a0 topBluePOIInferredMapItem:(id)a1;
- (void)submitMetrics;
- (void)setPlaceInferenceOptions:(id)a0;
- (void)setTopPlaceInference:(id)a0;
- (double)entropyOfConflictFromTopResults:(id)a0;

@end
