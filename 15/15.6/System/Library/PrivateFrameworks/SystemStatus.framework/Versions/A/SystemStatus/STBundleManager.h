@class NSSet, NSArray, NSDictionary, NSHashTable, NSObject;
@protocol OS_dispatch_queue, BSDefaultObserver;

@interface STBundleManager : NSObject {
    NSArray *_directoryURLs;
    NSSet *_allowedBundleRecordIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    id<BSDefaultObserver> _internalDefaultsObserver;
    NSDictionary *_queue_allBundleRecordsByIdentifier;
    NSHashTable *_queue_observers;
    char _queue_ignoreAllowList;
}

@property (readonly, nonatomic) Class bundleRecordClass;
@property (readonly, copy, nonatomic) NSSet *recordIdentifiers;

+ (id)_defaultBundleRecordDirectoriesForClass:(Class)a0;
+ (id)_defaultBundleRecordIdentifierAllowListForClass:(Class)a0;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)_initWithBundleRecordClass:(Class)a0 directoryURLs:(id)a1 allowedBundleRecordIdentifiers:(id)a2;
- (id)_queue_loadAllBundleRecords;
- (void)_queue_prepareInternalPreferences;
- (void)_queue_registerForInternalPreferenceChanges;
- (void)_queue_runBlockOnObservers:(id /* block */)a0;
- (void)_queue_setIgnoreAllowedList:(char)a0;
- (void)_queue_unregisterForInternalPreferenceChanges;
- (void)_queue_updateAllBundleRecords;
- (void)_queue_updateAllBundleRecordsForAllBundleRecords:(id)a0;
- (id)bundleRecordForRecordIdentifier:(id)a0;
- (id)initWithBundleRecordClass:(Class)a0;

@end
