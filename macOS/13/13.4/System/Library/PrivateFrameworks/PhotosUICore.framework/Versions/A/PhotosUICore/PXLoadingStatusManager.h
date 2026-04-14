@class NSMapTable, NSMutableDictionary, NSMutableSet, NSHashTable;

@interface PXLoadingStatusManager : NSObject {
    NSHashTable *_observers;
}

@property (class, readonly) PXLoadingStatusManager *defaultManager;

@property (nonatomic, setter=_setUpdateScheduled:) BOOL _isUpdateScheduled;
@property (readonly, nonatomic) NSMutableSet *_invalidLoadingStatusItems;
@property (readonly, nonatomic) NSMapTable *_loadOperationTrackingIDsByItem;
@property (readonly, nonatomic) NSMapTable *_loadingStatusByItem;
@property (readonly, nonatomic) NSMutableDictionary *_itemByLoadOperationTrackingID;
@property (readonly, nonatomic) NSMutableDictionary *_loadingStatusByLoadOperationTrackingID;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_needsUpdate;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (id)willBeginLoadOperationWithItem:(id)a0;
- (void)_didUpdateLoadOperationWithTrackingID:(id)a0 withProgress:(double)a1 indeterminate:(BOOL)a2;
- (void)_invalidateLoadingStatusForItem:(id)a0;
- (void)_resetLoadingStatusForItemIfAppropriate:(id)a0;
- (void)_setLoadingStatus:(id)a0 forItem:(id)a1;
- (void)_setLoadingStatus:(id)a0 forLoadOperationTrackingID:(id)a1;
- (void)_updateLoadingStatusForItem:(id)a0;
- (void)_updateLoadingStatusForItemIfNeeded:(id)a0;
- (void)_updateLoadingStatusForItemsIfNeeded;
- (void)_updateNowIfNeeded;
- (void)didCancelLoadOperationWithTrackingID:(id)a0;
- (void)didCompleteLoadOperationWithTrackingID:(id)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)didUpdateLoadOperationWithIndeterminateProgressWithTrackingID:(id)a0;
- (void)didUpdateLoadOperationWithTrackingID:(id)a0 withProgress:(double)a1;
- (id)loadingStatusForItem:(id)a0;

@end
