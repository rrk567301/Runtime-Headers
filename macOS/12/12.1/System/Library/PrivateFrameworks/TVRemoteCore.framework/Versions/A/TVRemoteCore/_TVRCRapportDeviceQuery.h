@class NSMutableDictionary, _TVRCRapportDeviceManager, _TVRCExpiringStore, RPCompanionLinkClient;
@protocol _TVRCRapportDeviceQueryDelegate;

@interface _TVRCRapportDeviceQuery : NSObject

@property (retain, nonatomic) _TVRCExpiringStore *expiringStore;
@property (retain, nonatomic) RPCompanionLinkClient *companionLinkClient;
@property (retain, nonatomic) NSMutableDictionary *wrapperToIdentifierMapping;
@property (retain, nonatomic) _TVRCRapportDeviceManager *deviceManager;
@property (weak, nonatomic) id<_TVRCRapportDeviceQueryDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)_disconnectAllDevices;
- (BOOL)_shouldReportDevice:(id)a0;
- (id)_wrapperForDevice:(id)a0;
- (void)_deviceFound:(id)a0;
- (void)_deviceLost:(id)a0;

@end
