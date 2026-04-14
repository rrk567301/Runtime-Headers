@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface HMDModernMessagingXPCEventPublisher : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_event_publisher> *xpcEventPublisher;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableDictionary *tokensByClientBundleID;
@property (readonly, nonatomic) NSDictionary *launchOnDemandClientBundleIDsByMessageName;

+ (id)shared;

- (void).cxx_destruct;
- (void)_publishLaunchEventForBundleID:(id)a0;
- (void)_addXPCSubscriberWithToken:(unsigned long long)a0 xpcEvent:(id)a1;
- (void)_removeXPCSubscriberWithToken:(unsigned long long)a0;
- (BOOL)hmmmIsBundleIDValidForLaunchOnDemand:(id)a0;
- (id)initWithLaunchOnDemandClientBundleIDsByMessageName:(id)a0;
- (id)initWithTestClientsByMessageName:(id)a0;
- (void)publishLaunchEventForBundleID:(id)a0;

@end
