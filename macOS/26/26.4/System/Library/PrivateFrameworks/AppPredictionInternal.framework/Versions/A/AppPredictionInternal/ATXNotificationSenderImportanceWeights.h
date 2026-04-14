@class NSDictionary;

@interface ATXNotificationSenderImportanceWeights : NSObject {
    NSDictionary *_notificationSenderImportanceWeights;
}

- (void).cxx_destruct;
- (id)init;
- (double)interactedWithNotificationToday;
- (double)frequencyOfInteractionWithNotification;
- (double)speedOfResponseToNotification;

@end
