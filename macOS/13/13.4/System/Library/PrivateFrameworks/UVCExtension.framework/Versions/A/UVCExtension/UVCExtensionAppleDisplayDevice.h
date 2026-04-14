@class UVCDeviceControl, NSString;

@interface UVCExtensionAppleDisplayDevice : UVCExtensionAppleDevice {
    UVCDeviceControl *_rollControl;
    UVCDeviceControl *_roiControl;
    UVCDeviceControl *_autoExposurePriorityControl;
    NSString *_dualCFSupport;
    BOOL _centerStageRectOfInterestSupported;
}

@property (readonly, getter=isCenterStageRectOfInterestSupported) BOOL centerStageRectOfInterestSupported;

- (void).cxx_destruct;
- (unsigned int)location;
- (void)setCenterStageRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)validateFormats;
- (id)availablePropertiesSync;
- (void)configureControls:(id)a0;
- (id)devicePropertiesForPropertiesSync:(id)a0 error:(id *)a1;
- (unsigned int)getCMIOClassIDForControl:(id)a0 legacy:(BOOL)a1;
- (id)getFormatIdentifiers:(id)a0;
- (id)getUVCControls;
- (id)initWithInterface:(unsigned int)a0 provider:(id)a1;
- (BOOL)setAEPriority:(BOOL)a0 error:(id *)a1;
- (BOOL)setCFForDefaultStreamInterface:(BOOL)a0 error:(id *)a1;
- (BOOL)setDeviceProperty:(id)a0 value:(id)a1 error:(id *)a2;
- (void)setObservationForStreamStateChange;
- (BOOL)setRollProperty:(id)a0 error:(id *)a1;

@end
