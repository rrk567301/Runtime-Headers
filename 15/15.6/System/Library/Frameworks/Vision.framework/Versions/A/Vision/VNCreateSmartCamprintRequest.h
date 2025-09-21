@class NSArray;

@interface VNCreateSmartCamprintRequest : VNImageBasedRequest

@property (nonatomic) char returnAllResults;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;

- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (char)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (char)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
