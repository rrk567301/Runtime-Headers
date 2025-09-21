@class NSString, WDHTTPServer, _TtC9WebDriver18WDBidiRouteHandler, _TtC9WebDriver18WDWebSocketService;
@protocol WDHTTPRouteHandler, WDSessionProvider;

@interface WDHTTPDriverInterface : RWIDriverInterface

@property (readonly, copy, nonatomic) NSString *interface;
@property (readonly, nonatomic) unsigned long long port;
@property (readonly, nonatomic) WDHTTPServer *httpServer;
@property (retain, nonatomic) id<WDHTTPRouteHandler> routeHandler;
@property (readonly, nonatomic) id<WDSessionProvider> sessionProvider;
@property (readonly, nonatomic) _TtC9WebDriver18WDWebSocketService *webSocketService;
@property (retain, nonatomic) _TtC9WebDriver18WDBidiRouteHandler *bidiRouteHandler;

- (BOOL)stop;
- (void).cxx_destruct;
- (BOOL)start:(id *)a0;
- (id)initWithConfiguration:(id)a0 sessionProvider:(id)a1;

@end
