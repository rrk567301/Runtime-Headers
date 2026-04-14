@class NSXPCListener, NSString, NSObject;
@protocol OS_dispatch_queue, SYAddLinkContextServiceDelegate;

@interface SYAddLinkContextService : NSObject <NSXPCListenerDelegate, SYAddLinkContextServiceProtocol>

@property (retain, nonatomic) NSXPCListener *_listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_serviceQueue;
@property (readonly, nonatomic) BOOL _forTesting;
@property (weak, nonatomic) id<SYAddLinkContextServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginListeningToConnections;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initForTesting:(BOOL)a0;
- (void)dealloc;
- (oneway void)userWillAddLinkWithActivityData:(id)a0 completion:(id /* block */)a1;
- (id)_listenerEndpoint;
- (oneway void)userEditDidAddContentItemDatas:(id)a0;
- (id)init;
- (oneway void)userDidRemoveContentItemDatas:(id)a0;
- (void).cxx_destruct;

@end
