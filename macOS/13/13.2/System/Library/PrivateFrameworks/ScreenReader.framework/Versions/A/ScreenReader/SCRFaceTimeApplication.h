@interface SCRFaceTimeApplication : SCRApplication

- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)moveToElement:(id)a0;
- (void)_moveFocusedApplicationToNotificationCenter;
- (BOOL)isFaceTimeApplication;
- (void)_queueMoveFocusedApplicationToNotificationCenterIfNeeded;

@end
