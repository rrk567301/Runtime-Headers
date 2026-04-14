@class NSString, HMFTimer, HMDCameraSnapshotFile;

@interface HMDCameraSnapshotCacheEntry : HMFObject

@property (readonly) NSString *snapshotCharacteristicEventUUID;
@property (readonly) HMDCameraSnapshotFile *snapshotFile;
@property (readonly) HMFTimer *timer;
@property (copy) id /* block */ snapshotRequestCompletion;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithSnapshotCharacteristicEventUUID:(id)a0 snapshotFile:(id)a1 timer:(id)a2;

@end
