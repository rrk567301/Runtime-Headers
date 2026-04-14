@class NSString, UNNotificationRequest;

@interface HKSHSleepApneaNotificationInteractedAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    UNNotificationRequest *_request;
    NSString *_actionIdentifier;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)_notificationAction;
- (id)_notificationType;
- (id)initWithNotificationRequest:(id)a0 actionIdentifier:(id)a1;

@end
