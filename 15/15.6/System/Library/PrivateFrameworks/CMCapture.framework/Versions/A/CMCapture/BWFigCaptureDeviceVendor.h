@class NSString, NSArray, FigCaptureOSStateHandle, NSMutableDictionary, NSMutableArray, NSDateFormatter, NSObject, FigCaptureGameModeMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface BWFigCaptureDeviceVendor : NSObject <FigCaptureOSStateDataProvider> {
    void /* function */ *_defaultDeviceCreateFunction;
    NSMutableDictionary *_devicesStatesByDeviceID;
    NSMutableArray *_registeredDeviceClients;
    NSMutableArray *_activeDeviceClients;
    NSMutableArray *_victimizedDeviceClients;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSObject<OS_dispatch_source> *_defaultDeviceOpenTimer;
    double _deviceCloseTimeoutSeconds;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_transaction> *_activeForClientAssertion;
    NSMutableDictionary *_cameraPoseMatricesByPortTypeByDeviceID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _calibrationStatusLock;
    char _calibrationStatusQueried;
    char _rearCameraCalibrationValid;
    FigCaptureOSStateHandle *_osStateHandle;
    NSMutableArray *_defaultDeviceCreationHistory;
    NSDateFormatter *_deviceDateFormatter;
    FigCaptureGameModeMonitor *_gameModeMonitor;
}

@property (readonly, nonatomic) NSArray *deviceIDs;
@property (readonly) int activeClientPriority;
@property (readonly) char rearCameraCalibrationValid;
@property (readonly, nonatomic) int createDeviceTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedCaptureDeviceVendor;
+ (id)sharedCaptureDeviceVendorWithDefaultDeviceCreateFunction:(void /* function */ *)a0;
+ (char)videoCaptureDeviceFirmwareIsLoaded;

- (void)dealloc;
- (id)deviceWithID:(id)a0;
- (int)unregisterClient:(int)a0;
- (id)copyDeviceForClient:(int)a0 informClientWhenDeviceAvailableAgain:(char)a1 error:(int *)a2;
- (id)_copyStreamsFromDevice:(id)a0 positions:(id)a1 deviceTypes:(id)a2 requestControl:(char)a3 deviceClientPriority:(int)a4 allowsStreamControlLoss:(char)a5 error:(int *)a6;
- (id)_deviceWithID:(id)a0;
- (char)activeDefaultDeviceEquals:(id)a0;
- (id)activeDeviceClient;
- (id)activeDeviceClients;
- (id)cameraPoseMatrixForStreamWithPosition:(int)a0 deviceType:(int)a1 deviceID:(id)a2;
- (id)controlledStreamsForDevice:(id)a0;
- (id)copyDefaultDeviceForVibeMitigation:(int *)a0;
- (id)copyDeviceForPublishingWithID:(id)a0 error:(int *)a1;
- (id)copyDeviceWithID:(id)a0 forClient:(int)a1 informClientWhenDeviceAvailableAgain:(char)a2 error:(int *)a3;
- (id)copyStreamFromDevice:(id)a0 position:(int)a1 deviceType:(int)a2 deviceClientPriority:(int)a3 allowsStreamControlLoss:(char)a4 error:(int *)a5;
- (id)copyStreamWithoutControlFromDevice:(id)a0 position:(int)a1 deviceType:(int)a2 error:(int *)a3;
- (id)copyStreamsFromDevice:(id)a0 positions:(id)a1 deviceTypes:(id)a2 deviceClientPriority:(int)a3 allowsStreamControlLoss:(char)a4 error:(int *)a5;
- (id)copyStreamsWithUniqueIDs:(id)a0 forDevice:(id)a1 deviceClientPriority:(int)a2 error:(int *)a3;
- (id)copyStreamsWithoutControlFromDevice:(id)a0 positions:(id)a1 deviceTypes:(id)a2 error:(int *)a3;
- (id)defaultDeviceCreationHistory;
- (char)hasActiveForClientAssertion;
- (id)initWithDefaultDeviceCreateFunction:(void /* function */ *)a0;
- (void)invalidateVideoDevice:(id)a0 forPID:(int)a1;
- (int)keepControlOfStreamsWithPositions:(id)a0 deviceTypes:(id)a1 forDevice:(id)a2;
- (id)osStatePropertyList;
- (void)prewarmDefaultVideoDeviceForPID:(int)a0 completionHandler:(id /* block */)a1;
- (int)registerClientWithPID:(int)a0 clientApplicationID:(id)a1 clientDescription:(id)a2 clientPriority:(int)a3 canStealFromClientsWithSamePriority:(char)a4 deviceSharingWithOtherClientsAllowed:(char)a5 clientType:(int)a6 deviceAvailabilityChangedHandler:(id /* block */)a7;
- (int)registerClientWithPID:(int)a0 clientDescription:(id)a1 clientPriority:(int)a2 canStealFromClientsWithSamePriority:(char)a3 deviceSharingWithOtherClientsAllowed:(char)a4 clientType:(int)a5 deviceAvailabilityChangedHandler:(id /* block */)a6;
- (id)registeredDeviceClientWithID:(int)a0;
- (id)registeredDeviceClients;
- (int)requestControlOfStreams:(id)a0 device:(id)a1 deviceClientPriority:(int)a2;
- (void)resumeSystemPressuredDevice;
- (void)shutDownSystemPressuredDevice:(id)a0;
- (char)streamsInUseForDevice:(id)a0;
- (float)structuredLightProjectorStandbyTemperatureWithError:(int *)a0;
- (void)takeBackDevice:(id)a0 forClient:(int)a1 informClientWhenDeviceAvailableAgain:(char)a2 prefersDeviceInvalidatedImmediately:(char)a3;
- (void)takeBackStreams:(id)a0 device:(id)a1 totalStreamingDuration:(unsigned int)a2;
- (int)usageCountForDevice:(id)a0;
- (id)victimizedDeviceClients;

@end
