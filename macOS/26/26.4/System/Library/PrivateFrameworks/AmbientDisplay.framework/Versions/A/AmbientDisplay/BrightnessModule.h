@class DisplayServicesClient, DeviceGammaContext;

@interface BrightnessModule : NSObject {
    BOOL _hasALSCompensation;
    BOOL _hasALSReset;
    unsigned int _displayID;
    DisplayServicesClient *_dsClient;
    DeviceGammaContext *_observer;
    float _currentBrightness;
    float _smallestBrightnessIncrement;
}

@property (readonly) BOOL displayIsBuiltIn;
@property (readonly) BOOL autoBrightnessIsAvailable;
@property (readonly) BOOL autoBrightnessIsForcedDisabled;
@property (readonly) BOOL brightnessIsLocked;
@property (readonly) float brightnessIncrement;
@property float brightnessSetting;
@property BOOL autoBrightnessEnabledState;

- (void)activate;
- (void)deactivate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_getAutoBrightnessAvailable;
- (void)_getAutoBrightnessForcedDisabledState;
- (void)_getBrightnessIncrement;
- (void)_getBrightnessLockedState;
- (void)_getBrightnessSetting;
- (void)_pollToRefreshAutoBrightnessEnabled;
- (float)autoBrightnessState;
- (void)brightnessModuleRegisterForNotifications:(void *)a0;
- (void)brightnessModuleUnregisterForNotifications:(void *)a0;
- (id)initBrightnessModuleWithDisplayID:(unsigned int)a0;

@end
