@class NSObject, NSString, IDSSession, HMDCameraStreamSessionID, IDSService;
@protocol OS_dispatch_queue;

@interface HMDCameraIDSSessionHandler : HMFObject <HMFLogging, IDSServiceDelegate, HMDCameraRemoteStreamProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (readonly, nonatomic) IDSService *idsStreamService;
@property (retain, nonatomic) IDSSession *idsSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startKeepAlive;
- (id)logIdentifier;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1;

@end
