@class CRPerformanceStatistics;

@interface CRSingleLocaleTextRecognizer : CRMultiModelTextRecognizer

@property (nonatomic, readonly) void /* unknown type, empty encoding */ neuralRecognizer;
@property (nonatomic, readonly) CRPerformanceStatistics *inferenceStats;
@property (nonatomic, readonly) CRPerformanceStatistics *decodingStats;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithConfigurationOptions:(id)a0;
- (id)identifierForTextRegion:(id)a0;
- (id)initWithImageReaderOptions:(id)a0 error:(id *)a1;
- (id)recognizerForIdentifier:(id)a0;

@end
