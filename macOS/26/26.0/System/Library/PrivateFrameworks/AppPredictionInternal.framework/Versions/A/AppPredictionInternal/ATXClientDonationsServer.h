@class NSXPCListener, NSString;

@interface ATXClientDonationsServer : NSObject <ATXClientDonationsXPCInterface, NSXPCListenerDelegate>

@property (readonly, nonatomic) NSXPCListener *xpcListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)donateDocumentInteraction:(id)a0 completion:(id /* block */)a1;
- (void)donateMenuItem:(id)a0 completion:(id /* block */)a1;

@end
