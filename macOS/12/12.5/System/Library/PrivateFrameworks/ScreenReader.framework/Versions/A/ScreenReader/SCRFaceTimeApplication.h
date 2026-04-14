@interface SCRFaceTimeApplication : SCRApplication

- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)_queueMoveFocusedApplicationToNotificationCenterIfNeeded;
- (void)moveToElement:(id)a0;
- (void)_moveFocusedApplicationToNotificationCenter;
- (BOOL)isFaceTimeApplication;

@end
