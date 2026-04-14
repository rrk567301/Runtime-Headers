@protocol CRKFeatureDataStoreProtocol;

@interface CRKFeatureDataStoreHeuristics_macOS : NSObject

@property (weak, nonatomic) id<CRKFeatureDataStoreProtocol> dataStore;

+ (id)overrideIsForcedByFeature;
+ (id)overrideFeaturesByFeature;

- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0;
- (BOOL)applyIsForcedHeuristicsToFeature:(id)a0 isForced:(BOOL)a1;
- (unsigned long long)applyHeuristicsToFeature:(id)a0 boolType:(unsigned long long)a1;

@end
