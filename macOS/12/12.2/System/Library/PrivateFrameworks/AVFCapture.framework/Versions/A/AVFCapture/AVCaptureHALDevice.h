@class NSString, NSArray, AVCaptureDeviceFormat_Tundra, AVCaptureDeviceInputSource_Tundra;

@interface AVCaptureHALDevice : AVCaptureDevice_Tundra {
    NSString *_uniqueID;
    unsigned int _connectionID;
    NSString *_localizedName;
    NSString *_modelID;
    NSString *_manufacturer;
    BOOL _hidden;
    NSArray *_formats;
    AVCaptureDeviceFormat_Tundra *_activeFormat;
    NSArray *_inputSources;
    AVCaptureDeviceInputSource_Tundra *_activeInputSource;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertiesLock;
    struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *_physicalASBDs;
    struct OpaqueCMClock { } *_deviceClock;
    int _transportType;
}

+ (void)initialize;
+ (id)devices;
+ (void)_ensureDeviceList;
+ (void)_refreshDevices;
+ (id)defaultDeviceWithDeviceType:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)deviceWithUniqueID:(id)a0;
+ (id)defaultDeviceWithMediaType:(id)a0;
+ (id)_deviceFormatWithASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 deviceChannelCount:(unsigned int)a1;

- (void)dealloc;
- (id)init;
- (BOOL)isHidden;
- (id)localizedName;
- (id)uniqueID;
- (unsigned int)deviceID;
- (BOOL)isConnected;
- (id)deviceType;
- (unsigned int)connectionID;
- (int)transportType;
- (id)manufacturer;
- (id)formats;
- (void)setConnectionID:(unsigned int)a0;
- (id)inputSources;
- (id)modelID;
- (BOOL)isAlive;
- (id)activeFormat;
- (void)setActiveFormat:(id)a0;
- (BOOL)supportsAVCaptureSessionPreset:(id)a0;
- (void)_postNotificationNamed:(id)a0;
- (BOOL)isInUseByAnotherApplication;
- (struct OpaqueCMClock { } *)deviceClock;
- (void)_refreshConnectionID:(unsigned int)a0 KVONotify:(BOOL)a1;
- (void)_removePropertyListeners;
- (void)_addPropertyListeners;
- (void)_refreshPropertiesAndKVONotify:(BOOL)a0;
- (void)_refreshInputSourcesAndKVONotify:(BOOL)a0;
- (void)_refreshFormatsAndKVONotify:(BOOL)a0;
- (long long)deviceSystem;
- (unsigned int)connectionUnitComponentSubType;
- (id)activeInputSource;
- (void)setActiveInputSource:(id)a0;
- (BOOL)startUsingDevice:(id *)a0;
- (void)stopUsingDevice;
- (void)_handleDeviceIsAliveNotification:(id)a0;
- (BOOL)becomeDeviceMaster:(id *)a0;
- (void)relinquishDeviceMaster;
- (id)initWithUniqueID:(id)a0 connectionID:(unsigned int)a1 isHidden:(BOOL)a2;
- (unsigned int)_getDeviceChannelCount;

@end
