@class CNContactStore, NSString, CNMutableMultiDictionary, CNCoalescingTimer;
@protocol CNScheduler;

@interface CNContactChangesNotifier : NSObject <CNCoalescingTimerDelegate> {
    char _observingNotification;
    id<CNScheduler> _resourceLock;
    id<CNScheduler> _workQueue;
    id<CNScheduler> _downstream;
    CNContactStore *_contactStore;
    CNCoalescingTimer *_entryCompactionTimer;
    CNMutableMultiDictionary *_registeredObservers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedNotifier;
+ (id)workQueue_createFetchersFromRegisteredObservers:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)timerDidEmitEvent:(id)a0;
- (void)contactStoreDidChange:(id)a0;
- (id)initWithContactStore:(id)a0 downstreamScheduler:(id)a1 schedulerProvider:(id)a2;
- (void)registerObserver:(id)a0 forContact:(id)a1;
- (void)registerObserver:(id)a0 forContact:(id)a1 keysToFetch:(id)a2;
- (void)registerObserver:(id)a0 forContact:(id)a1 keysToFetch:(id)a2 completionHandler:(id /* block */)a3;
- (void)removeEntriesWithoutObservers;
- (void)unregisterObserver:(id)a0 forContact:(id)a1;
- (void)unregisterObserver:(id)a0 forContact:(id)a1 completionHandler:(id /* block */)a2;

@end
