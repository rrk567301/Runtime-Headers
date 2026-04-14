@class NSString;

@interface ICDDeviceProfileHandler : NSObject {
    NSString *_name;
    struct __CFUUID { } *_deviceID;
    NSString *_deviceClass;
    NSString *_languageMode;
    BOOL _isCamera;
}

- (void)dealloc;
- (id)init;
- (void)registerColorSyncDeviceWithName:(id)a0 profiles:(id)a1 deviceInfoPlistDeviceName:(id)a2 persistentID:(struct __CFUUID { } *)a3;
- (void)unregisterColorSyncDevice;
- (id)getProfileURLForMode:(id)a0;
- (id)profileIDStringFromMode:(id)a0;
- (void)addCameraFactoryProfiles:(id)a0;
- (void)addScannerFactoryProfiles:(id)a0;
- (id)defaultPathForMode:(id)a0;
- (id)modesByExpandingWildcard:(id)a0;
- (BOOL)registerDeviceInfoPlistProfiles:(id)a0 deviceNames:(id)a1;

@end
