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
    BOOL _preventingSystemSleep;
    unsigned int _preventSystemSleepAssertion;
    NSMutableDictionary *_cameraPoseMatricesByPortTypeByDeviceID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _calibrationStatusLock;
    BOOL _calibrationStatusQueried;
    BOOL _rearCameraCalibrationValid;
    FigCaptureOSStateHandle *_osStateHandle;
    NSMutableArray *_defaultDeviceCreationHistory;
    NSDateFormatter *_deviceDateFormatter;
    FigCaptureGameModeMonitor *_gameModeMonitor;
}

@property (readonly, nonatomic) NSArray *deviceIDs;
@property (readonly) int activeClientPriority;
@property (readonly) BOOL rearCameraCalibrationValid;
@property (readonly, nonatomic) int createDeviceTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCaptureDeviceVendor;
+ (void)initialize;
+ (id)sharedCaptureDeviceVendorWithDefaultDeviceCreateFunction:(void /* function */ *)a0;
+ (BOOL)videoCaptureDeviceFirmwareIsLoaded;

- (id)activeDeviceClient;
- (id)controlledStreamsForDevice:(id)a0;
- (id)_deviceWithID:(id)a0;
- (void)invalidateVideoDevice:(id)a0 forPID:(int)a1;
- (void)dealloc;
- (void)shutDownSystemPressuredDevice:(id)a0;
- (void)resumeSystemPressuredDevice;
- (int)registerClientWithPID:(int)a0 clientDescription:(id)a1 clientPriority:(int)a2 canStealFromClientsWithSamePriority:(BOOL)a3 deviceSharingWithOtherClientsAllowed:(BOOL)a4 clientType:(int)a5 deviceAvailabilityChangedHandler:(id /* block */)a6;
- (id)copyDeviceForPublishingWithID:(id)a0 error:(int *)a1;
- (id)cameraPoseMatrixForStreamWithPosition:(int)a0 deviceType:(int)a1 deviceID:(id)a2;
- (id)osStatePropertyList;
- (BOOL)activeDefaultDeviceEquals:(id)a0;
- (id)copyStreamsWithoutControlFromDevice:(id)a0 positions:(id)a1 deviceTypes:(id)a2 error:(int *)a3;
- (id)copyStreamsWithUniqueIDs:(id)a0 forDevice:(id)a1 deviceClientPriority:(int)a2 error:(int *)a3;
- (int)usageCountForDevice:(id)a0;
- (id)activeDeviceClients;
- (id)streamsControlledByOtherClientsForDevice:(id)a0;
- (void)prewarmDefaultVideoDeviceForPID:(int)a0 completionHandler:(id /* block */)a1;
- (int)unregisterClient:(int)a0;
- (BOOL)hasActiveForClientAssertion;
- (id)victimizedDeviceClients;
- (id)defaultDeviceCreationHistory;
- (id)registeredDeviceClients;
- (id)copyStreamsFromDevice:(id)a0 positions:(id)a1 deviceTypes:(id)a2 deviceClientPriority:(int)a3 allowsStreamControlLoss:(BOOL)a4 error:(int *)a5;
- (float)structuredLightProjectorStandbyTemperatureWithError:(int *)a0;
- (int)registerClientWithPID:(int)a0 clientApplicationID:(id)a1 clientDescription:(id)a2 clientPriority:(int)a3 canStealFromClientsWithSamePriority:(BOOL)a4 deviceSharingWithOtherClientsAllowed:(BOOL)a5 clientType:(int)a6 deviceAvailabilityChangedHandler:(id /* block */)a7;
- (id)registeredDeviceClientWithID:(int)a0;
- (void)takeBackStreams:(id)a0 device:(id)a1 totalStreamingDuration:(unsigned int)a2;
- (id)copyStreamWithoutControlFromDevice:(id)a0 position:(int)a1 deviceType:(int)a2 error:(int *)a3;
- (void)updateClientPriority:(int)a0 clientPriority:(int)a1;
- (id)_copyStreamsFromDevice:(id)a0 positions:(id)a1 deviceTypes:(id)a2 requestControl:(BOOL)a3 deviceClientPriority:(int)a4 allowsStreamControlLoss:(BOOL)a5 error:(int *)a6;
- (void)takeBackDevice:(id)a0 forClient:(int)a1 informClientWhenDeviceAvailableAgain:(BOOL)a2 prefersDeviceInvalidatedImmediately:(BOOL)a3;
- (int)requestControlOfStreams:(id)a0 device:(id)a1 deviceClientPriority:(int)a2;
- (id)copyDeviceWithID:(id)a0 forClient:(int)a1 informClientWhenDeviceAvailableAgain:(BOOL)a2 error:(int *)a3;
- (id)copyStreamFromDevice:(id)a0 position:(int)a1 deviceType:(int)a2 deviceClientPriority:(int)a3 allowsStreamControlLoss:(BOOL)a4 error:(int *)a5;
- (int)keepControlOfStreamsWithPositions:(id)a0 deviceTypes:(id)a1 forDevice:(id)a2;
- (id)copyDeviceForClient:(int)a0 informClientWhenDeviceAvailableAgain:(BOOL)a1 error:(int *)a2;
- (id)initWithDefaultDeviceCreateFunction:(void /* function */ *)a0;
- (id)copyDefaultDeviceForVibeMitigation:(int *)a0;
- (id)deviceWithID:(id)a0;
- (BOOL)streamsInUseForDevice:(id)a0;

@end
