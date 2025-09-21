@class NSString;

@interface RTUserCurationMetrics : RTMetric <RTMetricProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)collectMetricsForAppliedUserCuration:(id)a0 curatedVisit:(id)a1 learnedLocationStore:(id)a2 distanceCalculator:(id)a3 error:(id *)a4;
+ (BOOL)collectMetricsForSubmittedUserCuration:(id)a0 submissionResult:(unsigned long long)a1;
+ (BOOL)collectUserCurationCountMetricsWithUserCurationStore:(id)a0 error:(id *)a1;


@end
