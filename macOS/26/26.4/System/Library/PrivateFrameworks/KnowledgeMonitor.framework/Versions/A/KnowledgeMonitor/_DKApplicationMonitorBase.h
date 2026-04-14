@class BMSource, NSString, BMAppInFocus;

@interface _DKApplicationMonitorBase : _DKMonitor {
    NSString *_lastFocalApplicationForContext;
    BMAppInFocus *_currentAppInFocusEvent;
}

@property (retain) BMSource *appInFocusSource;

+ (id)eventStream;
+ (id)entitlements;

- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)platformSpecificStop;
- (void)platformSpecificStart;
- (void)deactivate;
- (void)obtainCurrentValue;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)dealloc;
- (id)_eventWithTimestamp:(id)a0 bundleIdentifier:(id)a1 launchReason:(id)a2 shortVersionString:(id)a3 exactBundleVersion:(id)a4;
- (BOOL)lookupApplication:(id)a0 shortVersionString:(id *)a1 exactBundleVersion:(id *)a2;
- (void)updateBiomeAppInFocusWithStopEventAtTimestamp:(id)a0 reason:(id)a1;
- (void)updateBiomeWithAppInFocusStartEvent:(id)a0;
- (void)updateContextStoreWithFocalApplication:(id)a0 launchReason:(id)a1;

@end
