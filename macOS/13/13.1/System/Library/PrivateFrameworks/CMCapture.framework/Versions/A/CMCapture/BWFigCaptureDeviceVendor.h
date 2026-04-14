@class NSObject, NSMutableDictionary, BWFigCaptureDevice, NSDictionary, NSMutableSet, NSMutableArray, BWFigCaptureDeviceClient;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface BWFigCaptureDeviceVendor : NSObject {
    void /* function */ *_deviceCreateFunction;
    BWFigCaptureDevice *_device;
    NSMutableArray *_controlledStreams;
    NSMutableArray *_streamsToKeepControlled;
    NSMutableArray *_streamsInUse;
    NSMutableArray *_streamsControlledByOtherClients;
    NSMutableArray *_registeredDeviceClients;
    BWFigCaptureDeviceClient *_deviceClient;
    NSMutableArray *_victimizedDeviceClients;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSObject<OS_dispatch_source> *_deviceCloseTimer;
    int _deviceUsageCount;
    double _deviceCloseTimeoutSeconds;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_transaction> *_activeForClientAssertion;
    NSDictionary *_cameraPoseMatricesByPortType;
    NSMutableSet *_portTypesToCheckForToFAFEstimator;
    NSMutableDictionary *_tofAFEstimatorResultsByPortType;
    NSMutableSet *_portTypesToCheckForAFDriverShortStatistics;
    NSMutableDictionary *_afDriverShortStatisticsByPortType;
}

@property (readonly) int activeDeviceClientPriority;
@property (readonly) BOOL cameraCalibrationValid;

+ (void)initialize;
+ (id)sharedCaptureDeviceVendor;
+ (BOOL)videoCaptureDeviceFirmwareIsLoaded;

- (void)dealloc;
- (id)initWithDeviceCreateFunction:(void /* function */ *)a0;
- (void)prewarmDefaultVideoDeviceForPID:(int)a0 completionHandler:(id /* block */)a1;
- (int)registerClientWithPID:(int)a0 clientDescription:(id)a1 clientPriority:(int)a2 canStealFromClientsWithSamePriority:(BOOL)a3 deviceSharingWithOtherClientsAllowed:(BOOL)a4 deviceAvailabilityChangedHandler:(id /* block */)a5;
- (id)copyDeviceForClient:(int)a0 informClientWhenDeviceAvailableAgain:(BOOL)a1 error:(int *)a2;
- (id)copyStreamWithPosition:(int)a0 deviceType:(int)a1 forDevice:(id)a2 error:(int *)a3;
- (id)copyStreamWithPosition:(int)a0 deviceType:(int)a1 allowsStreamControlLoss:(BOOL)a2 forDevice:(id)a3 error:(int *)a4;
- (id)copyStreamWithoutControlWithPosition:(int)a0 deviceType:(int)a1 forDevice:(id)a2;
- (id)copyStreamForFlashlightWithPosition:(int)a0 deviceType:(int)a1 forDevice:(id)a2;
- (id)copyStreamsWithPositions:(id)a0 deviceTypes:(id)a1 forDevice:(id)a2 error:(int *)a3;
- (id)_copyStreamsWithPositions:(id)a0 deviceTypes:(id)a1 allowsStreamControlLoss:(BOOL)a2 forDevice:(id)a3 requestControl:(BOOL)a4 error:(int *)a5;
- (id)copyStreamsWithUniqueIDs:(id)a0 forDevice:(id)a1 error:(int *)a2;
- (void)takeBackDevice:(id)a0 forClient:(int)a1 informClientWhenDeviceAvailableAgain:(BOOL)a2;
- (BOOL)streamsInUseForDevice:(id)a0;
- (void)invalidateVideoDevice:(id)a0 forPID:(int)a1;
- (int)keepControlOfStreamsWithPositions:(id)a0 deviceTypes:(id)a1 forDevice:(id)a2;
- (void)takeBackStreams:(id)a0 device:(id)a1;
- (void)shutDownSystemPressuredDevice:(id)a0;
- (void)resumeSystemPressuredDevice;
- (float)structuredLightProjectorStandbyTemperatureWithError:(int *)a0;
- (BOOL)activeDeviceEquals:(id)a0;
- (void)unregisterCallbacksForClient:(int)a0;
- (id)cameraPoseMatrixForStreamWithPosition:(int)a0 deviceType:(int)a1;
- (id)_registeredDeviceClientWithID:(int)a0;
- (int)requestControlOfStreams:(id)a0 device:(id)a1;

@end
