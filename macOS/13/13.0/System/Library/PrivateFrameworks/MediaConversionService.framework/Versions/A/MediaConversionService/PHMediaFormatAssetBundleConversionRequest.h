@class NSArray;

@interface PHMediaFormatAssetBundleConversionRequest : PHMediaFormatConversionCompositeRequest

@property (retain) NSArray *subrequests;

- (void).cxx_destruct;
- (id)outputFileType;
- (BOOL)prepareWithError:(id *)a0;
- (id)outputPathExtension;
- (BOOL)requiresMetadataChanges;
- (BOOL)requiresFormatConversion;
- (void)enqueueSubrequestsOnConversionManager:(id)a0;
- (void)enumerateSubrequests:(id /* block */)a0;
- (void)postProcessSuccessfulCompositeRequest;

@end
