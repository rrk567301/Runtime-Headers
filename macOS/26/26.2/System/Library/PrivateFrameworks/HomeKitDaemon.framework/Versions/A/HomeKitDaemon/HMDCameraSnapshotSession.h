@class NSMutableArray, NSString, HMDCameraSnapshotCompletionTimer, HMDCameraSnapshotSessionInfo, HMDCameraSnapshotMetrics;
@protocol HMDCameraGetSnapshotProtocol;

@interface HMDCameraSnapshotSession : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMDCameraSnapshotMetrics *snapshotMetrics;
@property (readonly, nonatomic) HMDCameraSnapshotSessionInfo *snapshotSessionInfo;
@property (readonly, nonatomic) id<HMDCameraGetSnapshotProtocol> snapshotGetter;
@property (readonly, nonatomic) HMDCameraSnapshotCompletionTimer *snapshotCompletionTimer;
@property (readonly, nonatomic) NSMutableArray *sessionMessages;
@property (readonly, nonatomic) unsigned long long streamingTierType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (void)dealloc;
- (void)respondWithPayload:(id)a0 error:(id)a1;
- (id)initWithSessionInfo:(id)a0 accessory:(id)a1 snapshotGetter:(id)a2 message:(id)a3 waitPeriod:(double)a4 streamingTierType:(unsigned long long)a5 cameraLocallyReachable:(BOOL)a6 isRelayed:(BOOL)a7 snapshotForNotification:(BOOL)a8;

@end
