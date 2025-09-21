@interface WeatherDaemon.WDSJWTAuthenticatorServiceListener : NSObject <WeatherDaemon.WDSJWTAuthenticatorServiceListenerType, NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ authServiceRequestDeduper;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)generateTokenWithUrl:(id)a0 completion:(id /* block */)a1;

@end
