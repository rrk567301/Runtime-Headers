@class NSDictionary;

@interface ATXSenderImportanceSuggestionThreshold : NSObject {
    NSDictionary *_senderImportanceSuggestionThreshold;
}

- (void).cxx_destruct;
- (id)init;
- (double)mailSenderImportanceThreshold;
- (double)messageSenderImportanceThreshold;
- (double)notificationSenderImportanceThreshold;

@end
