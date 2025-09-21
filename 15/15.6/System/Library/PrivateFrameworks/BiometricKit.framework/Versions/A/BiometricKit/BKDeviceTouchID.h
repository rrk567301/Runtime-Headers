@interface BKDeviceTouchID : BKDevice

+ (char)deviceAvailableWithFailure:(char *)a0;

- (id)createEnrollOperationWithError:(id *)a0;
- (id)createExtendEnrollTouchIDOperationWithError:(id *)a0;
- (id)createMatchOperationWithError:(id *)a0;
- (id)createPresenceDetectOperationWithError:(id *)a0;
- (char)enableBackgroundFingerDetection:(char)a0 error:(id *)a1;

@end
