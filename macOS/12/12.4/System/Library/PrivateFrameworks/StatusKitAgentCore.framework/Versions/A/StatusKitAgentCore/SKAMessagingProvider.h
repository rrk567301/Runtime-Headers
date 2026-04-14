@class IDSService, NSString;
@protocol SKAMessagingProvidingDelegate;

@interface SKAMessagingProvider : NSObject <IDSServiceDelegate, SKAMessagingProviding>

@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKAMessagingProvidingDelegate> delegate;

+ (id)logger;
+ (id)_noValidIDSDetintationError;

- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 didHintCheckingTransportLogWithReason:(long long)a1;
- (id)resolveSenderHandleWithPreferredSenderHandle:(id)a0;
- (BOOL)sendMessage:(id)a0 toHandle:(id)a1 fromHandle:(id)a2 error:(id *)a3;
- (BOOL)isHandleAvailableToMessageFrom:(id)a0;
- (void)isHandleMessageable:(id)a0 completion:(id /* block */)a1;
- (BOOL)_keysharingIsDisabledByServer;
- (BOOL)sendMessage:(id)a0 toHandles:(id)a1 fromHandle:(id)a2 error:(id *)a3;
- (id)initWithDelegate:(id)a0 serviceIdentifier:(id)a1 queue:(id)a2;

@end
