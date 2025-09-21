@class FPExtensionCollectionDSCopySubscriber, FPExtensionEnumerationSettings, FPItemID;

@interface FPExtensionCollection : FPItemCollection {
    FPItemID *_alternateID;
    id _providerDomainMonitoringContext;
    FPExtensionCollectionDSCopySubscriber *_dsCopySubscriber;
}

@property (copy) FPExtensionEnumerationSettings *settings;

+ (char)_item:(id)a0 isCollectionRootForObservedItemID:(id)a1;
+ (char)item:(id)a0 isValidForObservedItemID:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)startObserving;
- (void)stopObserving;
- (id)initWithSettings:(id)a0;
- (char)shouldRetryError:(id)a0;
- (void)updateRootItem:(id)a0;
- (void)_failMonitoringWithError:(id)a0;
- (void)_startMonitoringDSCopyProgress;
- (void)_startMonitoringDomains;
- (void)_stopMonitoringDomains;
- (id)createDataSourceWithSortDescriptors:(id)a0;
- (id)enumeratedItemID;
- (char)isCollectionValidForItem:(id)a0;
- (char)isRootItem:(id)a0;
- (char)recoverFromError:(id)a0;
- (id)scopedSearchQuery;

@end
