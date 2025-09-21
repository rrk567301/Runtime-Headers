@class CORapportBrowser, NSDictionary, CORapportTransport, COBrowserObserverSet, NSObject, NSString;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface COBallotBrowser : NSObject <COBrowserProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, getter=isTimerEnabled) BOOL timerEnabled;
@property (retain, nonatomic) NSDictionary *envelopes;
@property (weak, nonatomic) CORapportTransport *sourceTransport;
@property (weak, nonatomic) CORapportBrowser *rapportBrowser;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) double discoveryDelay;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) COBrowserObserverSet *observerSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_timerFired;
- (void)_withLock:(id /* block */)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)stop;
- (void)removeObserver:(id)a0;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)clearRecords;
- (void)_configureTimer;
- (id)addObserverUsingBlock:(id /* block */)a0;
- (void)_addToQueuedRecords:(id)a0;
- (void)_disableTimer_unsafe;
- (void)_enableTimer_unsafe;
- (void)_informObserversOfDiscoveredRecord:(id)a0;
- (void)discoveryUsingBallot:(id)a0;
- (void)discoveryUsingOnDemandNodeCreationRequest:(id)a0;
- (id)initWithDiscoveryDelay:(double)a0;
- (id)registeredObservers;

@end
