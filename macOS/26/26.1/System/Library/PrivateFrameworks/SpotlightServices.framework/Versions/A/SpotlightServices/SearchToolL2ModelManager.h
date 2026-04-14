@class NSMutableDictionary, NSCondition;

@interface SearchToolL2ModelManager : NSObject {
    NSCondition *_condition;
}

@property BOOL loaded;
@property (retain, nonatomic) NSMutableDictionary *modelConfigs;

- (void).cxx_destruct;
- (id)init;
- (id)predict:(id)a0;
- (BOOL)loadModel;
- (void)unloadModel;
- (void)extractFeatures:(id)a0 providersPerBundle:(id)a1 indicesPerBundle:(id)a2;
- (id)getModelName:(unsigned long long)a0;
- (double)getThreshold:(unsigned long long)a0;
- (BOOL)loadDictionary;
- (void)predictProcessedFeatures:(id)a0 indicesPerBundle:(id)a1 allResults:(id)a2;

@end
