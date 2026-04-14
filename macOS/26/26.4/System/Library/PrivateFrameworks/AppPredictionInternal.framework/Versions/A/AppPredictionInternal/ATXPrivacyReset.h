@interface ATXPrivacyReset : NSObject {
    id _resetPrivacyWarningsNotificationToken;
}

+ (id)sharedInstance;

- (void)_removeAllAppActionData;
- (BOOL)_placeholderExists;
- (id)_placeholderPath;
- (void)_registerForResetPrivacyWarningsNotification;
- (void).cxx_destruct;
- (void)_handlePrivacyResetNotification;
- (void)_writeDeletionPlaceholder;
- (id)init;
- (void)_removeAllBlendingUICaches;
- (void)dealloc;

@end
