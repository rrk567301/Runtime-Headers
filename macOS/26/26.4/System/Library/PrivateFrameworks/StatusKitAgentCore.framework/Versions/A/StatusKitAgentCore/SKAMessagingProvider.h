@class NSString, NSMutableDictionary, NSArray, NSObject, IDSService;
@protocol SKAMessagingProvidingDelegate, SKAServerBagProviding, OS_dispatch_queue, SKAPushManaging;

@interface SKAMessagingProvider : NSObject <IDSServiceDelegate, SKAMessagingProviding>

@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) id<SKAPushManaging> pushManager;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) NSMutableDictionary *registeredIDSDeviceChangedObservers;
@property (retain, nonatomic) id<SKAServerBagProviding> serverBag;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKAMessagingProvidingDelegate> delegate;
@property (readonly, nonatomic) NSArray *idsDevices;

+ (id)deviceTokenForTokenURI:(id)a0;
+ (id)logger;
+ (BOOL)_isBlastdoorEnabledForService:(id)a0;
+ (id)handleForTokenURI:(id)a0;
+ (BOOL)isRegisteredWithIDS;

- (id)deviceToken;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)isHandleMessageableForPresence:(id)a0 completion:(id /* block */)a1;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)registerIDSDeviceChangedObserver:(id /* block */)a0;
- (BOOL)isFromIDFromSelfAccount:(id)a0;
- (id)deviceName;
- (void)verifySignedPayload:(id)a0 matchesPayload:(id)a1 fromTokenURI:(id)a2 completion:(id /* block */)a3;
- (BOOL)isHandleAvailableToMessageFrom:(id)a0;
- (void)isHandleMessageable:(id)a0 completion:(id /* block */)a1;
- (BOOL)sendMessageToSelfDevices:(id)a0 limitToPresenceCapable:(BOOL)a1 identifier:(id *)a2 error:(id *)a3;
- (void)service:(id)a0 didHintCheckingTransportLogWithReason:(long long)a1;
- (id)resolveSenderHandleWithPreferredSenderHandle:(id)a0;
- (id)deviceNameForTokenURI:(id)a0;
- (void)signPayload:(id)a0 completion:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 serviceIdentifier:(id)a1 serverBag:(id)a2 queue:(id)a3;
- (BOOL)sendMessage:(id)a0 toHandle:(id)a1 fromHandle:(id)a2 limitToPresenceCapable:(BOOL)a3 identifier:(id *)a4 error:(id *)a5;
- (void).cxx_destruct;
- (id)tokenURIWithError:(id *)a0;
- (void)unregisterIDSDeviceChangedObserver:(id)a0;
- (void)verifySignedPayloads:(id)a0 completion:(id /* block */)a1;
- (BOOL)sendMessage:(id)a0 toHandles:(id)a1 fromHandle:(id)a2 limitToPresenceCapable:(BOOL)a3 identifier:(id *)a4 error:(id *)a5;
- (void)listOfValidSenderHandles:(id)a0 containsSenderMergeID:(id)a1 completion:(id /* block */)a2;
- (id)selfAddressedURIForURI:(id)a0 error:(id *)a1;
- (BOOL)isValidURI:(id)a0;

@end
