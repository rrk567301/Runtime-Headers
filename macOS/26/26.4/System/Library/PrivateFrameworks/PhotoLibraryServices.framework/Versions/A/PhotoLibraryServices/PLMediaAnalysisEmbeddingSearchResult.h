@class NSString, NSNumber;

@interface PLMediaAnalysisEmbeddingSearchResult : NSObject {
    NSNumber *_metricValue;
    long long _metric;
}

@property (readonly, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) NSNumber *distance;
@property (readonly, nonatomic) NSNumber *similarity;

- (void).cxx_destruct;
- (id)initWithAssetUUID:(id)a0 metric:(long long)a1 metricValue:(id)a2;

@end
