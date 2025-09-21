@class NSString, NSArray, NSMutableDictionary;

@interface ATXFakeNotificationSettingsReader : NSObject <ATXNotificationSettingsReaderProtocol> {
    char _defaultIsAppAllowed;
    char _defaultIsContactAllowed;
    NSArray *_digestDeliveryTimes;
    NSMutableDictionary *_entityToIsAllowed;
    NSMutableDictionary *_sendToDigest;
    NSMutableDictionary *_messagesBreakthrough;
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
- (char)appIsOnAllowList:(id)a0 mode:(unsigned long long)a1;
- (char)appIsOnDenyList:(id)a0 dndModeUUID:(id)a1;
- (unsigned long long)applicationConfigurationTypeForDNDModeUUID:(id)a0 success:(char *)a1;
- (char)contactIsOnAllowList:(id)a0 dndModeUUID:(id)a1;
- (char)contactIsOnAllowList:(id)a0 mode:(unsigned long long)a1;
- (char)contactIsOnDenyList:(id)a0 dndModeUUID:(id)a1;
- (char)digestSetupComplete;
- (char)doesAppAllowMessageBreakthrough:(id)a0;
- (char)doesAppSendNotificationsToDigest:(id)a0;
- (id)modeConfiguration:(id)a0;
- (id)numConfiguredModes;
- (unsigned long long)senderConfigurationTypeForDNDModeUUID:(id)a0 success:(char *)a1;
- (void)setDefaultNotificationDigestDeliveryTimes:(id)a0;
- (void)setDefaultReturnValueForAppIsAllowed:(char)a0;
- (void)setDefaultReturnValueForContactIsAllowed:(char)a0;
- (void)setDoMessagesBreakthrough:(id)a0 doesBreakthrough:(char)a1;
- (void)setDoesSendToDigest:(id)a0 doesSend:(char)a1;
- (void)setIsAllowedForEntity:(id)a0 isAllowed:(char)a1;

@end
