@interface PHMediaFormatConversionCompositeRequest : PHMediaFormatConversionRequest

- (void)setupProgress;
- (BOOL)isCompositeRequest;
- (void)didPreflightSubrequest:(id)a0;
- (BOOL)requiresFormatConversion;
- (BOOL)requiresLocationMetadataChange;
- (BOOL)requiresCreationDateMetadataChange;
- (BOOL)requiresCaptionMetadataChange;
- (BOOL)requiresAccessibilityDescriptionMetadataChange;
- (void)preflightWithConversionManager:(id)a0;
- (void)didFinishProcessing;
- (void)enumerateSubrequests:(id /* block */)a0;
- (void)postProcessSuccessfulCompositeRequest;
- (BOOL)areAllSubrequestsPreflighted;
- (id)compositeRequestCommonInitWithError:(id *)a0;
- (void)enqueueSubrequestsOnConversionManager:(id)a0;
- (void)propagateRequestOptionsToSubrequests;

@end
