@class CCDatabaseUpdater, CCDevice, CCReplicatedStateEnumerator, CCDifferentialUpdateCache, CCSet;
@protocol CCSetChangeNotifierProtocol;

@interface CCDifferentialUpdater : NSObject {
    CCDatabaseUpdater *_databaseUpdater;
    CCReplicatedStateEnumerator *_replicatedStateEnumerator;
    id /* block */ _completion;
    unsigned int _addedLocalInstanceCount;
    unsigned int _updatedLocalInstanceCount;
    unsigned int _removedLocalInstanceCount;
    unsigned int _addedSharedItemCount;
    unsigned int _updatedSharedItemCount;
    unsigned int _removedSharedItemCount;
    unsigned int _clientAddOrUpdateCount;
    unsigned int _clientRemoveCount;
    CCSet *_set;
    CCDevice *_device;
    CCDifferentialUpdateCache *_diffUpdateCache;
    id<CCSetChangeNotifierProtocol> _changeNotifier;
    BOOL _isIncremental;
}

@property (nonatomic) BOOL didCommit;
@property (readonly, nonatomic) long long incrementalErrorCode;

+ (id)updaterForSet:(id)a0 withRequest:(id)a1 device:(id)a2 dataSiteManager:(id)a3 changeNotifier:(id)a4 timeout:(double)a5;

- (void).cxx_destruct;
- (BOOL)finish;
- (BOOL)_deleteAllItems;
- (void)_complete:(BOOL)a0;
- (void)abort;
- (BOOL)isIncremental;
- (unsigned long long)priorVersion;
- (BOOL)_deleteStaleItems;
- (BOOL)_diffUpdateItemsWithContents:(id)a0 metaContents:(id)a1;
- (BOOL)_shouldCommit;
- (BOOL)addItemsWithContents:(id)a0 metaContents:(id)a1;
- (id)initWithSet:(id)a0 device:(id)a1 request:(id)a2 database:(id)a3 changeNotifier:(id)a4 completion:(id /* block */)a5;
- (BOOL)mergeDelta:(id)a0 withDeltaMetadata:(id)a1;
- (unsigned long long)modifiedRowCount;
- (BOOL)removeSourceItemIdentifier:(id)a0;

@end
