@class HMDHAPAccessory, NSString, HMFTimer, HMDCameraSnapshotFile, NSSet, HMDCameraStreamSnapshotHandler, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotRequestHandler : HMFObject <HMFLogging, HMFTimerDelegate, HMDCameraStreamSnapshotHandlerDelegate, HMDCameraSnapshotRequestHandlerProtocol> {
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHAPAccessory *_accessory;
    NSMutableArray *_pendingCompletionHandlers;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    HMFTimer *_mostRecentSnapshotInvalidationTimer;
    HMDCameraSnapshotFile *_mostRecentSnapshot;
}

@property (readonly, nonatomic) NSString *logIdentifier;
@property (copy, nonatomic) NSSet *supportedResolutions;
@property (readonly, nonatomic) NSString *imageCacheDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_snapshotRequestOptions:(unsigned long long)a0 resolution:(id)a1 accessory:(id)a2;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 imageCacheDirectory:(id)a3 logID:(id)a4;
- (void)requestSnapshot:(id)a0 streamingTierType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)streamSnapshotHandler:(id)a0 didGetLastSnapshot:(id)a1;
- (void)streamSnapshotHandler:(id)a0 didGetNewSnapshot:(id)a1;

@end
