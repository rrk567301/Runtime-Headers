@class NSString, NSDictionary, CHSChronoServicesConnection, NSHashTable, NSObject;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface CHSWidgetRelevanceService : NSObject <CHSChronoServiceClient, BSInvalidatable> {
    CHSChronoServicesConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_queue_entries;
    NSHashTable *_queue_observers;
    id<BSInvalidatable> _queue_assertion;
    BOOL _queue_invalidated;
}

@property (readonly, nonatomic) NSDictionary *cachedRelevanceEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (void)_notifyObservers;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)_queue_notifyObservers;
- (void)_queue_subscribe;
- (void)_queue_unsubscribe;
- (void)_syncOnInternalQueue;
- (void)widgetRelevanceEntriesDidChange:(id)a0;

@end
