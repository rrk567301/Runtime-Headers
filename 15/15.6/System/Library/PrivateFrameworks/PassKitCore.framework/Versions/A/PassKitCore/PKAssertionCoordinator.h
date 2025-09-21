@class NSString, NSHashTable, NSObject, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKAssertionCoordinator : NSObject <PKXPCServiceDelegate> {
    NSHashTable *_acquiredAssertions;
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_coordinatorSerialQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_removeAssertionWithIdentifier:(id)a0;
- (void)invalidateAssertion:(id)a0 completion:(id /* block */)a1;
- (id)_existingRemoteObjectProxy;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)acquireAssertionOfType:(unsigned long long)a0 withReason:(id)a1 completion:(id /* block */)a2;
- (void)assertion:(id)a0 shouldInvalidateWhenBackgrounded:(char)a1;
- (void)hasValidAssertionOfType:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initSharedInstance;
- (void)isAssertionValid:(id)a0 completion:(id /* block */)a1;
- (void)remoteService:(id)a0 didEstablishConnection:(id)a1;
- (void)remoteService:(id)a0 didInterruptConnection:(id)a1;
- (void)remoteServiceDidSuspend:(id)a0;

@end
