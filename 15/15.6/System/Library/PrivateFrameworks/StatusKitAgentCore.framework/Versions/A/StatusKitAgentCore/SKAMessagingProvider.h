@class NSString, NSMutableDictionary, NSArray, NSObject, IDSService;
@protocol OS_dispatch_queue, SKAMessagingProvidingDelegate, SKAPushManaging;

@interface SKAMessagingProvider : NSObject <IDSServiceDelegate, SKAMessagingProviding>

@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) id<SKAPushManaging> pushManager;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) NSMutableDictionary *registeredIDSDeviceChangedObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKAMessagingProvidingDelegate> delegate;
@property (readonly, nonatomic) NSArray *idsDevices;

+ (id)logger;
+ (id)_noValidIDSDetintationError;

- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(char)a3 error:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)service:(id)a0 didHintCheckingTransportLogWithReason:(long long)a1;
- (id)deviceToken;
- (void)isHandleMessageable:(id)a0 completion:(id /* block */)a1;
- (char)isHandleAvailableToMessageFrom:(id)a0;
- (char)_keysharingIsDisabledByServer;
- (char)_selfSharingIsDisabledByServer;
- (id)deviceTokenForTokenURI:(id)a0;
- (id)handleForTokenURI:(id)a0;
- (id)initWithDelegate:(id)a0 serviceIdentifier:(id)a1 pushManager:(id)a2 queue:(id)a3;
- (char)isFromIDFromSelfAccount:(id)a0;
- (void)isHandle:(id)a0 inFirewallForService:(id)a1 completion:(id /* block */)a2;
- (void)isHandleMessageableForPresence:(id)a0 completion:(id /* block */)a1;
- (char)isValidURI:(id)a0;
- (void)listOfValidSenderHandles:(id)a0 containsSenderMergeID:(id)a1 completion:(id /* block */)a2;
- (id)registerIDSDeviceChangedObserver:(id /* block */)a0;
- (id)resolveSenderHandleWithPreferredSenderHandle:(id)a0;
- (id)selfAddressedURIForURI:(id)a0;
- (char)sendMessage:(id)a0 toHandle:(id)a1 fromHandle:(id)a2 limitToPresenceCapable:(char)a3 identifier:(id *)a4 error:(id *)a5;
- (char)sendMessage:(id)a0 toHandles:(id)a1 fromHandle:(id)a2 limitToPresenceCapable:(char)a3 identifier:(id *)a4 error:(id *)a5;
- (char)sendMessageToSelfDevices:(id)a0 limitToPresenceCapable:(char)a1 identifier:(id *)a2 error:(id *)a3;
- (void)signPayload:(id)a0 completion:(id /* block */)a1;
- (id)tokenURI;
- (void)unregisterIDSDeviceChangedObserver:(id)a0;
- (void)verifySignedPayload:(id)a0 matchesPayload:(id)a1 fromTokenURI:(id)a2 completion:(id /* block */)a3;

@end
