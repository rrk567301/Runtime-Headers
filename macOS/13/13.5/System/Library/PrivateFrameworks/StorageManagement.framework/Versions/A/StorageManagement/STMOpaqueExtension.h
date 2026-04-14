@class NSXPCListener, NSExtension, NSString;

@interface STMOpaqueExtension : NSObject <NSXPCListenerDelegate, STMExtensionNotificationPosting>

@property (retain) NSExtension *underlyingExtension;
@property (retain) NSXPCListener *listener;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)___nsx_pingHost:(id /* block */)a0;
- (id)listenerEndpoint;
- (id)initWithExtension:(id)a0;
- (void)extension:(id)a0 partialResourceItems:(id)a1;
- (void)extension:(id)a0 notifyResourcesDidChange:(id)a1;
- (void)extension:(id)a0 notifyTipsDidChange:(id)a1;
- (void)extension:(id)a0 notifyTotalSpaceUsedDidChange:(id)a1;

@end
