@class NSURL, FPExtensionEnumerationSettings, FPItemID;

@interface FPExtensionCollection : FPItemCollection {
    FPItemID *_alternateID;
    id _providerDomainMonitoringContext;
    id _dsCopySubscriber;
    NSURL *_dsCopySubscriberURL;
    BOOL _dsCopyShouldStopAccessingSubscriberURL;
}

@property (copy) FPExtensionEnumerationSettings *settings;

+ (BOOL)item:(id)a0 isValidForObservedItemID:(id)a1;
+ (BOOL)_item:(id)a0 isCollectionRootForObservedItemID:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)startObserving;
- (void)stopObserving;
- (id)initWithSettings:(id)a0;
- (BOOL)recoverFromError:(id)a0;
- (BOOL)shouldRetryError:(id)a0;
- (BOOL)isRootItem:(id)a0;
- (void)updateRootItem:(id)a0;
- (BOOL)isCollectionValidForItem:(id)a0;
- (id)createDataSourceWithSortDescriptors:(id)a0;
- (id)scopedSearchQuery;
- (id)enumeratedItemID;
- (void)_failMonitoringWithError:(id)a0;
- (void)_startMonitoringDomains;
- (void)_stopMonitoringDomains;
- (void)_startMonitoringDSCopyProgress;
- (void)_stopMonitoringDSCopyProgress;

@end
