@class _TVRCRapportDeviceManager, CUSystemMonitor, _TVRCExpiringStore, RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue, TVRCServiceDeviceQueryDelegate;

@interface TVRCRapportDeviceQuery : NSObject

@property (retain, nonatomic) _TVRCExpiringStore *expiringStore;
@property (retain, nonatomic) RPCompanionLinkClient *companionLinkClient;
@property (retain, nonatomic) _TVRCRapportDeviceManager *deviceManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *deviceQueryQueue;
@property (retain, nonatomic) CUSystemMonitor *systemMonitor;
@property (weak, nonatomic) id<TVRCServiceDeviceQueryDelegate> delegate;

- (void)start;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)_deviceFound:(id)a0;
- (void)_deviceLost:(id)a0;
- (void)_disconnectAndRemoveDevice:(id)a0;
- (void)_mdmConfigChanged:(id)a0;
- (void)_removeAllDevices;
- (BOOL)_shouldReportDevice:(id)a0;

@end
