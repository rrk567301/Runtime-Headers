@class NSObject, HMFMessageDispatcher, NSString, NSUUID, HMDAccessorySettingsLocalMessageHandler, HMDAccessorySettingsLegacyMessageReceiver;
@protocol HMDMessageRouter, OS_dispatch_queue;

@interface HMDAccessorySettingsMessenger : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) id<HMDMessageRouter> messageRouter;
@property (readonly) HMDAccessorySettingsLocalMessageHandler *messageHandler;
@property (readonly) HMDAccessorySettingsLegacyMessageReceiver *legacyMessageReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)sendUpdateAccessorySettingRequestWithAccessoryUUID:(id)a0 keyPath:(id)a1 settingValue:(id)a2 completionHandler:(id /* block */)a3;
- (void)sendFetchAccessorySettingsRequestWithAccessoryUUID:(id)a0 keyPaths:(id)a1 completionHandler:(id /* block */)a2;
- (void)registerForMessagesWithHome:(id)a0;
- (void)routeAccessorySettingsFetchRequestMessage:(id)a0;
- (void)routeAccessorySettingsUpdateRequestMessage:(id)a0;
- (id)initWithMessageTargetUUID:(id)a0 messageDispatcher:(id)a1 messageRouter:(id)a2 messageHandler:(id)a3 legacyMessageReceiver:(id)a4;
- (id)legacyMessageForMessage:(id)a0;

@end
