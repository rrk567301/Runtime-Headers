@class ATXNotificationAndSuggestionDatastore, ATXNotificationManagementMAConstants;
@protocol ATXNotificationSettingsReaderProtocol;

@interface ATXSendToDigestManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
    id<ATXNotificationSettingsReaderProtocol> _notificationSettingsReader;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}

- (id)initWithDataStore:(id)a0;
- (id)init;
- (id)currentSuggestionsGivenCandiateNotifications:(id)a0;
- (id)activeSuggestions;
- (BOOL)bundleIdEligibleForSendToDigestSuggestions:(id)a0;
- (void).cxx_destruct;
- (id)_proposeSendToDigestForNotification:(id)a0 bundleData:(id)a1;

@end
