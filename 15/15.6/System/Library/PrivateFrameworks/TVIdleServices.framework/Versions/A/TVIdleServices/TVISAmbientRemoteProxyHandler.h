@class TVISOperationQueue, NSString, NSXPCConnection, NSMutableArray;

@interface TVISAmbientRemoteProxyHandler : NSObject <TVISOperationQueueOwner>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id remoteProxy;
@property (readonly, nonatomic) TVISOperationQueue *operationQueue;
@property (readonly, nonatomic) NSMutableArray *outstandingQueries;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)_handleInterruption;
- (void)_makeQueryIfNeeded:(id /* block */)a0;
- (void)withRemoteProxy:(id /* block */)a0;

@end
