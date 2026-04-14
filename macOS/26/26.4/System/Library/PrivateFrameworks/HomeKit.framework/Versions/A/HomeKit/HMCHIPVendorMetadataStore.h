@class NSUUID, _HMContext, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMCHIPVendorMetadataStore : NSObject <HMFLogging, HMFMessageReceiver>

@property (readonly, nonatomic) _HMContext *context;
@property (retain, nonatomic) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

@end
