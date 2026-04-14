@interface WeatherDaemon.WDSJWTAuthenticatorServiceListener : NSObject <WeatherDaemon.WDSJWTAuthenticatorServiceListenerType, NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ authServiceRequestDeduper;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)generateTokenWithUrl:(id)a0 completion:(id /* block */)a1;

@end
