@class HMFOSTransaction, HMDCameraSnapshotSessionID, NSString, NSObject;
@protocol OS_dispatch_queue, HMDIDSService;

@interface HMDCameraSnapshotIDSStream : HMFObject <HMDIDSServiceDelegate, HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID;
@property (readonly, nonatomic) id<HMDIDSService> idsProxyService;
@property (retain, nonatomic) HMFOSTransaction *snapshotStreamTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
