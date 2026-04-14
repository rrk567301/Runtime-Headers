@protocol WBSUnifiedBarAnalyticsRecorderDelegate;

@interface WBSUnifiedBarAnalyticsRecorder : NSObject

@property (weak, nonatomic) id<WBSUnifiedBarAnalyticsRecorderDelegate> delegate;

- (void)_reportAnalytics;
- (void).cxx_destruct;
- (void)schedulePeriodicReport;

@end
