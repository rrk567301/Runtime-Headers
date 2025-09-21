@protocol WBSUnifiedBarAnalyticsRecorderDelegate;

@interface WBSUnifiedBarAnalyticsRecorder : NSObject

@property (weak, nonatomic) id<WBSUnifiedBarAnalyticsRecorderDelegate> delegate;

- (void)_reportAnalytics;
- (void)schedulePeriodicReport;
- (void).cxx_destruct;

@end
