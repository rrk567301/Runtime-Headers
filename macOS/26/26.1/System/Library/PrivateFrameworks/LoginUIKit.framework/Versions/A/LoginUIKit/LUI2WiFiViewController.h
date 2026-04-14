@class CWWiFiClient, NSImageView, NSObject;
@protocol OS_dispatch_queue;

@interface LUI2WiFiViewController : LUI2ViewController

@property (retain) NSImageView *wifiImageView;
@property (retain) CWWiFiClient *client;
@property BOOL paused;
@property (retain) NSObject<OS_dispatch_queue> *serialQueue;

- (void)_resume;
- (void)viewDidLoad;
- (void)resume;
- (void)pause;
- (void)dealloc;
- (void)_handleNotification:(id)a0;
- (void)linkDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)modeDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)_updateStatus;
- (void).cxx_destruct;
- (void)_pause;
- (void)ssidDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)linkQualityDidChangeForWiFiInterfaceWithName:(id)a0 rssi:(long long)a1 transmitRate:(double)a2;
- (void)interfaceAddedWithName:(id)a0;
- (void)interfaceRemovedWithName:(id)a0;
- (void)_refreshStatus;
- (void)cancelNotifications;

@end
