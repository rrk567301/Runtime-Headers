@class CWWiFiClient, NSImageView, NSObject;
@protocol OS_dispatch_queue;

@interface LUI2WiFiViewController : LUI2ViewController

@property (retain) NSImageView *wifiImageView;
@property (retain) CWWiFiClient *client;
@property BOOL paused;
@property (retain) NSObject<OS_dispatch_queue> *serialQueue;

- (void)_pause;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)_resume;
- (void)pause;
- (void)modeDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)resume;
- (void)ssidDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)_updateStatus;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;
- (void)linkDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)_handleNotification:(id)a0;
- (void)linkQualityDidChangeForWiFiInterfaceWithName:(id)a0 rssi:(long long)a1 transmitRate:(double)a2;
- (void)interfaceAddedWithName:(id)a0;
- (void)interfaceRemovedWithName:(id)a0;
- (void)_refreshStatus;
- (void)cancelNotifications;

@end
