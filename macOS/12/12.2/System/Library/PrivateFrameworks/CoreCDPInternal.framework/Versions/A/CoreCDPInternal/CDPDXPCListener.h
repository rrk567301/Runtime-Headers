@class NSXPCListener, NSString;

@interface CDPDXPCListener : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (BOOL)_connection:(id)a0 hasEntitlement:(id)a1;
- (unsigned long long)_clientTypeForConnection:(id)a0;
- (BOOL)_shouldAcceptNewConnectionWithEntitlements:(unsigned long long)a0;

@end
