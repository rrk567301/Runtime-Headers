@class NSString, NSMutableSet, NSHashTable;
@protocol IPGlobalInstallableStateSourceBehavior;

@interface IPGlobalInstallableStateSource : NSObject <IPGlobalInstallableStateSourceBehaviorUpdateObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
    id<IPGlobalInstallableStateSourceBehavior> _behavior;
    NSHashTable *_observers;
    NSMutableSet *_knownIdentities;
    char _isObservingBehavior;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAllAppStateSource;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)globalStateSourceBehavior:(id)a0 stateSourceAvailableForIdentity:(id)a1 withGenerator:(id /* block */)a2;
- (id)initWithBehavior:(id)a0;
- (void)makeAndEnumerateStateSourcesForExtantIdentities:(id /* block */)a0;
- (void)makeAndEnumerateStateSourcesForInstallingIdentities:(id /* block */)a0;
- (void)testingActionBarrier;

@end
