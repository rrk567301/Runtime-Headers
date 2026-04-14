@class ATXNotificationAndSuggestionDatastore;

@interface ATXTurnOffNotificationsForAppSuggestionManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
}

- (id)activeSuggestions;
- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0;
- (id)init;

@end
