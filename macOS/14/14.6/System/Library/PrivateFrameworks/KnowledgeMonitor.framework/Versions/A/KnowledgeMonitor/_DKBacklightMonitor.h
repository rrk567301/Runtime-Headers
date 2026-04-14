@class BMSource;

@interface _DKBacklightMonitor : _DKMonitor {
    int notifyToken;
    BMSource *_source;
}

+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithState:(id)a0;
+ (BOOL)indicatesScreenOnWithNotificationState:(id)a0;
+ (void)setIsBacklit:(BOOL)a0;
+ (BOOL)shouldMergeUnchangedEvents;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)synchronouslyReflectCurrentValue;
- (void)obtainCurrentValue;

@end
