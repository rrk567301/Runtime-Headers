@class ATXNotificationAndSuggestionDatastore, ATXNotificationManagementMAConstants;
@protocol ATXNotificationSettingsReaderProtocol;

@interface ATXSendToDigestManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
    id<ATXNotificationSettingsReaderProtocol> _notificationSettingsReader;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}

- (id)initWithDataStore:(id)a0;
- (id)_proposeSendToDigestForNotification:(id)a0 bundleData:(id)a1;
- (id)currentSuggestionsGivenCandiateNotifications:(id)a0;
- (id)init;
- (id)activeSuggestions;
- (BOOL)bundleIdEligibleForSendToDigestSuggestions:(id)a0;
- (void).cxx_destruct;

@end
