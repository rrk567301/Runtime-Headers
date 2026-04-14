@class ATXNotificationAndSuggestionDatastore;

@interface ATXTurnOffNotificationsForAppSuggestionManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
}

- (id)initWithDataStore:(id)a0;
- (id)init;
- (id)activeSuggestions;
- (void).cxx_destruct;

@end
