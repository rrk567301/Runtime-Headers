@class NSString, NSMutableDictionary, NSMutableSet, DADevice, NSObject;
@protocol OS_dispatch_queue;

@interface DAExtensionCoordinator : NSObject {
    BOOL _activateCalled;
    NSMutableDictionary *_extensionMap;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned long long _invalidateReason;
    BOOL _relaunchExtensions;
    BOOL _sessionAdded;
}

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) DADevice *device;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (readonly, copy, nonatomic) NSMutableSet *sessionSet;

- (void)invalidateWithReason:(unsigned long long)a0;
- (void)invalidate;
- (void)_interrupted;
- (void)_invalidated;
- (unsigned long long)addSession:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)_update;
- (unsigned long long)removeSession:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)update;
- (void)activate;
- (void)_invalidate;
- (void)_activateDirect;
- (void)_activateExtension:(id)a0;
- (void)_extensionActivatedWithType:(long long)a0 transportType:(long long)a1;
- (void)_extensionEnsureStartedWithType:(long long)a0 transportType:(long long)a1;
- (void)_extensionEnsureStoppedWithType:(long long)a0 transportType:(long long)a1;
- (void)_extensionInvalidatedWithType:(long long)a0 transportType:(long long)a1;
- (BOOL)_extensionShouldRunWithType:(long long)a0 transportType:(long long)a1;
- (id)_extensionWithType:(long long)a0 transportType:(long long)a1;
- (void)_findExtensionWithType:(long long)a0 transportType:(long long)a1 completion:(id /* block */)a2;
- (void)_handleAccessoryTransportEvent:(id)a0 transportType:(long long)a1;
- (void)_handleAccessoryTransportInternetEvent:(id)a0;
- (void)_handleAccessoryTransportLocalEvent:(id)a0;
- (void)_handleEvent:(id)a0 type:(long long)a1 transportType:(long long)a2;
- (void)_invalidateExtensions;
- (void)_performKeyExchange;
- (void)_reportEvent:(id)a0;
- (void)_reportEventToSessions:(id)a0;
- (void)_reportEventType:(long long)a0;
- (int)getExtensionPidByType:(long long)a0 transport:(long long)a1;
- (id)initWithDevice:(id)a0 bundleID:(id)a1;

@end
