@class NSString;

@interface PLChangeHandlingNotificationEvent : PFAbstractStateCaptureEvent

@property long long kind;
@property (readonly) NSString *eventDescription;
@property double notificationPostTimestamp;
@property long long notificationType;
@property char didSuspendLowPriority;
@property double throttleInterval;
@property char wasObserving;
@property void *notificationBlock;

- (id)description;
- (void)reset;
- (void)startBeginObserving;
- (void)startEndObserving;
- (void)startPostNotification;
- (void)startResumeLowPriority;

@end
