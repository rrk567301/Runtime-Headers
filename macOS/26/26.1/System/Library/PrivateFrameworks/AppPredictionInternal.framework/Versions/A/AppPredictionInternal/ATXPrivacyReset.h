@interface ATXPrivacyReset : NSObject {
    id _resetPrivacyWarningsNotificationToken;
}

+ (id)sharedInstance;

- (void)_registerForResetPrivacyWarningsNotification;
- (void)_removeAllAppActionData;
- (void)_handlePrivacyResetNotification;
- (id)_placeholderPath;
- (void)dealloc;
- (void)_removeAllBlendingUICaches;
- (void).cxx_destruct;
- (BOOL)_placeholderExists;
- (void)_writeDeletionPlaceholder;
- (id)init;

@end
