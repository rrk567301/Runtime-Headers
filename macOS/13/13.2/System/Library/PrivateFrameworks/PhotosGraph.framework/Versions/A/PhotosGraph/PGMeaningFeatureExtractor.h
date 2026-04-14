@interface PGMeaningFeatureExtractor : PGGraphFeatureExtractor

+ (id)name;

- (id)initWithError:(id *)a0;
- (id)prefix;
- (id)initWithVersion:(long long)a0 error:(id *)a1;
- (id)labelsForVersion:(long long)a0;
- (id)labelProcessingForVersion:(long long)a0 label:(id)a1;

@end
