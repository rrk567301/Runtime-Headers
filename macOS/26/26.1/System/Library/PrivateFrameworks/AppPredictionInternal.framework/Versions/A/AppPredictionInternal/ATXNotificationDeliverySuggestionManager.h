@class ATXTurnOffNotificationsForAppSuggestionManager, ATXNotificationAndSuggestionDatastore, ATXNotificationSuggestionBiomeStream, ATXSendMessagesToDigestManager, ATXSendToDigestManager, ATXNotificationManagementMAConstants, ATXNotificationSmartPauseManager, ATXChinSuggestionThrottlingManager;

@interface ATXNotificationDeliverySuggestionManager : NSObject {
    ATXNotificationSmartPauseManager *_smartPauseManager;
    ATXSendMessagesToDigestManager *_sendMessagesToDigestManager;
    ATXSendToDigestManager *_sendToDigestManager;
    ATXTurnOffNotificationsForAppSuggestionManager *_turnOffNotificationsForAppManager;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationSuggestionBiomeStream *_biomeStream;
    ATXNotificationManagementMAConstants *_constants;
    ATXChinSuggestionThrottlingManager *_throttlingManager;
}

- (void)_activeSuggestionsWithReply:(id /* block */)a0;
- (unsigned long long)getScoreForSuggestion:(id)a0;
- (void)logSuggestionsToBiome:(id)a0;
- (unsigned long long)currentMode;
- (BOOL)digestHasBeenShownEnoughTimes;
- (BOOL)shouldShowSuggestion:(id)a0 withFeedback:(id)a1;
- (void)activeSuggestionsWithReply:(id /* block */)a0;
- (id)currentActiveSuggestions;
- (id)deduplicatedSuggestions:(id)a0;
- (void).cxx_destruct;
- (id)filteredSuggestionsBasedOnFeedback:(id)a0;
- (id)maxOneSuggestionFromSuggestions:(id)a0;
- (id)initWithDataStore:(id)a0 suggestionBiomeStream:(id)a1;
- (id)init;

@end
