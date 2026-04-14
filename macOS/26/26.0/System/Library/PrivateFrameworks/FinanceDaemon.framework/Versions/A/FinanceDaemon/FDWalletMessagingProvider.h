@class NSString, _TtC13FinanceDaemon23WalletMessagingProvider;

@interface FDWalletMessagingProvider : NSObject <PDApplicationMessageProvider>

@property (retain, nonatomic) _TtC13FinanceDaemon23WalletMessagingProvider *wrappedProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)applicationMessageSink:(id)a0 createContentForMessageWithRegistration:(id)a1;
- (void)applicationMessageSink:(id)a0 tappedMessageWithRegistration:(id)a1;
- (void)processMessagesWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)applicationMessageSink:(id)a0 removedMessageWithRegistration:(id)a1;
- (void)connectApplicationMessageSink:(id)a0;
- (void).cxx_destruct;

@end
