@class NSDictionary, NSMutableDictionary;

@interface CSBundleCompletenessAggregator : NSObject {
    NSMutableDictionary *_donationProgresByBundle;
    NSMutableDictionary *_pipelineReportsByBundle;
    NSDictionary *_cachedImputedBundleWeights;
}

- (void).cxx_destruct;
- (id)allBundleIDs;
- (id)combinedScoreForBundle:(id)a0;
- (id)donationCompletenessForBundle:(id)a0;
- (id)donationProgressForBundle:(id)a0;
- (id)initWithDonationProgressQueryResults:(id)a0 pipelineReports:(id)a1;
- (id)overallPipelineReportAcrossAllBundles;
- (id)pipelineReportForBundle:(id)a0;
- (id)weightForBundle:(id)a0;

@end
