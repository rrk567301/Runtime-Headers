@class BMBacklightStream;

@interface _DKBacklightMonitor : _DKMonitor {
    int notifyToken;
    BMBacklightStream *_backlightStream;
}

+ (id)entitlements;
+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (BOOL)indicatesScreenOnWithNotificationState:(id)a0;
+ (void)setIsBacklit:(BOOL)a0;
+ (id)_eventWithState:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)synchronouslyReflectCurrentValue;
- (void)obtainCurrentValue;

@end
