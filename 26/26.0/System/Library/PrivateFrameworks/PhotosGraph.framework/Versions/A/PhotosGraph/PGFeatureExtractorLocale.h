@class NSLocale;

@interface PGFeatureExtractorLocale : PGFeatureExtractor

@property (retain, nonatomic) NSLocale *currentLocale;

- (id)featureNames;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
