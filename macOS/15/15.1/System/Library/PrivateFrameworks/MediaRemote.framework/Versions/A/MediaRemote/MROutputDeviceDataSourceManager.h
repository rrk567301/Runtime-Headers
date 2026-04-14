@class NSString, NSMutableDictionary;

@interface MROutputDeviceDataSourceManager : NSObject <MROutputDeviceDataSourceDelegate>

@property (class, readonly, nonatomic) MROutputDeviceDataSourceManager *sharedManager;

@property (retain, nonatomic) NSMutableDictionary *dataSourceCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)performModification:(id)a0 completion:(id /* block */)a1;
- (void)addOutputDeviceController:(id)a0;
- (id)availableOutputDevicesForOutputDeviceController:(id)a0;
- (id)dataSourceClasses;
- (id)dataSourcesForConfiguration:(id)a0;
- (id)dataSourcesForController:(id)a0;
- (void)outputDeviceDataSource:(id)a0 didChangeAvailableOutputDevices:(id)a1;
- (void)outputDeviceDataSource:(id)a0 didChangePendingOutputDevices:(id)a1;
- (void)outputDeviceDataSource:(id)a0 didChangeSelectedOutputDevices:(id)a1;
- (id)pendingOutputDevicesForOutputDeviceController:(id)a0;
- (void)removeOutputDeviceController:(id)a0;
- (id)selectedOutputDevicesForOutputDeviceController:(id)a0;
- (void)udpateDiscoveryMode;

@end
