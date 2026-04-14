@class NSString, FINode, DeviceCollection, NSMutableArray;

@interface DSITunesObserver : NSObject <DeviceCollectionDelegate> {
    struct TNodePtr { FINode *fFINode; } fParentNode;
    NSMutableArray *fDevices;
    DeviceCollection *fCollection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startObserving;
- (void)stopObserving;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)deviceAttached:(id)a0;
- (void)deviceDetached:(id)a0;
- (void)allDevicesDetached;
- (void)completedOperationForDevice:(id)a0;
- (id)copyCollection;
- (void)deviceChanged:(id)a0;
- (id)iTuneDevices;
- (void)nameChangedForDevice:(id)a0;
- (void)startedOperationForDevice:(id)a0 allowCancel:(BOOL)a1;
- (void)startedOperationForDevice:(id)a0 withProgress:(id)a1 allowCancel:(BOOL)a2;
- (void)syncDeviceList;

@end
