@class NSUUID, _HMContext, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMCameraIndexingManager : NSObject <HMFLogging, HMFMessageReceiver>

@property (readonly) _HMContext *context;
@property (readonly, copy) NSUUID *profileUniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

@end
