@class NSString, NSURL, NSNumber, VSWebServer;

@interface VSCookieServer : NSObject <VSWebServerDelegate, VSWebServerConnectionDelegate>

@property (retain, nonatomic) VSWebServer *server;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *cookieName;
@property (copy, nonatomic) NSString *cookieValue;
@property (copy, nonatomic) NSNumber *cookieMaxAge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)cookieGetter;
- (id)cookieSetter;
- (void)webServer:(id)a0 didOpenConnection:(id)a1;
- (void)webServer:(id)a0 didReceiveError:(id)a1;
- (void)webServerConnection:(id)a0 didReceiveRequest:(id)a1;

@end
