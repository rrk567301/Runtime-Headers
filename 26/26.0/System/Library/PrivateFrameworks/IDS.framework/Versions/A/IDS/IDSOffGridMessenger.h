@class IDSXPCDaemonController, NSString, NSSet, IDSServiceProperties, NSObject, _IDSService;
@protocol OS_dispatch_queue, IDSOffGridMessengerDelegate;

@interface IDSOffGridMessenger : NSObject <IDSServiceDelegate, IDSDaemonListenerProtocol, IDSXPCOffGridMessengerClient>

@property (retain, nonatomic) IDSXPCDaemonController *daemonController;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) IDSServiceProperties *serviceProperties;
@property (readonly, nonatomic) _IDSService *service;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<IDSOffGridMessengerDelegate> delegate;
@property (readonly, nonatomic) NSSet *handles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)sendServiceUpdateMessage:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)sendEncryptedOffGridMessage:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)sendServerMessage:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_commandsForServiceType:(long long)a0;
- (void)_handleIncomingDeliveryReceiptMessage:(id)a0 fromID:(id)a1 context:(id)a2;
- (void)_handleIncomingServiceUpdateMessage:(id)a0 fromID:(id)a1 context:(id)a2;
- (void)_handleIncomingTextMessage:(id)a0 fromID:(id)a1 context:(id)a2;
- (id)_serviceNameForServiceType:(long long)a0;
- (long long)_serviceTypeForServiceName:(id)a0;
- (void)_setupInterruptionHandler;
- (void)_setupXPC;
- (void)decryptOffGridMessage:(id)a0 completion:(id /* block */)a1;
- (void)donateHandlesForMessagingKeys:(id)a0 fromURI:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)encryptAndSendOffGridMessage:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)encryptOffGridMessage:(id)a0 completion:(id /* block */)a1;
- (void)incomingOffGridMessage:(id)a0 messageContext:(id)a1 completion:(id /* block */)a2;
- (void)incomingOffGridSummaryMessage:(id)a0 messageContext:(id)a1 completion:(id /* block */)a2;
- (id)initWithService:(id)a0 queue:(id)a1 error:(id *)a2;
- (id)initWithServiceType:(long long)a0 queue:(id)a1 daemonController:(id)a2 error:(id *)a3;
- (id)initWithServiceType:(long long)a0 queue:(id)a1 error:(id *)a2;
- (void)resultsForDestinationURIs:(id)a0 senderURI:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)sendFetchRequestForHandles:(id)a0 completions:(id /* block */)a1;

@end
