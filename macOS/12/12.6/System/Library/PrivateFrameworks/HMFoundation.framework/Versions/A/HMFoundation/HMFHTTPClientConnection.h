@class HMFNetAddress, NSString, _HMFCFHTTPServerConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HMFHTTPClientConnectionDelegate;

@interface HMFHTTPClientConnection : HMFObject <_HMFCFHTTPServerConnectionDelegate, HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSMutableArray *pendingRespones;
@property (readonly, nonatomic) _HMFCFHTTPServerConnection *internal;
@property (readonly, nonatomic) HMFNetAddress *peerAddress;
@property (weak) id<HMFHTTPClientConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (id)shortDescription;
- (void)connection:(id)a0 didReceiveRequest:(id)a1;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)sendResponse:(id)a0 completionHandler:(id /* block */)a1;

@end
