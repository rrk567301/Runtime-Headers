@class CAContext, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotSlotManager : HMFObject

@property (class, readonly) HMDCameraSnapshotSlotManager *sharedManager;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain) CAContext *snapshotContext;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)createSlot;
- (void)_backboardServicesRelaunched;
- (void)_clearSlotWithIdentifier:(unsigned int)a0;
- (unsigned int)_createSlot;
- (struct CGImage { } *)_createSnapshotCGImageRefFromFileWithPath:(id)a0 error:(id *)a1;
- (void)_createSnapshotContext;
- (void)_deleteSlotWithIdentifier:(unsigned int)a0;
- (BOOL)_fillSlotWithIdentifier:(unsigned int)a0 filePath:(id)a1 error:(id *)a2;
- (void)clearSlotWithIdentifier:(id)a0;
- (void)deleteSlotWithIdentifier:(id)a0;
- (BOOL)fillSlotWithIdentifier:(id)a0 filePath:(id)a1 error:(id *)a2;

@end
