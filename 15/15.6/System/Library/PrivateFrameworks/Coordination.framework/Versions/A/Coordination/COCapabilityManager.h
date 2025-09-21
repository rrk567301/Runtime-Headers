@class NSSet, NSArray, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, COCapabilityManagerConnectionProvider;

@interface COCapabilityManager : NSObject <COCapabilityManagerClientInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSSet *registeredCapabilities;
@property (copy, nonatomic) NSArray *observers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (weak, nonatomic) NSXPCConnection *lastConnection;
@property (readonly, nonatomic) id<COCapabilityManagerConnectionProvider> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)initWithConnectionProvider:(id)a0;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (void)registerCapability:(id)a0;
- (void)_lostConnectionToService;
- (void)_notifyObserver:(id)a0 available:(char)a1;
- (void)_registerCapabililty:(id)a0;
- (void)_registerObserver:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)addObserverForCapability:(id)a0 inCluster:(id)a1 usingBlock:(id /* block */)a2;
- (void)availabilityChanged:(char)a0 ofCapability:(id)a1 inCluster:(id)a2;
- (void)unregisterCapability:(id)a0;

@end
