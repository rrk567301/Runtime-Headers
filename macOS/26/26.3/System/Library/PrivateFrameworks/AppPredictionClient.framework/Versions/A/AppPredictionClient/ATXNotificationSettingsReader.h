@class NSString, ATXDNDModeConfigurationClient, UNNotificationSettingsCenter;

@interface ATXNotificationSettingsReader : NSObject <ATXNotificationSettingsReaderProtocol> {
    ATXDNDModeConfigurationClient *_modeConfigClient;
    UNNotificationSettingsCenter *_notificationSettingsCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)senderConfigurationTypeForDNDModeUUID:(id)a0 success:(BOOL *)a1;
- (BOOL)doesAppAllowMessageBreakthrough:(id)a0;
- (BOOL)digestSetupComplete;
- (id)areHighlightsEnabled;
- (id)init;
- (id)numConfiguredModes;
- (BOOL)contactIsOnDenyList:(id)a0 dndModeUUID:(id)a1;
- (BOOL)appIsOnAllowList:(id)a0 dndModeUUID:(id)a1;
- (id)notificationDigestDeliveryTimes;
- (BOOL)doesAppSendNotificationsToDigest:(id)a0;
- (BOOL)appIsOnDenyList:(id)a0 dndModeUUID:(id)a1;
- (id)areSummariesEnabled;
- (void).cxx_destruct;
- (id)initWithModeConfigurationClient:(id)a0 notificationSettingsCenter:(id)a1;
- (unsigned long long)applicationConfigurationTypeForDNDModeUUID:(id)a0 success:(BOOL *)a1;
- (id)modeConfiguration:(id)a0;
- (BOOL)contactIsOnAllowList:(id)a0 dndModeUUID:(id)a1;
- (id)allConfiguredDigestApps;

@end
