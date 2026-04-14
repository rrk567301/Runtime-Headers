@class NSString, NSXPCConnection, PLAssetsdClientService, NSObject, PLXPCMessageLogger;
@protocol OS_dispatch_queue;

@interface PLAssetsdClientXPCConnection : NSObject <PLXPCProxyCreating> {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_externalNotificationQueue;
    NSXPCConnection *_connection;
    PLXPCMessageLogger *_connectionLogger;
    PLAssetsdClientService *_assetsdClientService;
    BOOL _isShuttingDown;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)addBarrierBlock:(id /* block */)a0;
- (void)handleInvalidation;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void)handleInterruption;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_makeNewResumedConnection;
- (id)_primitiveSynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_postInterruptedNotification;
- (id)_unboostingRemoteObjectProxy;
- (id)connectionWithErrorHandler:(id /* block */)a0;
- (void)addPhotoLibraryUnavailabilityHandler:(id /* block */)a0;

@end
