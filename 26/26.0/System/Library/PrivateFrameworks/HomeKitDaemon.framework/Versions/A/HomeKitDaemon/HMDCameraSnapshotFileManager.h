@class NSUUID, NSString, HMDCameraSnapshotFile, HMDCameraSnapshotSlotManager, NSDictionary, HMFMessageDispatcher, NSObject, NSNotificationCenter, NSMapTable;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotFileManager : HMFObject <HMFLogging> {
    NSMapTable *_filledSnapshotSlotIdentifiersByProcess;
    NSMapTable *_snapshotFilesByAssociatedProcessInfo;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_messageDispatcher;
    NSString *_imageCacheDirectory;
    NSNotificationCenter *_notificationCenter;
    HMDCameraSnapshotSlotManager *_snapshotSlotManager;
    HMDCameraSnapshotFile *_mostRecentSnapshot;
}

@property (readonly, copy, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSDictionary *encodedMostRecentSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)registerForMessages;
- (void).cxx_destruct;
- (void)backboardServicesRelaunched:(id)a0;
- (id)createSlotForSnapshotFile:(id)a0 requestMessages:(id)a1 shouldNotifyClients:(BOOL)a2;
- (id)encodedMostRecentSnapshotForMessage:(id)a0;
- (void)handleFillSnapshotSlot:(id)a0;
- (void)handleProcessStateChange:(id)a0;
- (void)handleReleaseSnapshot:(id)a0;
- (id)initWithWorkQueue:(id)a0 imageCacheDirectory:(id)a1 logIdentifier:(id)a2 uniqueIdentifier:(id)a3 messageDispatcher:(id)a4;
- (id)initWithWorkQueue:(id)a0 imageCacheDirectory:(id)a1 logIdentifier:(id)a2 uniqueIdentifier:(id)a3 messageDispatcher:(id)a4 snapshotSlotManager:(id)a5 notificationCenter:(id)a6;

@end
