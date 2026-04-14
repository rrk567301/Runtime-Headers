@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object, HMDNFCEventStreamDelegate;

@interface HMDNFCEventStream : HMFObject <HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSObject<OS_xpc_object> *event;
@property (readonly, copy) NSString *name;
@property (weak) id<HMDNFCEventStreamDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)start;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_handleXPCEvent:(id)a0;
- (id)initWithName:(id)a0 workQueue:(id)a1;

@end
