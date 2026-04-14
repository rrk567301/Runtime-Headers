@interface ATXPrivacyReset : NSObject {
    id _resetPrivacyWarningsNotificationToken;
}

+ (id)sharedInstance;

- (void)_writeDeletionPlaceholder;
- (void)_handlePrivacyResetNotification;
- (void)_removeAllBlendingUICaches;
- (void)dealloc;
- (void)_registerForResetPrivacyWarningsNotification;
- (BOOL)_placeholderExists;
- (id)init;
- (id)_placeholderPath;
- (void)_removeAllAppActionData;
- (void).cxx_destruct;

@end
