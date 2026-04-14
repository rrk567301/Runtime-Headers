@class ATXNotificationAndSuggestionDatastore;

@interface ATXTurnOffNotificationsForAppSuggestionManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
}

- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0;
- (id)init;
- (id)activeSuggestions;

@end
