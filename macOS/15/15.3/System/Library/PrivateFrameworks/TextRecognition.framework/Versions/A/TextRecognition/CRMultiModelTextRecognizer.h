@class NSString, CRTextOrientationCorrector, CRRecognizerConfiguration, NSDictionary, CRRecognitionPostProcessor, CRPerformanceStatistics, CRMultiModelTextFeatureSplitter;

@interface CRMultiModelTextRecognizer : NSObject <CRTextRecognizer>

@property BOOL shouldCancel;
@property (retain) CRPerformanceStatistics *groupingStatsStorage;
@property (retain) CRPerformanceStatistics *orientationStats;
@property (retain) CRTextOrientationCorrector *orientationCorrector;
@property BOOL keepAllResourcesLoadedWhenNotInUse;
@property (readonly) CRPerformanceStatistics *inferenceStats;
@property (readonly) CRPerformanceStatistics *decodingStats;
@property (readonly) CRPerformanceStatistics *groupingStats;
@property (retain) CRRecognizerConfiguration *configuration;
@property (retain) NSDictionary *configurationOptions;
@property (retain) CRMultiModelTextFeatureSplitter *textFeatureSplitter;
@property (retain) CRRecognitionPostProcessor *recognitionPostProcessor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recognizerForRevision:(unsigned long long)a0 imageReaderOptions:(id)a1 error:(id *)a2;
+ (id)sortedSupportedLanguages:(id)a0 byPreferredLanguages:(id)a1;

- (void).cxx_destruct;
- (BOOL)_isCancelled;
- (void)cancel;
- (id)initWithConfigurationOptions:(id)a0;
- (id)identifierForTextRegion:(id)a0;
- (BOOL)preheatWithError:(id *)a0;
- (id)pruneSortAndGroupRegions:(id)a0 recognitionResult:(id)a1;
- (id)recognizeInImage:(id)a0 lineRegions:(id)a1 progressHandler:(id /* block */)a2 error:(id *)a3;
- (id)recognizerForIdentifier:(id)a0;
- (id)sortAndGroupPrunedRegions:(id)a0 tableGroups:(id)a1;
- (id)thresholdsForTextRegion:(id)a0 withLocale:(id)a1;
- (id)titleParametersForTextRegion:(id)a0;

@end
