@interface ATXPrivacyReset : NSObject {
    id _resetPrivacyWarningsNotificationToken;
}

+ (id)sharedInstance;

- (void)_removeAllAppActionData;
- (BOOL)_placeholderExists;
- (void)_handlePrivacyResetNotification;
- (id)_placeholderPath;
- (void)_registerForResetPrivacyWarningsNotification;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_writeDeletionPlaceholder;
- (void)_removeAllBlendingUICaches;

@end
