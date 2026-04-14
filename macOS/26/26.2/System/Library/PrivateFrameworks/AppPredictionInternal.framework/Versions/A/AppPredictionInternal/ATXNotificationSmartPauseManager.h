@class NSArray, ATXNotificationAndSuggestionDatastore, NSDate, ATXNotificationManagementMAConstants;

@interface ATXNotificationSmartPauseManager : NSObject {
    NSArray *_currentSuggestions;
    NSDate *_lastUpdatedDate;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}

- (id)activeSuggestions;
- (id)_queryResultIdentifierForBundleId:(id)a0 threadId:(id)a1;
- (id)initWithNotificationAndSuggestionDataStore:(id)a0;
- (void).cxx_destruct;
- (id)_dictionaryForQueryResults:(id)a0;
- (id)_proposeSmartPauseForNotification:(id)a0 threadData:(id)a1 bundleData:(id)a2;
- (id)init;
- (id)currentSuggestionsGivenCandiateNotifications:(id)a0;

@end
