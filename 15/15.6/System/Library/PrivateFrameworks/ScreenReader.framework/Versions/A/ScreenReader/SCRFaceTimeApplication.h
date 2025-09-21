@interface SCRFaceTimeApplication : SCRApplication

- (void)_moveFocusedApplicationToNotificationCenter;
- (void)_queueMoveFocusedApplicationToNotificationCenterIfNeeded;
- (char)focusInto:(id)a0 event:(id)a1;
- (char)isFaceTimeApplication;
- (void)moveToElement:(id)a0;

@end
