@class NSXPCListener, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MLMediaLibraryResourcesServiceServer : NSObject <MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceXPCProtocol, NSXPCListenerDelegate>

@property (class, readonly, nonatomic) MLMediaLibraryResourcesServiceServer *sharedInstance;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *accountChangeSemaphore;
@property (retain, nonatomic) NSXPCListener *xpcServiceListener;
@property (retain, nonatomic) NSMutableSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_removeObserver:(id)a0;
- (void)_addObserver:(id)a0;
- (id)_MLMediaLibraryResourcesServiceServerExportedInterface;
- (id)_MLMediaLibraryResourcesServiceServerRemoteObjectInterface;
- (void)_blockExecutionForOnGoingAccountChangeIfNeeded;
- (void)_unblockExecutionForFutureAccountChange;
- (void)emergencyDisconnectWithCompletion:(id /* block */)a0;
- (id)initWithAccountChangeObserver:(id)a0;
- (void)libraryContainerPathWithCompletion:(id /* block */)a0;
- (void)musicContainerPathWithCompletion:(id /* block */)a0;
- (void)performDatabasePathChange:(id)a0 completion:(id /* block */)a1;
- (void)terminateForFailureToPerformDatabasePathChange;

@end
