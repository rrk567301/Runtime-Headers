@class NSString, NSObject, GEOObserverHashTable;
@protocol OS_dispatch_queue;

@interface MNNavdStateUpdater : NSObject <MNNavigationStateObserver> {
    GEOObserverHashTable *_innerObservers;
    BOOL _hasObservers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedUpdater;

- (void)stateManager:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (id)initPrivate;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (BOOL)isNavigatingWithETA;
- (BOOL)isNavigatingOrPredictingDestination;
- (void).cxx_destruct;

@end
