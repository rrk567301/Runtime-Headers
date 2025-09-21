@protocol CRKFeatureDataStoreProtocol;

@interface CRKFeatureDataStoreHeuristics_MCX : NSObject

@property (weak, nonatomic) id<CRKFeatureDataStoreProtocol> dataStore;

+ (id)overrideFeaturesByFeature;
+ (id)overrideIsForcedByFeature;

- (id)initWithDataStore:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)applyHeuristicsToFeature:(id)a0 boolType:(unsigned long long)a1;
- (BOOL)applyIsForcedHeuristicsToFeature:(id)a0 isForced:(BOOL)a1;

@end
