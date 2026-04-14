@class UVCDeviceControl, NSString;

@interface UVCExtensionAppleDisplayDevice : UVCExtensionAppleDevice {
    UVCDeviceControl *_rollControl;
    UVCDeviceControl *_roiControl;
    UVCDeviceControl *_autoExposurePriorityControl;
    NSString *_dualCFSupport;
}

- (void).cxx_destruct;
- (unsigned int)location;
- (id)getUVCControls;
- (id)initWithInterface:(unsigned int)a0 provider:(id)a1;
- (void)configureControls:(id)a0;
- (unsigned int)getCMIOClassIDForControl:(id)a0 legacy:(BOOL)a1;
- (BOOL)setDeviceProperty:(id)a0 value:(id)a1 error:(id *)a2;
- (BOOL)setRollProperty:(id)a0 error:(id *)a1;
- (id)availablePropertiesSync;
- (id)devicePropertiesForPropertiesSync:(id)a0 error:(id *)a1;
- (id)getFormatIdentifiers:(id)a0;
- (BOOL)validateFormats;
- (void)setObservationForStreamStateChange;
- (BOOL)setAEPriority:(BOOL)a0 error:(id *)a1;
- (BOOL)setCFForDefaultStreamInterface:(BOOL)a0 error:(id *)a1;

@end
