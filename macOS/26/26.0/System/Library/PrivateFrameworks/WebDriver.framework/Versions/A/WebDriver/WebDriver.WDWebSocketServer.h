@class NSString, NSURL;
@protocol _TtP9WebDriver25WDWebSocketServerDelegate_;

@interface WebDriver.WDWebSocketServer : NSObject {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ clients;
    void /* unknown type, empty encoding */ networkQueue;
    void /* function */ sessionIdentifier;
}

@property (nonatomic, readonly) NSString *sessionIdentifier;
@property (nonatomic, readonly) unsigned short port;
@property (nonatomic) BOOL running;
@property (nonatomic, readonly) NSURL *listenerURL;
@property (nonatomic, retain) id<_TtP9WebDriver25WDWebSocketServerDelegate_> delegate;
@property (nonatomic, readonly) NSString *description;

- (void)stopListening;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPort:(unsigned short)a0 sessionIdentifier:(id)a1 error:(id *)a2;

@end
