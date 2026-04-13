@class NSString, NSMutableArray, DeviceCollection;

@interface DSITunesObserver : NSObject <DeviceCollectionDelegate> {
    struct TNodePtr { struct TNode *fCountedNode; } fParentNode;
    struct TNSRef<NSMutableArray<AMPDevice *>, void> { NSMutableArray *fRef; } fDevices;
    struct TNSRef<DeviceCollection, void> { DeviceCollection *fRef; } fCollection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)startObserving;
- (void)stopObserving;
- (id)copyCollection;
- (struct TNSRef<NSArray<AMPDevice *>, void> { id x0; })iTuneDevices;
- (void)syncDeviceList;
- (void)deviceAttached:(id)a0;
- (void)deviceDetached:(id)a0;
- (void)allDevicesDetached;
- (void)deviceChanged:(id)a0;
- (void)nameChangedForDevice:(id)a0;
- (void)startedOperationForDevice:(id)a0 allowCancel:(BOOL)a1;
- (void)startedOperationForDevice:(id)a0 withProgress:(id)a1 allowCancel:(BOOL)a2;
- (void)completedOperationForDevice:(id)a0;

@end
