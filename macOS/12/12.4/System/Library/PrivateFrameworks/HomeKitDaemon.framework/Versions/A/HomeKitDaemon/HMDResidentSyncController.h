@class NSUUID, NSString, HMDHome, HMDManagedObjectCodingModel, NSObject, HMDManagedObjectContext;
@protocol OS_dispatch_queue;

@interface HMDResidentSyncController : NSObject <HMFMessageReceiver, HMFLogging> {
    HMDHome *_home;
    NSUUID *_homeUUID;
    HMDManagedObjectCodingModel *_codingModel;
    HMDManagedObjectContext *_context;
}

@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)dispatchContextForMessage:(id)a0;
- (id)initWithHome:(id)a0 codingModel:(id)a1 persistence:(id)a2;
- (id)encodeToken:(id)a0 error:(id *)a1;
- (id)decodeToken:(id)a0 error:(id *)a1;
- (BOOL)changeToken:(id)a0 isAheadOf:(id)a1;

@end
