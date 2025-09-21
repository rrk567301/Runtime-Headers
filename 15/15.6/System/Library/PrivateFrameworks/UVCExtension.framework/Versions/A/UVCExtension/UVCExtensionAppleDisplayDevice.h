@class UVCDeviceControl, NSString;

@interface UVCExtensionAppleDisplayDevice : UVCExtensionAppleDevice {
    UVCDeviceControl *_rollControl;
    UVCDeviceControl *_roiControl;
    UVCDeviceControl *_autoExposurePriorityControl;
    NSString *_dualCFSupport;
    char _centerStageRectOfInterestSupported;
    char _manualFramingSupported;
    double _manualFramingDefaultZoomFactor;
    double _manualFramingMinZoomFactor;
    double _manualFramingMaxZoomFactor;
    UVCDeviceControl *_zoomControl;
    UVCDeviceControl *_startPanningControl;
    UVCDeviceControl *_translationControl;
    UVCDeviceControl *_panTiltControl;
    UVCDeviceControl *_cameraResetControl;
    UVCDeviceControl *_centerStageFramingStyleControl;
}

@property (readonly, getter=isCenterStageRectOfInterestSupported) char centerStageRectOfInterestSupported;
@property (readonly, getter=isManualFramingSupported) char manualFramingSupported;
@property (readonly) double manualFramingDefaultZoomFactor;
@property (readonly) double manualFramingMinZoomFactor;
@property (readonly) double manualFramingMaxZoomFactor;
@property (readonly, getter=isCenterStageFramingModeSupported) char centerStageFramingModeSupported;
@property double zoomFactor;

- (void).cxx_destruct;
- (unsigned int)location;
- (void)setCenterStageRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)validateFormats;
- (id)availablePropertiesSync;
- (void)configureControls:(id)a0;
- (id)devicePropertiesForPropertiesSync:(id)a0 error:(id *)a1;
- (unsigned int)getCMIOClassIDForControl:(id)a0 legacy:(char)a1;
- (id)getFormatIdentifiers:(id)a0;
- (id)getUVCControls;
- (id)initWithInterface:(unsigned int)a0 provider:(id)a1;
- (void)performOneShotManualFraming;
- (void)resetManualFraming;
- (char)setAEPriority:(char)a0 error:(id *)a1;
- (char)setCFForDefaultStreamInterface:(char)a0 error:(id *)a1;
- (void)setCenterStageFramingStyle:(unsigned int)a0;
- (char)setDeviceProperty:(id)a0 value:(id)a1 error:(id *)a2;
- (void)setObservationForStreamStateChange;
- (void)setPanningTranslation:(struct CGPoint { double x0; double x1; })a0;
- (char)setRollProperty:(id)a0 error:(id *)a1;
- (void)setStartPanningAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
