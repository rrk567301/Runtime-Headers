@class NSMutableDictionary, mDispatchQueue, NSObject, MTRDeviceController;
@protocol MTRCommissionableBrowserDelegate, OS_dispatch_queue;

@interface MTRCommissionableBrowser : NSObject {
    id<MTRCommissionableBrowserDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    MTRDeviceController *_controller;
    struct CommissionableBrowserInternal { void /* function */ **_vptr$DiscoverNodeDelegate; void /* function */ **_vptr$DnssdBrowseDelegate; void /* function */ **_vptr$BleScannerDelegate; mDispatchQueue *mBleScannerDelegateOwner; NSObject<OS_dispatch_queue> *x0; id<MTRCommissionableBrowserDelegate> mDelegate; MTRDeviceController *mController; NSMutableDictionary *mDiscoveredResults; int mOnNetworkDevicesAdded; int mOnNetworkDevicesRemoved; int mBLEDevicesAdded; int mBLEDevicesRemoved; } _browser;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)start;
- (BOOL)stop;
- (id)initWithDelegate:(id)a0 controller:(id)a1 queue:(id)a2;

@end
