@class NSXPCListener, NSString, NSMutableArray, PKPaymentWebServiceLocalProxyTargetDevice, PKPaymentWebService;

@interface PKPaymentWebServiceProxyTargetDeviceDebugHelper : NSObject <NSXPCListenerDelegate> {
    PKPaymentWebService *_webService;
    NSXPCListener *_remoteListener;
    PKPaymentWebServiceLocalProxyTargetDevice *_localTarget;
    NSMutableArray *_remoteTargets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)webServiceWithProxiedTargetDevice:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithWebService:(id)a0;
- (id)localProxyTargetDevice;

@end
