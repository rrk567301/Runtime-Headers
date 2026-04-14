@class NSString;

@interface RTUserCurationMetrics : RTMetric <RTMetricProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)collectMetricsForAppliedLabel:(id)a0 curatedVisit:(id)a1 learnedLocationStore:(id)a2 distanceCalculator:(id)a3 applicationResult:(unsigned long long)a4 error:(id *)a5;
+ (BOOL)collectMetricsForSubmittedUserCuration:(id)a0 submissionResult:(unsigned long long)a1;
+ (BOOL)collectUserCurationCountMetricsWithUserCurationStore:(id)a0 error:(id *)a1;


@end
