@class HMFMessageDispatcher, NSUUID, NSString;
@protocol HMDAppleMediaAccessoryMessageRouterDataSource;

@interface HMDAppleMediaAccessoryMessageRouter : HMFObject <HMFLogging, HMDMessageRouter>

@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSUUID *identifier;
@property (weak) id<HMDAppleMediaAccessoryMessageRouterDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)dataSourceDeviceForMessage:(id)a0;
- (id)initWithIdentifier:(id)a0 messageDispatcher:(id)a1;
- (void)relayMessage:(id)a0 device:(id)a1 allowRemoteRelayFromPrimary:(char)a2;
- (void)routeMessage:(id)a0 allowRemoteRelayFromPrimary:(char)a1 localHandler:(id /* block */)a2;
- (void)routeMessage:(id)a0 localHandler:(id /* block */)a1;

@end
