@class NSString, ATXDNDModeConfigurationClient, UNNotificationSettingsCenter;

@interface ATXNotificationSettingsReader : NSObject <ATXNotificationSettingsReaderProtocol> {
    ATXDNDModeConfigurationClient *_modeConfigClient;
    UNNotificationSettingsCenter *_notificationSettingsCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)notificationDigestDeliveryTimes;
- (id)allConfiguredDigestApps;
- (char)appIsOnAllowList:(id)a0 dndModeUUID:(id)a1;
- (char)appIsOnDenyList:(id)a0 dndModeUUID:(id)a1;
- (unsigned long long)applicationConfigurationTypeForDNDModeUUID:(id)a0 success:(char *)a1;
- (char)contactIsOnAllowList:(id)a0 dndModeUUID:(id)a1;
- (char)contactIsOnDenyList:(id)a0 dndModeUUID:(id)a1;
- (char)digestSetupComplete;
- (char)doesAppAllowMessageBreakthrough:(id)a0;
- (char)doesAppSendNotificationsToDigest:(id)a0;
- (id)initWithModeConfigurationClient:(id)a0 notificationSettingsCenter:(id)a1;
- (id)modeConfiguration:(id)a0;
- (id)numConfiguredModes;
- (unsigned long long)senderConfigurationTypeForDNDModeUUID:(id)a0 success:(char *)a1;

@end
