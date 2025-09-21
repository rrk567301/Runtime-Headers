@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotCache : HMFObject <HMFLogging, HMFTimerDelegate, HMDCameraSnapshotRequestHandlerProtocol> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_snapshotCacheMap;
}

@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)addEntryWithCharacteristicEventUUID:(id)a0;
- (id)initWithWorkQueue:(id)a0 logIdentifier:(id)a1;
- (BOOL)isEntryPresentForCharacteristicEventUUID:(id)a0;
- (void)removeEntryWithCharacteristicEventUUID:(id)a0 error:(id)a1;
- (void)requestSnapshot:(id)a0 streamingTierType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)setSnapshotFile:(id)a0 forEntryWithCharacteristicEventUUID:(id)a1;

@end
