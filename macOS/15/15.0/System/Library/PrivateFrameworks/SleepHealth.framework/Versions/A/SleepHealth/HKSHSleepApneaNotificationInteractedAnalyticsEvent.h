@class NSString, UNNotificationResponse;

@interface HKSHSleepApneaNotificationInteractedAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    UNNotificationResponse *_response;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (void).cxx_destruct;
- (id)_notificationType;
- (id)_notificationAction;
- (id)initWithNotificationResponse:(id)a0;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;

@end
