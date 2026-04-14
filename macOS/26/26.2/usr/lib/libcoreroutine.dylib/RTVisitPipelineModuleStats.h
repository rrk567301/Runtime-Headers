@class NSMutableDictionary, NSDate;

@interface RTVisitPipelineModuleStats : NSObject {
    NSMutableDictionary *_iterationDurations;
    NSMutableDictionary *_iterationLocationCounts;
    NSMutableDictionary *_iterationLocationIntervals;
    NSMutableDictionary *_iterationMaxLocationOutageIntervals;
    NSMutableDictionary *_iterationVistCount;
    NSDate *_startDate;
}

- (void)setVisitCountForVisitCluster:(id)a0 direction:(id)a1;
- (double)cumulativeLocationIntervalForDirection:(id)a0;
- (double)cumulativeProcessingDuration;
- (unsigned long long)cumulativeVisitCountForDirection:(id)a0;
- (unsigned long long)maxLocationCountForDirection:(id)a0;
- (void)setMaxLocationOutageIntervalForVisitCluster:(id)a0 direction:(id)a1;
- (double)maxLocationOutageIntervalForDirection:(id)a0;
- (double)lastMaxLocationOutageIntervalForDirection:(id)a0;
- (double)lastProcessingDuration;
- (void)setLocationIntervalForVisitCluster:(id)a0 direction:(id)a1;
- (unsigned long long)lastLocationCount;
- (void).cxx_destruct;
- (unsigned long long)maxVisitCountForDirection:(id)a0;
- (double)lastLocationIntervalForDirection:(id)a0;
- (id)description;
- (unsigned long long)lastLocationCountForDirection:(id)a0;
- (void)setLocationCountForVisitCluster:(id)a0 direction:(id)a1;
- (void)stopIterationWithVisitClusters:(id)a0;
- (void)startIterationWithVisitClusters:(id)a0;
- (unsigned long long)cumulativeLocationCountForDirection:(id)a0;
- (double)cumulativeMaxLocationOutageIntervalForDirection:(id)a0;
- (id)init;
- (double)maxProcessingDuration;
- (double)maxLocationIntervalForDirection:(id)a0;
- (unsigned long long)lastVisitCountForDirection:(id)a0;

@end
