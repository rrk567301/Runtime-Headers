@class NSArray;

@interface PHMediaFormatAssetBundleConversionRequest : PHMediaFormatConversionCompositeRequest

@property (retain) NSArray *subrequests;

- (BOOL)prepareWithError:(id *)a0;
- (void).cxx_destruct;
- (id)outputFileType;
- (void)enqueueSubrequestsOnConversionManager:(id)a0;
- (void)enumerateSubrequests:(id /* block */)a0;
- (id)outputPathExtension;
- (void)postProcessSuccessfulCompositeRequest;
- (BOOL)requiresFormatConversion;
- (BOOL)requiresMetadataChanges;

@end
