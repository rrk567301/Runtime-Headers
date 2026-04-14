@class ATXNotificationAndSuggestionDatastore, ATXNotificationManagementMAConstants;
@protocol ATXNotificationSettingsReaderProtocol;

@interface ATXSendToDigestManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
    id<ATXNotificationSettingsReaderProtocol> _notificationSettingsReader;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}

- (id)activeSuggestions;
- (id)_proposeSendToDigestForNotification:(id)a0 bundleData:(id)a1;
- (BOOL)bundleIdEligibleForSendToDigestSuggestions:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0;
- (id)init;
- (id)currentSuggestionsGivenCandiateNotifications:(id)a0;

@end
