@interface FinanceDaemon.WalletMessagingProvider : NSObject <PDApplicationMessageProvider> {
    void /* unknown type, empty encoding */ messageSink;
    void /* unknown type, empty encoding */ coreDataStore;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ deviceInfo;
    void /* unknown type, empty encoding */ imageProcessingService;
}

+ (id)makeProvider;

- (id)applicationMessageSink:(id)a0 createContentForMessageWithRegistration:(id)a1;
- (void)applicationMessageSink:(id)a0 tappedMessageWithRegistration:(id)a1;
- (void)processMessagesWithCompletionHandler:(void (^)(void))a0;
- (id)init;
- (void)applicationMessageSink:(id)a0 removedMessageWithRegistration:(id)a1;
- (void)connectApplicationMessageSink:(id)a0;
- (void).cxx_destruct;

@end
