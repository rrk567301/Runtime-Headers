@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAnalyticsLogger : NSObject <CNDonationAnalyticsLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSkipDuplicateAnalysis:(id)a0;
- (void)didPerformAnalysis;
- (void)didReportAnalytics;
- (void)willReportAnalytics;
- (void)analysisServiceCriteria:(id)a0;
- (void)willStartAnalysis;
- (void).cxx_destruct;
- (void)noAnalysisToSubmitForEvent:(id)a0;
- (void)analysisServiceCheckingIn;
- (void)noAnalyzerAvailable;
- (id)init;

@end
