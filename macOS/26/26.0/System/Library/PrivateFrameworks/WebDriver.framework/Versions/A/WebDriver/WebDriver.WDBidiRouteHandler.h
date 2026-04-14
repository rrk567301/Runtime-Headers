@protocol _TtP9WebDriver26WDBidiClientMessageHandler_;

@interface WebDriver.WDBidiRouteHandler : NSObject <WebDriver.WDBidiClientMessageHandler> {
    void /* unknown type, empty encoding */ driver;
    void /* unknown type, empty encoding */ clientStates;
    void /* unknown type, empty encoding */ pendingRequests;
    void /* unknown type, empty encoding */ registrations;
    void /* unknown type, empty encoding */ subscriptionLedger;
    void /* unknown type, empty encoding */ $__lazy_storage_$_messageEncoder;
    void /* unknown type, empty encoding */ $__lazy_storage_$_messageDecoder;
}

@property (nonatomic, readonly) id<_TtP9WebDriver26WDBidiClientMessageHandler_> messageHandler;

- (id)init;
- (id)initWithDriver:(id)a0;
- (void)clientDidDisconnect:(id)a0;
- (void).cxx_destruct;
- (void)clientDidConnect:(id)a0 for:(id)a1;
- (void)didCreateSession:(id)a0;
- (void)didReceiveMessage:(id)a0 from:(id)a1;
- (void)willDestroySession:(id)a0;

@end
