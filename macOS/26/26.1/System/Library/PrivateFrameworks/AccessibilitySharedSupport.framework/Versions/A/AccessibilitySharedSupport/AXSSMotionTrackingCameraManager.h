@class AVCaptureDeviceDiscoverySession, NSArray, NSMutableArray, AVCaptureDevice;
@protocol AXSSMotionTrackingCameraManagerDelegate;

@interface AXSSMotionTrackingCameraManager : NSObject

@property (nonatomic) BOOL _monitoring;
@property (retain, nonatomic) NSMutableArray *_compatibleCaptureDevices;
@property (retain, nonatomic) NSMutableArray *_allCaptureDevices;
@property (retain, nonatomic) AVCaptureDeviceDiscoverySession *_captureDeviceDiscoverySession;
@property (readonly, copy, nonatomic) NSArray *compatibleCaptureDevices;
@property (readonly, copy, nonatomic) NSArray *allCaptureDevices;
@property (readonly, nonatomic) AVCaptureDevice *defaultCaptureDevice;
@property (weak, nonatomic) id<AXSSMotionTrackingCameraManagerDelegate> delegate;

+ (id)_sortedAndFilteredCaptureDevicesFromDevices:(id)a0;

- (void)_allCaptureDevicesChanged:(id)a0;
- (void)_resetDiscoverySession;
- (void)_captureDeviceConnected:(id)a0;
- (void)startMonitoring;
- (void)_captureDeviceUpdated;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_canUseMetadataCameraForMac;
- (void)_captureDeviceDisconnected:(id)a0;
- (void)_stopDiscoverySession;
- (void)stopMonitoring;
- (void)dealloc;
- (void)_startDiscoverySession;
- (void).cxx_destruct;
- (id)init;

@end
