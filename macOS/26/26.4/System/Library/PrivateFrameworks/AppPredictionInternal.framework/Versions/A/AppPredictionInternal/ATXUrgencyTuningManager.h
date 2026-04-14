@class ATXNotificationAndSuggestionDatastore, ATXNotificationManagementMAConstants;

@interface ATXUrgencyTuningManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}

- (id)urgencyTuningSuggestion:(id)a0 uuid:(id)a1 engagementStatus:(id)a2;
- (id)initWithDataStore:(id)a0;
- (void).cxx_destruct;
- (id)activeSuggestions;
- (id)init;

@end
