@class CRInputDeviceController;

@interface CRInputDeviceManager : NSObject {
    CRInputDeviceController *keyboardController;
    CRInputDeviceController *trackpadController;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)_hasUnsealedDisplay;
- (BOOL)_hasUnsealedLAS2;
- (BOOL)_isCurrentProcessEntitled;
- (BOOL)_setForceEnabled:(BOOL)a0;
- (int)_smcSetForceLidState:(BOOL)a0;
- (BOOL)clearForceEnableInputDevice;
- (BOOL)forceEnableInputDeviceIfNecessary;
- (void)forceEnableInputDeviceIfNecessaryWithCompletion:(id /* block */)a0;

@end
