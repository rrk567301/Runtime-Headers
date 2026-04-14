@interface ATXPrivacyReset : NSObject {
    id _resetPrivacyWarningsNotificationToken;
}

+ (id)sharedInstance;

- (void)_removeAllBlendingUICaches;
- (void)_registerForResetPrivacyWarningsNotification;
- (id)_placeholderPath;
- (void)_writeDeletionPlaceholder;
- (BOOL)_placeholderExists;
- (void)_handlePrivacyResetNotification;
- (void).cxx_destruct;
- (void)_removeAllAppActionData;
- (id)init;
- (void)dealloc;

@end
