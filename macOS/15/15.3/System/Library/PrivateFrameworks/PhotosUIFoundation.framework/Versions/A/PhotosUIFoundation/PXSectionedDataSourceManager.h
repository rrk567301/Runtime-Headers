@class PXSectionedDataSource, PXSectionedChangeDetailsRepository, NSMutableArray;

@interface PXSectionedDataSourceManager : PXObservable <PXMutableSectionedDataSourceManager> {
    NSMutableArray *_waitingConditions;
    PXSectionedDataSource *_dataSource;
}

@property (readonly, nonatomic) PXSectionedDataSource *dataSourceIfExists;
@property (readonly, nonatomic) PXSectionedDataSource *dataSource;
@property (readonly, nonatomic) PXSectionedChangeDetailsRepository *changeHistory;

- (id)init;
- (void).cxx_destruct;
- (void)_setDataSource:(id)a0;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;
- (id)createInitialDataSource;
- (void)setDataSource:(id)a0 changeDetails:(id)a1;
- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;
- (void)didPublishChanges;
- (id)mutableChangeObject;
- (id)changeDetailsFromDataSource:(id)a0 toDataSource:(id)a1;
- (void)didCreateInitialDataSource;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (id)queryObserversInterestingObjectReferences;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (void)setDataSource:(id)a0 changeDetailsArray:(id)a1;
- (void)_reevaluateWaitingConditions;
- (void)_waitingConditionDidTimeout:(id)a0;
- (id)allChangeDetailsFromDataSource:(id)a0 toDataSource:(id)a1;
- (void)waitForCondition:(id /* block */)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;

@end
