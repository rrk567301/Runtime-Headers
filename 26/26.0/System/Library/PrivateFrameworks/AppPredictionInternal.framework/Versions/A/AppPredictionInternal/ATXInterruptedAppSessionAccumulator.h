@class ATXModeDimensionSet, NSMutableDictionary, ATXAppInFocusEventSession, NSMutableArray;

@interface ATXInterruptedAppSessionAccumulator : NSObject {
    ATXAppInFocusEventSession *_previousLaunch;
    ATXModeDimensionSet *_previousDimensions;
    NSMutableArray *_appSessions;
    NSMutableDictionary *_summaryMetrics;
    NSMutableDictionary *_recentNotifications;
}

- (id)init;
- (void)handleNotificationEvent:(id)a0;
- (void).cxx_destruct;
- (void)logToCoreAnalytics;
- (id)_getSummaryMetricForDimensions:(id)a0;
- (unsigned long long)numberOfInterruptingAppSessions;
- (BOOL)_doesLaunchInterruptPreviousLaunch:(id)a0;
- (id)countedSetContainingInterruptingAppBundleIds;
- (void)handleEndOfStream;
- (void)handleNextAppLaunch:(id)a0 dimensionSet:(id)a1;

@end
