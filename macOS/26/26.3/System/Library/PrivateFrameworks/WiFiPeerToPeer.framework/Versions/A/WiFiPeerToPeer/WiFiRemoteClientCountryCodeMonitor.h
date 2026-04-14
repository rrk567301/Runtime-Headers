@class NSString, WiFiP2PXPCConnection;

@interface WiFiRemoteClientCountryCodeMonitor : NSObject <WiFiRemoteClientCountryCodeMonitorXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
}

@property (copy, nonatomic) id /* block */ setCountryCodeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedObject;
- (void)beginMonitoring;
- (void)setCountryCode:(id)a0;
- (id)init;
- (id)exportedInterface;
- (void)endMonitoring;
- (void).cxx_destruct;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;

@end
