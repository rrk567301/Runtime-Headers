@class UVCDeviceControl, UVCExtensionAppleDisplayDevice;

@interface UVCExtensionAppleDisplayDeskViewDevice : UVCExtensionAppleDisplayDevice {
    long long _deviceType;
    UVCExtensionAppleDisplayDevice *_companionMainVideoDevice;
    UVCDeviceControl *_overheadCameraModeControl;
    UVCDeviceControl *_overheadCameraZoomControl;
}

@property (nonatomic) int overheadCameraMode;
@property (nonatomic) float overheadCameraZoom;

- (long long)deviceType;
- (void).cxx_destruct;
- (id)availablePropertiesSync;
- (id)companionDeskViewVideoDevice;
- (id)companionMainVideoDevice;
- (id)devicePropertiesForPropertiesSync:(id)a0 error:(id *)a1;
- (id)initWithInterface:(unsigned int)a0 provider:(id)a1;
- (BOOL)setRollProperty:(id)a0 error:(id *)a1;
- (void)syncValuesFromDeviceControlsData:(id)a0;

@end
