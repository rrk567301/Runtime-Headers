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

- (unsigned long long)currentMode;
- (id)initWithDataStore:(id)a0 suggestionBiomeStream:(id)a1;
- (void)_activeSuggestionsWithReply:(id /* block */)a0;
- (void)logSuggestionsToBiome:(id)a0;
- (BOOL)shouldShowSuggestion:(id)a0 withFeedback:(id)a1;
- (id)filteredSuggestionsBasedOnFeedback:(id)a0;
- (id)maxOneSuggestionFromSuggestions:(id)a0;
- (void).cxx_destruct;
- (id)currentActiveSuggestions;
- (id)deduplicatedSuggestions:(id)a0;
- (unsigned long long)getScoreForSuggestion:(id)a0;
- (id)init;
- (BOOL)digestHasBeenShownEnoughTimes;
- (void)activeSuggestionsWithReply:(id /* block */)a0;

@end
