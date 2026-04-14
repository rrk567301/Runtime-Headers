@class NSString, ATXDNDModeConfigurationClient, UNNotificationSettingsCenter;

@interface ATXNotificationSettingsReader : NSObject <ATXNotificationSettingsReaderProtocol> {
    ATXDNDModeConfigurationClient *_modeConfigClient;
    UNNotificationSettingsCenter *_notificationSettingsCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)appIsOnAllowList:(id)a0 dndModeUUID:(id)a1;
- (unsigned long long)senderConfigurationTypeForDNDModeUUID:(id)a0 success:(BOOL *)a1;
- (id)areHighlightsEnabled;
- (BOOL)digestSetupComplete;
- (BOOL)doesAppSendNotificationsToDigest:(id)a0;
- (id)areSummariesEnabled;
- (id)notificationDigestDeliveryTimes;
- (id)allConfiguredDigestApps;
- (BOOL)contactIsOnDenyList:(id)a0 dndModeUUID:(id)a1;
- (void).cxx_destruct;
- (id)numConfiguredModes;
- (BOOL)doesAppAllowMessageBreakthrough:(id)a0;
- (id)modeConfiguration:(id)a0;
- (BOOL)contactIsOnAllowList:(id)a0 dndModeUUID:(id)a1;
- (BOOL)appIsOnDenyList:(id)a0 dndModeUUID:(id)a1;
- (id)initWithModeConfigurationClient:(id)a0 notificationSettingsCenter:(id)a1;
- (id)init;
- (unsigned long long)applicationConfigurationTypeForDNDModeUUID:(id)a0 success:(BOOL *)a1;

@end
