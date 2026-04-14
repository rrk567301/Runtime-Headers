@class ATXModeDimensionSet, NSMutableDictionary, ATXAppInFocusEventSession, NSMutableArray;

@interface ATXInterruptedAppSessionAccumulator : NSObject {
    ATXAppInFocusEventSession *_previousLaunch;
    ATXModeDimensionSet *_previousDimensions;
    NSMutableArray *_appSessions;
    NSMutableDictionary *_summaryMetrics;
    NSMutableDictionary *_recentNotifications;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleNotificationEvent:(id)a0;
- (void)logToCoreAnalytics;
- (unsigned long long)numberOfInterruptingAppSessions;
- (id)_getSummaryMetricForDimensions:(id)a0;
- (BOOL)_doesLaunchInterruptPreviousLaunch:(id)a0;
- (id)countedSetContainingInterruptingAppBundleIds;
- (void)handleEndOfStream;
- (void)handleNextAppLaunch:(id)a0 dimensionSet:(id)a1;

@end
