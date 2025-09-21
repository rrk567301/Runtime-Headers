@class _TVRCRapportDeviceManager, _TVRCExpiringStore, RPCompanionLinkClient;
@protocol TVRCServiceDeviceQueryDelegate;

@interface TVRCRapportDeviceQuery : NSObject

@property (retain, nonatomic) _TVRCExpiringStore *expiringStore;
@property (retain, nonatomic) RPCompanionLinkClient *companionLinkClient;
@property (retain, nonatomic) _TVRCRapportDeviceManager *deviceManager;
@property (weak, nonatomic) id<TVRCServiceDeviceQueryDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)_deviceFound:(id)a0;
- (void)_deviceLost:(id)a0;
- (void)_disconnectAndRemoveDevice:(id)a0;
- (void)_mdmConfigChanged:(id)a0;
- (void)_removeAllDevices;
- (char)_shouldReportDevice:(id)a0;

@end
