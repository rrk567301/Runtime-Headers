@interface NSContextMenuTrackingSession : NSMenuTrackingSession

+ (char)allowsKeyMatchingWithoutModifiers;

- (char)_cancelPredictiveTrackingWithEvent:(id)a0;
- (id)_firstContextualImpl;
- (char)_mouseDownEventHandler:(id)a0;
- (void)startMonitoringEvents:(id)a0;
- (void)stopMonitoringEvents;

@end
