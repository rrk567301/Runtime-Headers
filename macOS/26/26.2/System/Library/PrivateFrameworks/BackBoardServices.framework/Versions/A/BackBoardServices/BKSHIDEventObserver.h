@class NSSet, NSString, NSMapTable, NSMutableSet, NSMutableDictionary, BSServiceInitiatingConnection;

@interface BKSHIDEventObserver : NSObject <BKSHIDEventObserverClientInterface> {
    BOOL _isNonLaunchingServer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_waitingOnServerHandshake;
    BOOL _lock_hasReceivedLatestDeferringObservationsFromServer;
    NSMapTable *_lock_deferringAssertionsToObservers;
    NSSet *_lock_deferringObservations;
    NSMutableSet *_lock_chainObserverContainers;
    NSMutableDictionary *_lock_identityToChainMatches;
    NSMutableSet *_lock_allChainObserverPredicates;
    BSServiceInitiatingConnection *_connection;
}

@property (readonly, nonatomic) NSSet *deferringObservations;
@property (readonly, nonatomic) BOOL hasReceivedLatestDeferringObservationsFromServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_lock_disableObservation;
- (void)_lock_flushInitialStateToServer;
- (oneway void)didUpdateDeferringChains:(id)a0;
- (id)addDeferringObserver:(id)a0;
- (oneway void)didUpdateDeferringObservations:(id)a0;
- (id)deferringObservations;
- (id)addObservingClient:(id)a0 forChainObserver:(id)a1;
- (void)_lock_resetChainObserverPredicates;
- (void).cxx_destruct;
- (id)_initWithConnectionFactory:(id)a0;
- (id)init;
- (void)_lock_enableObservation;

@end
