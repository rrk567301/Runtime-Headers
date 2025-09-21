@class NSXPCListener, NSString, SYDocumentWorkflowsRepository, NSObject;
@protocol OS_dispatch_queue;

@interface SYDocumentWorkflowsService : NSObject <NSXPCListenerDelegate> {
    SYDocumentWorkflowsRepository *_repository;
}

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)beginListeningToConnections;

@end
