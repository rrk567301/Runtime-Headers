@interface CMContinuityCaptureDeskcamVideoDevice : CMContinuityCaptureVideoDevice

- (void)_handleForcefulCenterStageEnablementIfNeeded;
- (id)initWithCapabilities:(id)a0 compositeDelegate:(id)a1;
- (char)isCenterStageForceEnableSupported;
- (void)populateDefaultManualFramingAndCenterStageValuesWithDeviceID:(id)a0 transportDevice:(id)a1;
- (void)restoreStatesAfterForcefulCenterStageEnablement;

@end
