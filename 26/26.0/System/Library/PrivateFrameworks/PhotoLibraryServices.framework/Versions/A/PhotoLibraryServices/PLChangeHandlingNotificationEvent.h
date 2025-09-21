@class NSString;

@interface PLChangeHandlingNotificationEvent : PFAbstractStateCaptureEvent

@property long long kind;
@property (readonly) NSString *eventDescription;
@property double notificationPostTimestamp;
@property long long notificationType;
@property BOOL didSuspendLowPriority;
@property double throttleInterval;
@property BOOL wasObserving;
@property void *notificationBlock;

- (void)reset;
- (id)description;
- (void)startBeginObserving;
- (void)startEndObserving;
- (void)startPostNotification;
- (void)startResumeLowPriority;

@end
