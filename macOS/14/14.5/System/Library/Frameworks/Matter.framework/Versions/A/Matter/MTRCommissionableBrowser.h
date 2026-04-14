@class MTRDeviceController, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, MTRCommissionableBrowserDelegate;

@interface MTRCommissionableBrowser : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<MTRCommissionableBrowserDelegate> delegate;
@property (readonly, nonatomic) MTRDeviceController *controller;
@property (nonatomic) struct CommissionableBrowserInternal { void /* function */ **_vptr$CommissioningResolveDelegate; void /* function */ **_vptr$DnssdBrowseDelegate; void /* function */ **_vptr$BleScannerDelegate; NSObject<OS_dispatch_queue> *mDispatchQueue; id<MTRCommissionableBrowserDelegate> mDelegate; MTRDeviceController *mController; NSMutableDictionary *mDiscoveredResults; int mOnNetworkDevicesAdded; int mOnNetworkDevicesRemoved; int mBLEDevicesAdded; int mBLEDevicesRemoved; } browser;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)start;
- (BOOL)stop;
- (id)initWithDelegate:(id)a0 controller:(id)a1 queue:(id)a2;

@end
