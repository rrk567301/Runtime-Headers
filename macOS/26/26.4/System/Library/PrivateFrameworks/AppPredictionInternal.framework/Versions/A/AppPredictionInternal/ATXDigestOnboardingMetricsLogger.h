@class ATXDigestOnboardingLoggingBiomeStream;

@interface ATXDigestOnboardingMetricsLogger : NSObject {
    ATXDigestOnboardingLoggingBiomeStream *_digestOnboardingLoggingBiomeStream;
}

- (void).cxx_destruct;
- (id)init;
- (id)digestOnboardingBookmark;
- (id)initWithDigestOnboardingLoggingBiomeStream:(id)a0;
- (void)logDigestOnboardingMetrics;
- (void)logDigestOnboardingMetricsWithXPCActivity:(id)a0;
- (double)minutesAfterMidnight:(id)a0;
- (void)writeBookmarkToFile:(id)a0;

@end
