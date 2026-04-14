@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAnalyticsLogger : NSObject <CNDonationAnalyticsLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSkipDuplicateAnalysis:(id)a0;
- (void)analysisServiceCriteria:(id)a0;
- (void)willReportAnalytics;
- (void)noAnalyzerAvailable;
- (void)didReportAnalytics;
- (void)didPerformAnalysis;
- (void)willStartAnalysis;
- (void)noAnalysisToSubmitForEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)analysisServiceCheckingIn;

@end
