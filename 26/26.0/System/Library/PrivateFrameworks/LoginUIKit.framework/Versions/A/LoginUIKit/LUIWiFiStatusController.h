@class CWInterface, NSImageView, CWWiFiClient;

@interface LUIWiFiStatusController : LUIController {
    NSImageView *_wifiImageView;
    CWInterface *_interface;
    CWWiFiClient *_client;
    BOOL _paused;
}

+ (id)controllerWithStyle:(int)a0;

- (id)initWithStyle:(int)a0;
- (void)ssidDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)_handleNotification:(id)a0;
- (void)dealloc;
- (void)linkDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)_updateStatus;
- (void)modeDidChangeForWiFiInterfaceWithName:(id)a0;
- (void).cxx_destruct;
- (void)linkQualityDidChangeForWiFiInterfaceWithName:(id)a0 rssi:(long long)a1 transmitRate:(double)a2;
- (void)interfaceAddedWithName:(id)a0;
- (void)interfaceRemovedWithName:(id)a0;
- (void)pauseController;
- (void)_setupContentView;
- (void)resumeController;
- (void)tearDownController;

@end
