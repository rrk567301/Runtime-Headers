@class ATXNotificationAndSuggestionDatastore, ATXNotificationManagementMAConstants;
@protocol ATXNotificationSettingsReaderProtocol;

@interface ATXSendMessagesToDigestManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
    id<ATXNotificationSettingsReaderProtocol> _notificationSettingsReader;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}

- (id)initWithDataStore:(id)a0;
- (id)sendMessagesToDigestSuggestion:(id)a0 uuid:(id)a1 engagementStatus:(id)a2;
- (id)init;
- (id)activeSuggestions;
- (void).cxx_destruct;
- (BOOL)bundleIdIsEligibleForSendMessagesToDigestSuggestions:(id)a0;

@end
