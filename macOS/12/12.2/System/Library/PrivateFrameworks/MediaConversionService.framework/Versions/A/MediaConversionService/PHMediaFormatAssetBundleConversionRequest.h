@class NSArray;

@interface PHMediaFormatAssetBundleConversionRequest : PHMediaFormatConversionCompositeRequest

@property (retain) NSArray *subrequests;

- (void).cxx_destruct;
- (id)outputFileType;
- (BOOL)prepareWithError:(id *)a0;
- (id)outputPathExtension;
- (BOOL)requiresFormatConversion;
- (BOOL)requiresMetadataChanges;
- (void)enqueueSubrequestsOnConversionManager:(id)a0;
- (void)enumerateSubrequests:(id /* block */)a0;
- (void)postProcessSuccessfulCompositeRequest;

@end
