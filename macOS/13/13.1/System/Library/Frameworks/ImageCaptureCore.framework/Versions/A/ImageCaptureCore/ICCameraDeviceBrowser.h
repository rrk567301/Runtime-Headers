@class MSCameraDeviceManager, PTPCameraDeviceManager, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ICCameraDeviceBrowser : NSObject {
    NSMutableArray *_suspendedBrowsers;
    long long _numberOfBrowsingBrowsers;
    NSObject<OS_dispatch_source> *_suspensionTimer;
    NSObject<OS_dispatch_queue> *_suspensionTimerQueue;
    PTPCameraDeviceManager *_ptpDevManager;
    MSCameraDeviceManager *_msDevManager;
    id _rsDevManager;
}

@property (readonly) NSMutableArray *devices;
@property (readonly) NSMutableArray *browsers;

+ (BOOL)exists;
+ (id)defaultBrowser;

- (void)dealloc;
- (id)init;
- (void)stop:(id)a0;
- (void)start:(id)a0;
- (void)handleCommandCompletionNotification:(id)a0;
- (void)handleImageCaptureEventNotification:(id)a0;
- (void)addBrowser:(id)a0;
- (void)removeBrowser:(id)a0;
- (BOOL)startPTPCameraBrowser;
- (BOOL)startMSCameraBrowser;
- (BOOL)startRSCameraBrowser;
- (id)deviceWithDelegate:(id)a0;

@end
