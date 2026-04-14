@class NSString, NSMutableDictionary;

@interface PIECompositeScore : NSObject {
    NSString *_name;
    NSMutableDictionary *_scoreComponentMap;
    NSMutableDictionary *_scoreWeightMap;
    double _weightSum;
}

- (void)dealloc;
- (id)init;
- (id)description;
- (id)name;
- (id)initWithName:(id)a0;
- (double)normalizedScore;
- (void)addScoreComponentWithName:(id)a0 value:(double)a1 weight:(double)a2;
- (void)addScoreComponentWithName:(id)a0 value:(long long)a1 weight:(double)a2 rangeMin:(long long)a3 rangeMax:(long long)a4;

@end
