@interface NSContextMenuTrackingSession : NSMenuTrackingSession

+ (BOOL)allowsKeyMatchingWithoutModifiers;

- (void)startMonitoringEvents:(id)a0;
- (BOOL)_cancelPredictiveTrackingWithEvent:(id)a0;
- (id)_firstContextualImpl;
- (BOOL)_mouseDownEventHandler:(id)a0;
- (void)stopMonitoringEvents;

@end
