@interface WebDriver.WDWebSocketService : NSObject <WebDriver.WDWebSocketServerDelegate> {
    void /* unknown type, empty encoding */ allowedPorts;
    void /* unknown type, empty encoding */ listeners;
    void /* unknown type, empty encoding */ messageHandler;
}

@property (nonatomic, readonly) BOOL running;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMessageHandler:(id)a0;
- (BOOL)createListenerForSessionWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)createListenerOnPort:(unsigned short)a0 error:(id *)a1;
- (id)listenerURLForSessionIdentifier:(id)a0;
- (void)stopAllListeners;
- (void)webSocketServer:(id)a0 clientDidConnectOn:(id)a1;
- (void)webSocketServer:(id)a0 didFailReceiveWithError:(id)a1 on:(id)a2;
- (void)webSocketServer:(id)a0 didFailSendWithError:(id)a1 on:(id)a2;
- (void)webSocketServer:(id)a0 didReceiveMessage:(id)a1 on:(id)a2;
- (BOOL)webSocketServerShouldAcceptIncomingClient:(id)a0;

@end
