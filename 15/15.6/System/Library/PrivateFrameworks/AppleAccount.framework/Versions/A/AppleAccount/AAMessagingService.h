@class NSObject, NSString, IDSIDQueryController, NSMutableArray, IDSService;
@protocol OS_dispatch_queue, AAMessagingServiceDelegate;

@interface AAMessagingService : NSObject <IDSServiceDelegate, AAIDSMessagingServiceInternal, AAIDSMessagingService> {
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    IDSIDQueryController *_queryController;
    NSString *_serviceName;
    NSObject<OS_dispatch_queue> *_incomingMessageQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSMutableArray *pendingInheritanceMessages;
@property (readonly, copy, nonatomic) NSMutableArray *pendingCustodianMessages;
@property (weak, nonatomic) id<AAMessagingServiceDelegate> inheritanceDelegate;
@property (weak, nonatomic) id<AAMessagingServiceDelegate> custodianDelegate;

+ (id)sharedService;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(char)a3 error:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)_addMessageToPendingCustodianMessages:(id)a0;
- (void)_addMessageToPendingInheritanceMessages:(id)a0;
- (id)_createNewCapabilitySetFrom:(id)a0;
- (void)_getCurrentRemoteDevices:(id)a0 completion:(id /* block */)a1;
- (id)_optionsDictionaryWithResponseIdentifier:(id)a0 fireAndForget:(char)a1 requiredCapabilities:(id)a2 lackingCapabilities:(id)a3 sendFromHandleUri:(id)a4;
- (void)_processMessage:(id)a0;
- (void)_processPendingIDSMessagesOfType:(long long)a0;
- (void)doDestinations:(id)a0 haveIneligibleDeviceForCapability:(id)a1 completion:(id /* block */)a2;
- (void)fetchCapability:(id)a0 destinations:(id)a1 completion:(id /* block */)a2;
- (void)partitionByCapability:(id)a0 completion:(id /* block */)a1;
- (id)sendMessage:(id)a0 destinations:(id)a1 sendFromHandleUri:(id)a2 responseIdentifier:(id)a3 fireAndForget:(char)a4 requiredCapabilities:(id)a5 lackingCapabilities:(id)a6 error:(id *)a7;

@end
