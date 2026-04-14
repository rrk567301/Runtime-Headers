@class FMNSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FMNSXPCCachedConnection : NSObject <FMNSXPCConnecting>

@property (retain, nonatomic) FMNSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (copy, nonatomic) id /* block */ didInvalidate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObjectProxy;
- (void)invalidate;
- (void)addFailureBlock:(id /* block */)a0;
- (void)_invalidate;
- (id)initWithFMNSXPCConnection:(id)a0;
- (void).cxx_destruct;

@end
