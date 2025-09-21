@interface PHMediaFormatConversionCompositeRequest : PHMediaFormatConversionRequest

- (void)preflightWithConversionManager:(id)a0;
- (char)areAllSubrequestsPreflighted;
- (id)compositeRequestCommonInitWithError:(id *)a0;
- (void)didFinishProcessing;
- (void)didPreflightSubrequest:(id)a0;
- (void)enqueueSubrequestsOnConversionManager:(id)a0;
- (void)enumerateSubrequests:(id /* block */)a0;
- (char)isCompositeRequest;
- (void)postProcessSuccessfulCompositeRequest;
- (void)propagateRequestOptionsToSubrequests;
- (char)requiresAccessibilityDescriptionMetadataChange;
- (char)requiresCaptionMetadataChange;
- (char)requiresCreationDateMetadataChange;
- (char)requiresFormatConversion;
- (char)requiresLocationMetadataChange;
- (void)setupProgress;

@end
